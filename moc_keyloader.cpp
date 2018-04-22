/****************************************************************************
** Meta object code from reading C++ file 'keyloader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/keyloader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'keyloader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KeyLoader_t {
    QByteArrayData data[11];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KeyLoader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KeyLoader_t qt_meta_stringdata_KeyLoader = {
    {
QT_MOC_LITERAL(0, 0, 9), // "KeyLoader"
QT_MOC_LITERAL(1, 10, 10), // "loadLayout"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 6), // "layout"
QT_MOC_LITERAL(4, 29, 7), // "vkbRows"
QT_MOC_LITERAL(5, 37, 10), // "vkbColumns"
QT_MOC_LITERAL(6, 48, 5), // "keyAt"
QT_MOC_LITERAL(7, 54, 3), // "row"
QT_MOC_LITERAL(8, 58, 3), // "col"
QT_MOC_LITERAL(9, 62, 16), // "availableLayouts"
QT_MOC_LITERAL(10, 79, 21) // "availableColorSchemes"

    },
    "KeyLoader\0loadLayout\0\0layout\0vkbRows\0"
    "vkbColumns\0keyAt\0row\0col\0availableLayouts\0"
    "availableColorSchemes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KeyLoader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x02 /* Public */,
       4,    0,   47,    2, 0x02 /* Public */,
       5,    0,   48,    2, 0x02 /* Public */,
       6,    2,   49,    2, 0x02 /* Public */,
       9,    0,   54,    2, 0x02 /* Public */,
      10,    0,   55,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::QVariantList, QMetaType::Int, QMetaType::Int,    7,    8,
    QMetaType::QStringList,
    QMetaType::QStringList,

       0        // eod
};

void KeyLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KeyLoader *_t = static_cast<KeyLoader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->loadLayout((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { int _r = _t->vkbRows();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->vkbColumns();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { QVariantList _r = _t->keyAt((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = _r; }  break;
        case 4: { QStringList _r = _t->availableLayouts();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 5: { QStringList _r = _t->availableColorSchemes();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject KeyLoader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KeyLoader.data,
      qt_meta_data_KeyLoader,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KeyLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KeyLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KeyLoader.stringdata0))
        return static_cast<void*>(const_cast< KeyLoader*>(this));
    return QObject::qt_metacast(_clname);
}

int KeyLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
