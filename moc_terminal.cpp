/****************************************************************************
** Meta object code from reading C++ file 'terminal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/terminal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'terminal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Terminal_t {
    QByteArrayData data[21];
    char stringdata0[258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Terminal_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Terminal_t qt_meta_stringdata_Terminal = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Terminal"
QT_MOC_LITERAL(1, 9, 16), // "cursorPosChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 6), // "newPos"
QT_MOC_LITERAL(4, 34, 15), // "termSizeChanged"
QT_MOC_LITERAL(5, 50, 7), // "newSize"
QT_MOC_LITERAL(6, 58, 20), // "displayBufferChanged"
QT_MOC_LITERAL(7, 79, 8), // "termSize"
QT_MOC_LITERAL(8, 88, 8), // "keyPress"
QT_MOC_LITERAL(9, 97, 3), // "key"
QT_MOC_LITERAL(10, 101, 9), // "modifiers"
QT_MOC_LITERAL(11, 111, 24), // "printableLinesFromCursor"
QT_MOC_LITERAL(12, 136, 5), // "lines"
QT_MOC_LITERAL(13, 142, 9), // "putString"
QT_MOC_LITERAL(14, 152, 3), // "str"
QT_MOC_LITERAL(15, 156, 8), // "unEscape"
QT_MOC_LITERAL(16, 165, 18), // "pasteFromClipboard"
QT_MOC_LITERAL(17, 184, 24), // "copySelectionToClipboard"
QT_MOC_LITERAL(18, 209, 18), // "grabURLsFromBuffer"
QT_MOC_LITERAL(19, 228, 14), // "getUserMenuXml"
QT_MOC_LITERAL(20, 243, 14) // "clearSelection"

    },
    "Terminal\0cursorPosChanged\0\0newPos\0"
    "termSizeChanged\0newSize\0displayBufferChanged\0"
    "termSize\0keyPress\0key\0modifiers\0"
    "printableLinesFromCursor\0lines\0putString\0"
    "str\0unEscape\0pasteFromClipboard\0"
    "copySelectionToClipboard\0grabURLsFromBuffer\0"
    "getUserMenuXml\0clearSelection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Terminal[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    1,   82,    2, 0x06 /* Public */,
       6,    0,   85,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    0,   86,    2, 0x02 /* Public */,
       8,    2,   87,    2, 0x02 /* Public */,
      11,    1,   92,    2, 0x02 /* Public */,
      13,    2,   95,    2, 0x02 /* Public */,
      13,    1,  100,    2, 0x22 /* Public | MethodCloned */,
      16,    0,  103,    2, 0x02 /* Public */,
      17,    0,  104,    2, 0x02 /* Public */,
      18,    0,  105,    2, 0x02 /* Public */,
      19,    0,  106,    2, 0x02 /* Public */,
      20,    0,  107,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, QMetaType::QSize,    5,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QSize,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::QStringList, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   14,   15,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QStringList,
    QMetaType::QString,
    QMetaType::Void,

       0        // eod
};

void Terminal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Terminal *_t = static_cast<Terminal *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cursorPosChanged((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 1: _t->termSizeChanged((*reinterpret_cast< QSize(*)>(_a[1]))); break;
        case 2: _t->displayBufferChanged(); break;
        case 3: { QSize _r = _t->termSize();
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 4: _t->keyPress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: { QStringList _r = _t->printableLinesFromCursor((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 6: _t->putString((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->putString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->pasteFromClipboard(); break;
        case 9: _t->copySelectionToClipboard(); break;
        case 10: { QStringList _r = _t->grabURLsFromBuffer();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->getUserMenuXml();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: _t->clearSelection(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Terminal::*_t)(QPoint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Terminal::cursorPosChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Terminal::*_t)(QSize );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Terminal::termSizeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Terminal::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Terminal::displayBufferChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject Terminal::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Terminal.data,
      qt_meta_data_Terminal,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Terminal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Terminal::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Terminal.stringdata0))
        return static_cast<void*>(const_cast< Terminal*>(this));
    return QObject::qt_metacast(_clname);
}

int Terminal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Terminal::cursorPosChanged(QPoint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Terminal::termSizeChanged(QSize _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Terminal::displayBufferChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
