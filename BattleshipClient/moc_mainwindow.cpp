/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[59];
    char stringdata0[710];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 11), // "onReadyRead"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 20), // "onSocketDisconnected"
QT_MOC_LITERAL(4, 45, 15), // "onErrorOccurred"
QT_MOC_LITERAL(5, 61, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(6, 90, 5), // "error"
QT_MOC_LITERAL(7, 96, 13), // "setStatusText"
QT_MOC_LITERAL(8, 110, 6), // "status"
QT_MOC_LITERAL(9, 117, 19), // "setReplayStatusText"
QT_MOC_LITERAL(10, 137, 14), // "challengeClick"
QT_MOC_LITERAL(11, 152, 4), // "User"
QT_MOC_LITERAL(12, 157, 4), // "user"
QT_MOC_LITERAL(13, 162, 16), // "itemHistoryClick"
QT_MOC_LITERAL(14, 179, 5), // "Match"
QT_MOC_LITERAL(15, 185, 5), // "match"
QT_MOC_LITERAL(16, 191, 22), // "notifyChallengeRequest"
QT_MOC_LITERAL(17, 214, 16), // "updateListWidget"
QT_MOC_LITERAL(18, 231, 23), // "updateListWidgetHistory"
QT_MOC_LITERAL(19, 255, 4), // "math"
QT_MOC_LITERAL(20, 260, 10), // "shipPlaced"
QT_MOC_LITERAL(21, 271, 4), // "shot"
QT_MOC_LITERAL(22, 276, 3), // "row"
QT_MOC_LITERAL(23, 280, 3), // "col"
QT_MOC_LITERAL(24, 284, 7), // "botShot"
QT_MOC_LITERAL(25, 292, 8), // "shotDone"
QT_MOC_LITERAL(26, 301, 7), // "current"
QT_MOC_LITERAL(27, 309, 4), // "size"
QT_MOC_LITERAL(28, 314, 14), // "showReplayPage"
QT_MOC_LITERAL(29, 329, 11), // "QList<Move>"
QT_MOC_LITERAL(30, 341, 5), // "moves"
QT_MOC_LITERAL(31, 347, 8), // "getUsers"
QT_MOC_LITERAL(32, 356, 10), // "getMatches"
QT_MOC_LITERAL(33, 367, 8), // "getMoves"
QT_MOC_LITERAL(34, 376, 14), // "handleResponse"
QT_MOC_LITERAL(35, 391, 11), // "QByteArray&"
QT_MOC_LITERAL(36, 403, 5), // "bytes"
QT_MOC_LITERAL(37, 409, 12), // "handleSignIn"
QT_MOC_LITERAL(38, 422, 8), // "Response"
QT_MOC_LITERAL(39, 431, 8), // "response"
QT_MOC_LITERAL(40, 440, 12), // "handleSignUp"
QT_MOC_LITERAL(41, 453, 13), // "handleSignOut"
QT_MOC_LITERAL(42, 467, 14), // "handleGetUsers"
QT_MOC_LITERAL(43, 482, 16), // "handleGetMatches"
QT_MOC_LITERAL(44, 499, 14), // "handleGetMoves"
QT_MOC_LITERAL(45, 514, 12), // "handleOnline"
QT_MOC_LITERAL(46, 527, 13), // "handleOffline"
QT_MOC_LITERAL(47, 541, 15), // "handleChallenge"
QT_MOC_LITERAL(48, 557, 12), // "handleAccept"
QT_MOC_LITERAL(49, 570, 13), // "handleDecline"
QT_MOC_LITERAL(50, 584, 11), // "handleReady"
QT_MOC_LITERAL(51, 596, 10), // "handleShot"
QT_MOC_LITERAL(52, 607, 14), // "handleGameOver"
QT_MOC_LITERAL(53, 622, 10), // "handleQuit"
QT_MOC_LITERAL(54, 633, 15), // "handleSurrender"
QT_MOC_LITERAL(55, 649, 13), // "handleGetRank"
QT_MOC_LITERAL(56, 663, 10), // "handleChat"
QT_MOC_LITERAL(57, 674, 16), // "handleQuickMatch"
QT_MOC_LITERAL(58, 691, 18) // "handlePlayWithBots"

    },
    "MainWindow\0onReadyRead\0\0onSocketDisconnected\0"
    "onErrorOccurred\0QAbstractSocket::SocketError\0"
    "error\0setStatusText\0status\0"
    "setReplayStatusText\0challengeClick\0"
    "User\0user\0itemHistoryClick\0Match\0match\0"
    "notifyChallengeRequest\0updateListWidget\0"
    "updateListWidgetHistory\0math\0shipPlaced\0"
    "shot\0row\0col\0botShot\0shotDone\0current\0"
    "size\0showReplayPage\0QList<Move>\0moves\0"
    "getUsers\0getMatches\0getMoves\0"
    "handleResponse\0QByteArray&\0bytes\0"
    "handleSignIn\0Response\0response\0"
    "handleSignUp\0handleSignOut\0handleGetUsers\0"
    "handleGetMatches\0handleGetMoves\0"
    "handleOnline\0handleOffline\0handleChallenge\0"
    "handleAccept\0handleDecline\0handleReady\0"
    "handleShot\0handleGameOver\0handleQuit\0"
    "handleSurrender\0handleGetRank\0handleChat\0"
    "handleQuickMatch\0handlePlayWithBots"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  209,    2, 0x08 /* Private */,
       3,    0,  210,    2, 0x08 /* Private */,
       4,    1,  211,    2, 0x08 /* Private */,
       7,    1,  214,    2, 0x08 /* Private */,
       9,    1,  217,    2, 0x08 /* Private */,
      10,    1,  220,    2, 0x08 /* Private */,
      13,    1,  223,    2, 0x08 /* Private */,
      16,    1,  226,    2, 0x08 /* Private */,
      17,    1,  229,    2, 0x08 /* Private */,
      18,    1,  232,    2, 0x08 /* Private */,
      20,    0,  235,    2, 0x08 /* Private */,
      21,    2,  236,    2, 0x08 /* Private */,
      24,    2,  241,    2, 0x08 /* Private */,
      25,    2,  246,    2, 0x08 /* Private */,
      28,    2,  251,    2, 0x08 /* Private */,
      31,    0,  256,    2, 0x08 /* Private */,
      32,    0,  257,    2, 0x08 /* Private */,
      33,    1,  258,    2, 0x08 /* Private */,
      34,    1,  261,    2, 0x08 /* Private */,
      37,    2,  264,    2, 0x08 /* Private */,
      40,    2,  269,    2, 0x08 /* Private */,
      41,    2,  274,    2, 0x08 /* Private */,
      42,    2,  279,    2, 0x08 /* Private */,
      43,    2,  284,    2, 0x08 /* Private */,
      44,    2,  289,    2, 0x08 /* Private */,
      45,    2,  294,    2, 0x08 /* Private */,
      46,    2,  299,    2, 0x08 /* Private */,
      47,    2,  304,    2, 0x08 /* Private */,
      48,    2,  309,    2, 0x08 /* Private */,
      49,    2,  314,    2, 0x08 /* Private */,
      50,    2,  319,    2, 0x08 /* Private */,
      51,    2,  324,    2, 0x08 /* Private */,
      52,    2,  329,    2, 0x08 /* Private */,
      53,    2,  334,    2, 0x08 /* Private */,
      54,    2,  339,    2, 0x08 /* Private */,
      55,    2,  344,    2, 0x08 /* Private */,
      56,    2,  349,    2, 0x08 /* Private */,
      57,    2,  354,    2, 0x08 /* Private */,
      58,    2,  359,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 14,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   22,   23,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   22,   23,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   26,   27,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 29,   15,   30,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 35,   36,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 35,   39,   36,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 35,   39,   36,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 35,   39,   36,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 35,   39,   36,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 35,   39,   36,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 35,   39,   36,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 35,   39,   36,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 35,   39,   36,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 35,   39,   36,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 35,   39,   36,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 35,   39,   36,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 35,   39,   36,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 35,   39,   36,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 35,   39,   36,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 35,   39,   36,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 35,   39,   36,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 35,   39,   36,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 35,   39,   36,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 35,   39,   36,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 35,   39,   36,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onReadyRead(); break;
        case 1: _t->onSocketDisconnected(); break;
        case 2: _t->onErrorOccurred((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 3: _t->setStatusText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->setReplayStatusText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->challengeClick((*reinterpret_cast< User(*)>(_a[1]))); break;
        case 6: _t->itemHistoryClick((*reinterpret_cast< Match(*)>(_a[1]))); break;
        case 7: _t->notifyChallengeRequest((*reinterpret_cast< User(*)>(_a[1]))); break;
        case 8: _t->updateListWidget((*reinterpret_cast< User(*)>(_a[1]))); break;
        case 9: _t->updateListWidgetHistory((*reinterpret_cast< Match(*)>(_a[1]))); break;
        case 10: _t->shipPlaced(); break;
        case 11: _t->shot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->botShot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->shotDone((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->showReplayPage((*reinterpret_cast< Match(*)>(_a[1])),(*reinterpret_cast< QList<Move>(*)>(_a[2]))); break;
        case 15: _t->getUsers(); break;
        case 16: _t->getMatches(); break;
        case 17: _t->getMoves((*reinterpret_cast< const Match(*)>(_a[1]))); break;
        case 18: _t->handleResponse((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 19: _t->handleSignIn((*reinterpret_cast< const Response(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 20: _t->handleSignUp((*reinterpret_cast< const Response(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 21: _t->handleSignOut((*reinterpret_cast< const Response(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 22: _t->handleGetUsers((*reinterpret_cast< const Response(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 23: _t->handleGetMatches((*reinterpret_cast< const Response(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 24: _t->handleGetMoves((*reinterpret_cast< const Response(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 25: _t->handleOnline((*reinterpret_cast< const Response(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 26: _t->handleOffline((*reinterpret_cast< const Response(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 27: _t->handleChallenge((*reinterpret_cast< const Response(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 28: _t->handleAccept((*reinterpret_cast< const Response(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 29: _t->handleDecline((*reinterpret_cast< const Response(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 30: _t->handleReady((*reinterpret_cast< const Response(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 31: _t->handleShot((*reinterpret_cast< const Response(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 32: _t->handleGameOver((*reinterpret_cast< const Response(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 33: _t->handleQuit((*reinterpret_cast< const Response(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 34: _t->handleSurrender((*reinterpret_cast< const Response(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 35: _t->handleGetRank((*reinterpret_cast< const Response(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 36: _t->handleChat((*reinterpret_cast< const Response(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 37: _t->handleQuickMatch((*reinterpret_cast< const Response(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 38: _t->handlePlayWithBots((*reinterpret_cast< const Response(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
