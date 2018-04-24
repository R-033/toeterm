/****************************************************************************
** Meta object code from reading C++ file 'textrender.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/textrender.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'textrender.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TextRender_t {
    QByteArrayData data[22];
    char stringdata0[283];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TextRender_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TextRender_t qt_meta_stringdata_TextRender = {
    {
QT_MOC_LITERAL(0, 0, 10), // "TextRender"
QT_MOC_LITERAL(1, 11, 14), // "myWidthChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "newWidth"
QT_MOC_LITERAL(4, 36, 15), // "myHeightChanged"
QT_MOC_LITERAL(5, 52, 9), // "newHeight"
QT_MOC_LITERAL(6, 62, 15), // "fontSizeChanged"
QT_MOC_LITERAL(7, 78, 32), // "showBufferScrollIndicatorChanged"
QT_MOC_LITERAL(8, 111, 6), // "redraw"
QT_MOC_LITERAL(9, 118, 14), // "updateTermSize"
QT_MOC_LITERAL(10, 133, 14), // "cursorPixelPos"
QT_MOC_LITERAL(11, 148, 15), // "cursorPixelSize"
QT_MOC_LITERAL(12, 164, 15), // "loadColorScheme"
QT_MOC_LITERAL(13, 180, 10), // "layoutName"
QT_MOC_LITERAL(14, 191, 8), // "getColor"
QT_MOC_LITERAL(15, 200, 4), // "name"
QT_MOC_LITERAL(16, 205, 7), // "myWidth"
QT_MOC_LITERAL(17, 213, 8), // "myHeight"
QT_MOC_LITERAL(18, 222, 9), // "fontWidth"
QT_MOC_LITERAL(19, 232, 10), // "fontHeight"
QT_MOC_LITERAL(20, 243, 13), // "fontPointSize"
QT_MOC_LITERAL(21, 257, 25) // "showBufferScrollIndicator"

    },
    "TextRender\0myWidthChanged\0\0newWidth\0"
    "myHeightChanged\0newHeight\0fontSizeChanged\0"
    "showBufferScrollIndicatorChanged\0"
    "redraw\0updateTermSize\0cursorPixelPos\0"
    "cursorPixelSize\0loadColorScheme\0"
    "layoutName\0getColor\0name\0myWidth\0"
    "myHeight\0fontWidth\0fontHeight\0"
    "fontPointSize\0showBufferScrollIndicator"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TextRender[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       6,   82, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       6,    0,   70,    2, 0x06 /* Public */,
       7,    0,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   72,    2, 0x0a /* Public */,
       9,    0,   73,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      10,    0,   74,    2, 0x02 /* Public */,
      11,    0,   75,    2, 0x02 /* Public */,
      12,    1,   76,    2, 0x02 /* Public */,
      14,    1,   79,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QPoint,
    QMetaType::QSize,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::QString, QMetaType::QString,   15,

 // properties: name, type, flags
      16, QMetaType::Int, 0x00495103,
      17, QMetaType::Int, 0x00495103,
      18, QMetaType::Int, 0x00495001,
      19, QMetaType::Int, 0x00495001,
      20, QMetaType::Int, 0x00495103,
      21, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       2,
       2,
       3,

       0        // eod
};

void TextRender::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TextRender *_t = static_cast<TextRender *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->myWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->myHeightChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->fontSizeChanged(); break;
        case 3: _t->showBufferScrollIndicatorChanged(); break;
        case 4: _t->redraw(); break;
        case 5: _t->updateTermSize(); break;
        case 6: { QPoint _r = _t->cursorPixelPos();
            if (_a[0]) *reinterpret_cast< QPoint*>(_a[0]) = _r; }  break;
        case 7: { QSize _r = _t->cursorPixelSize();
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 8: _t->loadColorScheme((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: { QString _r = _t->getColor((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TextRender::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TextRender::myWidthChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TextRender::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TextRender::myHeightChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TextRender::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TextRender::fontSizeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (TextRender::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TextRender::showBufferScrollIndicatorChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        TextRender *_t = static_cast<TextRender *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->myWidth(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->myHeight(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->fontWidth(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->fontHeight(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->fontPointSize(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->showBufferScrollIndicator(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        TextRender *_t = static_cast<TextRender *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMyWidth(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setMyHeight(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setFontPointSize(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setShowBufferScrollIndicator(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject TextRender::staticMetaObject = {
    { &QQuickPaintedItem::staticMetaObject, qt_meta_stringdata_TextRender.data,
      qt_meta_data_TextRender,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TextRender::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextRender::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TextRender.stringdata0))
        return static_cast<void*>(const_cast< TextRender*>(this));
    return QQuickPaintedItem::qt_metacast(_clname);
}

int TextRender::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPaintedItem::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TextRender::myWidthChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TextRender::myHeightChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TextRender::fontSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void TextRender::showBufferScrollIndicatorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
