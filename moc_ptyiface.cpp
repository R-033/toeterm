/****************************************************************************
** Meta object code from reading C++ file 'ptyiface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/ptyiface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ptyiface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PtyIFace_t {
    QByteArrayData data[7];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PtyIFace_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PtyIFace_t qt_meta_stringdata_PtyIFace = {
    {
QT_MOC_LITERAL(0, 0, 8), // "PtyIFace"
QT_MOC_LITERAL(1, 9, 6), // "resize"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 7), // "newSize"
QT_MOC_LITERAL(4, 25, 13), // "readActivated"
QT_MOC_LITERAL(5, 39, 13), // "changeCharset"
QT_MOC_LITERAL(6, 53, 12) // "charset_name"

    },
    "PtyIFace\0resize\0\0newSize\0readActivated\0"
    "changeCharset\0charset_name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PtyIFace[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    0,   32,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       5,    1,   33,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QSize,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void PtyIFace::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PtyIFace *_t = static_cast<PtyIFace *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resize((*reinterpret_cast< QSize(*)>(_a[1]))); break;
        case 1: _t->readActivated(); break;
        case 2: _t->changeCharset((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject PtyIFace::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PtyIFace.data,
      qt_meta_data_PtyIFace,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PtyIFace::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PtyIFace::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PtyIFace.stringdata0))
        return static_cast<void*>(const_cast< PtyIFace*>(this));
    return QObject::qt_metacast(_clname);
}

int PtyIFace::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
