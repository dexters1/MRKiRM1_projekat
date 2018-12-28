/****************************************************************************
** Meta object code from reading C++ file 'server.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MRKiRM1_projekat/server.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'server.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Server_t {
    QByteArrayData data[20];
    char stringdata0[218];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Server_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Server_t qt_meta_stringdata_Server = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Server"
QT_MOC_LITERAL(1, 7, 13), // "newConnection"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 9), // "readyRead"
QT_MOC_LITERAL(4, 32, 12), // "disconnected"
QT_MOC_LITERAL(5, 45, 17), // "removeFromClients"
QT_MOC_LITERAL(6, 63, 19), // "allClientsConnected"
QT_MOC_LITERAL(7, 83, 10), // "findClient"
QT_MOC_LITERAL(8, 94, 5), // "User*"
QT_MOC_LITERAL(9, 100, 7), // "qintptr"
QT_MOC_LITERAL(10, 108, 16), // "socketDescriptor"
QT_MOC_LITERAL(11, 125, 12), // "parseMessage"
QT_MOC_LITERAL(12, 138, 11), // "QTcpSocket*"
QT_MOC_LITERAL(13, 150, 6), // "socket"
QT_MOC_LITERAL(14, 157, 4), // "test"
QT_MOC_LITERAL(15, 162, 12), // "writeToTopic"
QT_MOC_LITERAL(16, 175, 7), // "message"
QT_MOC_LITERAL(17, 183, 10), // "sendUpdate"
QT_MOC_LITERAL(18, 194, 16), // "clientReadUpdate"
QT_MOC_LITERAL(19, 211, 6) // "client"

    },
    "Server\0newConnection\0\0readyRead\0"
    "disconnected\0removeFromClients\0"
    "allClientsConnected\0findClient\0User*\0"
    "qintptr\0socketDescriptor\0parseMessage\0"
    "QTcpSocket*\0socket\0test\0writeToTopic\0"
    "message\0sendUpdate\0clientReadUpdate\0"
    "client"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Server[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    1,   74,    2, 0x0a /* Public */,
      11,    2,   77,    2, 0x0a /* Public */,
      14,    1,   82,    2, 0x0a /* Public */,
      15,    2,   85,    2, 0x0a /* Public */,
      17,    1,   90,    2, 0x0a /* Public */,
      18,    1,   93,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 8, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 12,    2,   13,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 12,   16,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 8,   19,

       0        // eod
};

void Server::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Server *_t = static_cast<Server *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newConnection(); break;
        case 1: _t->readyRead(); break;
        case 2: _t->disconnected(); break;
        case 3: _t->removeFromClients(); break;
        case 4: _t->allClientsConnected(); break;
        case 5: { User* _r = _t->findClient((*reinterpret_cast< qintptr(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< User**>(_a[0]) = std::move(_r); }  break;
        case 6: _t->parseMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QTcpSocket*(*)>(_a[2]))); break;
        case 7: _t->test((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 8: _t->writeToTopic((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QTcpSocket*(*)>(_a[2]))); break;
        case 9: _t->sendUpdate((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 10: _t->clientReadUpdate((*reinterpret_cast< User*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< User* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Server::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Server.data,
    qt_meta_data_Server,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Server::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Server::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Server.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Server::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
