#include "gamemanager.h"

#include <QPen>
#include <QBrush>
#include <QDebug>

#include <ctime>
#include <fstream>

using namespace std;

GameManager::GameManager() {
    qDebug() << "GameManager Constructor called";
    myTurn = true;
    shotAnimation = new Blast(0, 0);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(advance()));
    timer->start(500 / 20);
    qDebug() << "GameManager Timer started";
}

GameManager::~GameManager() {
    qDebug() << "GameManager Destructor called";
}

void GameManager::init() {
    qDebug() << "GameManager init() called";
    isRunning = false;
    count = 0;

    qDebug() << "Initializing boards";
    for (int r = 0; r < BOARD_SIZE; r++) {
        for (int c = 0; c < BOARD_SIZE; c++) {
            myBoard[r][c] = new BoardCell(myScene, r, c, RECT_SIZE);
            enemyBoard[r][c] = new BoardCell(enemyScene, r, c, RECT_SIZE);
            connect(enemyBoard[r][c], &BoardCell::clicked, this, &GameManager::onCellClicked);
        }
    }

    qDebug() << "Initializing ships";
    for (int i = 0; i < 5; i++) {
        ships[i] = new Ship(myScene, i);
        myScene->addItem(ships[i]);
        connect(ships[i], &Ship::onShipPlaced, this, &GameManager::shipPlaced);
    }
}

void GameManager::clear() {
    qDebug() << "GameManager clear() called";
    for (int r = 0; r < BOARD_SIZE; r++) {
        for (int c = 0; c < BOARD_SIZE; c++) {
            delete myBoard[r][c];
            delete enemyBoard[r][c];
        }
    }
}

void GameManager::clearShips() {
    qDebug() << "GameManager clearShips() called";
    for (int i = 0; i < 5; i++) {
        myScene->removeItem(ships[i]);
        delete ships[i];
    }
}

void GameManager::onCellClicked(int row, int col) {
    qDebug() << "onCellClicked() called. Row:" << row << "Col:" << col << "Count:" << count << "MyTurn:" << myTurn;

    if (count > 0 || !myTurn) {
        qDebug() << "Click ignored. Either count > 0 or it's not the player's turn";
        return;
    }

    curRow = row;
    curCol = col;
    isShooting = true;
    count = 30;
    shotAnimation->blastframe = 0;
    shotAnimation->incre = true;
    shotAnimation->setPos(col * RECT_SIZE + (RECT_SIZE / 2), row * RECT_SIZE + (RECT_SIZE / 2));
    enemyScene->addItem(shotAnimation);

    emit onShot(row, col);
}

void GameManager::advance() {
    qDebug() << "advance() called. Count:" << count << "IsRunning:" << isRunning;

    // Return early if not running and count is zero
    if (!isRunning && count == 0) {
        return;
    }

    if (count > 0 && isRunning) {
        if (myTurn) {
            --count;
            shotAnimation->advance();
            if (count == 0) {
                if (isShooting) {
                    qDebug() << "Shooting in progress. Extending count.";
                    count = 30;
                    return;
                }

                myTurn = !myTurn;
                enemyScene->removeItem(shotAnimation);
                enemyScene->update();
                enemyBoard[curRow][curCol]->onReceiveShot(type);
                emit onSetStatus("Opponent's turn!");
            }
        } else {
            --count;
            shotAnimation->advance();
            if (count == 0) {
                myTurn = !myTurn;
                myScene->removeItem(shotAnimation);
                myScene->update();
                myBoard[curRow][curCol]->onReceiveShot(type);
                emit onSetStatus("Your turn!");
            }
        }
    }
}


void GameManager::myShotDone(CellType type) {
    qDebug() << "myShotDone() called. Type:" << type;
    this->type = type;
    isShooting = false;
}

void GameManager::enemyShot(int row, int col, CellType type) {
    qDebug() << "enemyShot() called. Row:" << row << "Col:" << col << "Type:" << type;
    this->type = type;
    curRow = row;
    curCol = col;
    myTurn = false;
    count = 30;
    shotAnimation->blastframe = 0;
    shotAnimation->incre = true;
    shotAnimation->setPos(col * RECT_SIZE + (RECT_SIZE / 2), row * RECT_SIZE + (RECT_SIZE / 2));
    myScene->addItem(shotAnimation);
}

bool GameManager::allShipsArePlaced() {
    qDebug() << "allShipsArePlaced() called";

    QRectF* rectShips[5];
    for (int i = 0; i < 5; i++) {
        if (Ship::orientation_array[i] == 0) {
            rectShips[i] = new QRectF(Ship::x_array[i], Ship::y_array[i], RECT_SIZE, RECT_SIZE * (i + 2));
        } else {
            rectShips[i] = new QRectF(Ship::x_array[i] - RECT_SIZE * (i + 2), Ship::y_array[i], RECT_SIZE * (i + 2), RECT_SIZE);
        }
    }

    for (int first = 1; first < 5; ++first) {
        for (int second = 0; second < first; ++second) {
            if (rectShips[first]->intersects(*rectShips[second]) || rectShips[first]->contains(*rectShips[second])) {
                qDebug() << "Ship placement invalid. Overlapping ships.";
                for (int i = 0; i < 5; ++i) delete rectShips[i];
                return false;
            }
        }
    }

    for (int i = 0; i < 5; ++i) delete rectShips[i];
    qDebug() << "All ships are placed correctly.";
    return true;
}

void GameManager::shipPlaced() {
    qDebug() << "shipPlaced() called";
    emit onShipPlaced();
}

void GameManager::loggingRequest(Request request, char* message) {
    qDebug() << "loggingRequest() called for user:" << request.user.username;

    time_t now = time(nullptr);
    tm* localTime = localtime(&now);

    QString filename = QString("../log/") + QString(request.user.username);

    char timestamp[100];
    strftime(timestamp, sizeof(timestamp), "%d-%m-%Y %H:%M:%S", localTime);

    ofstream file(filename.toStdString(), ios::app);
    if (!file) {
        qDebug() << "Failed to open file:" << filename;
        return;
    }

    file << message << " - " << timestamp << endl;
    file.close();
    qDebug() << "Request logged successfully.";
}

void GameManager::loggingResponse(Response response, char* message) {
    qDebug() << "loggingResponse() called for user:" << response.user.username;

    time_t now = time(nullptr);
    tm* localTime = localtime(&now);

    QString filename = QString("../log/") + QString(response.user.username);

    char timestamp[100];
    strftime(timestamp, sizeof(timestamp), "%d-%m-%Y %H:%M:%S", localTime);

    ofstream file(filename.toStdString(), ios::app);
    if (!file) {
        qDebug() << "Failed to open file:" << filename;
        return;
    }

    file << message << " - " << timestamp << endl;
    file.close();
    qDebug() << "Response logged successfully.";
}
