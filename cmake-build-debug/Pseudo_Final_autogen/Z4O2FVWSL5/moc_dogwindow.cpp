/****************************************************************************
** Meta object code from reading C++ file 'dogwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../HeadereWindow/dogwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dogwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DogWindow_t {
    QByteArrayData data[10];
    char stringdata0[225];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DogWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DogWindow_t qt_meta_stringdata_DogWindow = {
    {
QT_MOC_LITERAL(0, 0, 9), // "DogWindow"
QT_MOC_LITERAL(1, 10, 25), // "on_GoToCatsButton_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 25), // "on_GoToFuncButton_clicked"
QT_MOC_LITERAL(4, 63, 27), // "on_ReloadDogsButton_clicked"
QT_MOC_LITERAL(5, 91, 24), // "on_UndoDogButton_clicked"
QT_MOC_LITERAL(6, 116, 21), // "on_RedoButton_clicked"
QT_MOC_LITERAL(7, 138, 26), // "on_actionAdd_Dog_triggered"
QT_MOC_LITERAL(8, 165, 29), // "on_actionDelete_Dog_triggered"
QT_MOC_LITERAL(9, 195, 29) // "on_actionUpdate_Dog_triggered"

    },
    "DogWindow\0on_GoToCatsButton_clicked\0"
    "\0on_GoToFuncButton_clicked\0"
    "on_ReloadDogsButton_clicked\0"
    "on_UndoDogButton_clicked\0on_RedoButton_clicked\0"
    "on_actionAdd_Dog_triggered\0"
    "on_actionDelete_Dog_triggered\0"
    "on_actionUpdate_Dog_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DogWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DogWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DogWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_GoToCatsButton_clicked(); break;
        case 1: _t->on_GoToFuncButton_clicked(); break;
        case 2: _t->on_ReloadDogsButton_clicked(); break;
        case 3: _t->on_UndoDogButton_clicked(); break;
        case 4: _t->on_RedoButton_clicked(); break;
        case 5: _t->on_actionAdd_Dog_triggered(); break;
        case 6: _t->on_actionDelete_Dog_triggered(); break;
        case 7: _t->on_actionUpdate_Dog_triggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DogWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_DogWindow.data,
    qt_meta_data_DogWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DogWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DogWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DogWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int DogWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
