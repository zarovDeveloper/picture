/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[27];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 26), // "on_pushButton_draw_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 9), // "drawHouse"
QT_MOC_LITERAL(4, 49, 9), // "QPainter*"
QT_MOC_LITERAL(5, 59, 7), // "painter"
QT_MOC_LITERAL(6, 67, 8), // "drawLake"
QT_MOC_LITERAL(7, 76, 4), // "land"
QT_MOC_LITERAL(8, 81, 5), // "QPen*"
QT_MOC_LITERAL(9, 87, 3), // "pen"
QT_MOC_LITERAL(10, 91, 4), // "swan"
QT_MOC_LITERAL(11, 96, 1), // "x"
QT_MOC_LITERAL(12, 98, 1), // "y"
QT_MOC_LITERAL(13, 100, 8), // "drawStar"
QT_MOC_LITERAL(14, 109, 5), // "count"
QT_MOC_LITERAL(15, 115, 8), // "drawRect"
QT_MOC_LITERAL(16, 124, 5), // "width"
QT_MOC_LITERAL(17, 130, 6), // "height"
QT_MOC_LITERAL(18, 137, 5), // "color"
QT_MOC_LITERAL(19, 143, 12), // "drawTriangle"
QT_MOC_LITERAL(20, 156, 2), // "x0"
QT_MOC_LITERAL(21, 159, 2), // "y0"
QT_MOC_LITERAL(22, 162, 2), // "x1"
QT_MOC_LITERAL(23, 165, 2), // "y1"
QT_MOC_LITERAL(24, 168, 2), // "x2"
QT_MOC_LITERAL(25, 171, 2), // "y2"
QT_MOC_LITERAL(26, 174, 10) // "drawCircle"

    },
    "MainWindow\0on_pushButton_draw_clicked\0"
    "\0drawHouse\0QPainter*\0painter\0drawLake\0"
    "land\0QPen*\0pen\0swan\0x\0y\0drawStar\0count\0"
    "drawRect\0width\0height\0color\0drawTriangle\0"
    "x0\0y0\0x1\0y1\0x2\0y2\0drawCircle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    1,   60,    2, 0x08 /* Private */,
       6,    1,   63,    2, 0x08 /* Private */,
       7,    2,   66,    2, 0x08 /* Private */,
      10,    4,   71,    2, 0x08 /* Private */,
      13,    2,   80,    2, 0x08 /* Private */,
      15,    6,   85,    2, 0x08 /* Private */,
      19,    8,   98,    2, 0x08 /* Private */,
      26,    6,  115,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 8,    5,    9,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int, QMetaType::Int, 0x80000000 | 8,    5,   11,   12,    9,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int,    5,   14,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QColor,    5,   11,   12,   16,   17,   18,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QColor, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    5,   18,   20,   21,   22,   23,   24,   25,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QColor,    5,   11,   12,   16,   17,   18,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_draw_clicked(); break;
        case 1: _t->drawHouse((*reinterpret_cast< QPainter*(*)>(_a[1]))); break;
        case 2: _t->drawLake((*reinterpret_cast< QPainter*(*)>(_a[1]))); break;
        case 3: _t->land((*reinterpret_cast< QPainter*(*)>(_a[1])),(*reinterpret_cast< QPen*(*)>(_a[2]))); break;
        case 4: _t->swan((*reinterpret_cast< QPainter*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QPen*(*)>(_a[4]))); break;
        case 5: _t->drawStar((*reinterpret_cast< QPainter*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->drawRect((*reinterpret_cast< QPainter*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< QColor(*)>(_a[6]))); break;
        case 7: _t->drawTriangle((*reinterpret_cast< QPainter*(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8]))); break;
        case 8: _t->drawCircle((*reinterpret_cast< QPainter*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< QColor(*)>(_a[6]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
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
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
