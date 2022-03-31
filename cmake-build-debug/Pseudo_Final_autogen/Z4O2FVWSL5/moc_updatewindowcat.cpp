/****************************************************************************
** Meta object code from reading C++ file 'updatewindowcat.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../HeadereWindow/updatewindowcat.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'updatewindowcat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UpdateWindowCat_t {
    QByteArrayData data[13];
    char stringdata0[317];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UpdateWindowCat_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UpdateWindowCat_t qt_meta_stringdata_UpdateWindowCat = {
    {
QT_MOC_LITERAL(0, 0, 15), // "UpdateWindowCat"
QT_MOC_LITERAL(1, 16, 25), // "on_ColorCatButton_clicked"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 25), // "on_ColorHatButton_clicked"
QT_MOC_LITERAL(4, 69, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(5, 91, 33), // "on_checkBoxRemoveHat_stateCha..."
QT_MOC_LITERAL(6, 125, 4), // "arg1"
QT_MOC_LITERAL(7, 130, 37), // "on_checkBoxRemoveGlasses_stat..."
QT_MOC_LITERAL(8, 168, 37), // "on_checkBoxRemovePendant_stat..."
QT_MOC_LITERAL(9, 206, 27), // "on_checkBoxHat_stateChanged"
QT_MOC_LITERAL(10, 234, 31), // "on_checkBoxPendant_stateChanged"
QT_MOC_LITERAL(11, 266, 25), // "on_radioButtonSUN_clicked"
QT_MOC_LITERAL(12, 292, 24) // "on_radioButton3D_clicked"

    },
    "UpdateWindowCat\0on_ColorCatButton_clicked\0"
    "\0on_ColorHatButton_clicked\0"
    "on_pushButton_clicked\0"
    "on_checkBoxRemoveHat_stateChanged\0"
    "arg1\0on_checkBoxRemoveGlasses_stateChanged\0"
    "on_checkBoxRemovePendant_stateChanged\0"
    "on_checkBoxHat_stateChanged\0"
    "on_checkBoxPendant_stateChanged\0"
    "on_radioButtonSUN_clicked\0"
    "on_radioButton3D_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UpdateWindowCat[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    1,   67,    2, 0x08 /* Private */,
       7,    1,   70,    2, 0x08 /* Private */,
       8,    1,   73,    2, 0x08 /* Private */,
       9,    1,   76,    2, 0x08 /* Private */,
      10,    1,   79,    2, 0x08 /* Private */,
      11,    0,   82,    2, 0x08 /* Private */,
      12,    0,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UpdateWindowCat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UpdateWindowCat *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_ColorCatButton_clicked(); break;
        case 1: _t->on_ColorHatButton_clicked(); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_checkBoxRemoveHat_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_checkBoxRemoveGlasses_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_checkBoxRemovePendant_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_checkBoxHat_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_checkBoxPendant_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_radioButtonSUN_clicked(); break;
        case 9: _t->on_radioButton3D_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UpdateWindowCat::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_UpdateWindowCat.data,
    qt_meta_data_UpdateWindowCat,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UpdateWindowCat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UpdateWindowCat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UpdateWindowCat.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int UpdateWindowCat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
