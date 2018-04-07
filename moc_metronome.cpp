/****************************************************************************
** Meta object code from reading C++ file 'metronome.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MetronomeTest2/metronome.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'metronome.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Metronome_t {
    QByteArrayData data[19];
    char stringdata0[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Metronome_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Metronome_t qt_meta_stringdata_Metronome = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Metronome"
QT_MOC_LITERAL(1, 10, 17), // "timeSigNumChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 19), // "timeSigDenomChanged"
QT_MOC_LITERAL(4, 49, 12), // "tempoChanged"
QT_MOC_LITERAL(5, 62, 17), // "beatNumberChanged"
QT_MOC_LITERAL(6, 80, 21), // "volumeAsSliderChanged"
QT_MOC_LITERAL(7, 102, 8), // "playBeat"
QT_MOC_LITERAL(8, 111, 4), // "stop"
QT_MOC_LITERAL(9, 116, 4), // "play"
QT_MOC_LITERAL(10, 121, 8), // "setTempo"
QT_MOC_LITERAL(11, 130, 13), // "setTimeSigNum"
QT_MOC_LITERAL(12, 144, 15), // "setTimeSigDenom"
QT_MOC_LITERAL(13, 160, 9), // "setVolume"
QT_MOC_LITERAL(14, 170, 10), // "timeSigNum"
QT_MOC_LITERAL(15, 181, 12), // "timeSigDenom"
QT_MOC_LITERAL(16, 194, 5), // "tempo"
QT_MOC_LITERAL(17, 200, 10), // "beatNumber"
QT_MOC_LITERAL(18, 211, 14) // "volumeAsSlider"

    },
    "Metronome\0timeSigNumChanged\0\0"
    "timeSigDenomChanged\0tempoChanged\0"
    "beatNumberChanged\0volumeAsSliderChanged\0"
    "playBeat\0stop\0play\0setTempo\0setTimeSigNum\0"
    "setTimeSigDenom\0setVolume\0timeSigNum\0"
    "timeSigDenom\0tempo\0beatNumber\0"
    "volumeAsSlider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Metronome[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       5,  104, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       3,    1,   77,    2, 0x06 /* Public */,
       4,    1,   80,    2, 0x06 /* Public */,
       5,    1,   83,    2, 0x06 /* Public */,
       6,    1,   86,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   89,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       8,    0,   90,    2, 0x02 /* Public */,
       9,    0,   91,    2, 0x02 /* Public */,
      10,    1,   92,    2, 0x02 /* Public */,
      11,    1,   95,    2, 0x02 /* Public */,
      12,    1,   98,    2, 0x02 /* Public */,
      13,    1,  101,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UChar,    2,
    QMetaType::Void, QMetaType::UChar,    2,
    QMetaType::Void, QMetaType::UShort,    2,
    QMetaType::Void, QMetaType::UChar,    2,
    QMetaType::Void, QMetaType::QReal,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UShort,    2,
    QMetaType::Void, QMetaType::UChar,    2,
    QMetaType::Void, QMetaType::UChar,    2,
    QMetaType::Void, QMetaType::QReal,    2,

 // properties: name, type, flags
      14, QMetaType::UChar, 0x00495103,
      15, QMetaType::UChar, 0x00495103,
      16, QMetaType::UShort, 0x00495103,
      17, QMetaType::UChar, 0x00495001,
      18, QMetaType::QReal, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void Metronome::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Metronome *_t = static_cast<Metronome *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->timeSigNumChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 1: _t->timeSigDenomChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 2: _t->tempoChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 3: _t->beatNumberChanged((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 4: _t->volumeAsSliderChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->playBeat(); break;
        case 6: _t->stop(); break;
        case 7: _t->play(); break;
        case 8: _t->setTempo((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 9: _t->setTimeSigNum((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 10: _t->setTimeSigDenom((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 11: _t->setVolume((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Metronome::*_t)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Metronome::timeSigNumChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Metronome::*_t)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Metronome::timeSigDenomChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Metronome::*_t)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Metronome::tempoChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Metronome::*_t)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Metronome::beatNumberChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Metronome::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Metronome::volumeAsSliderChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Metronome *_t = static_cast<Metronome *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint8*>(_v) = _t->timeSigNum(); break;
        case 1: *reinterpret_cast< quint8*>(_v) = _t->timeSigDenom(); break;
        case 2: *reinterpret_cast< quint16*>(_v) = _t->tempo(); break;
        case 3: *reinterpret_cast< quint8*>(_v) = _t->beatNumber(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->volumeAsSlider(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Metronome *_t = static_cast<Metronome *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTimeSigNum(*reinterpret_cast< quint8*>(_v)); break;
        case 1: _t->setTimeSigDenom(*reinterpret_cast< quint8*>(_v)); break;
        case 2: _t->setTempo(*reinterpret_cast< quint16*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Metronome::staticMetaObject = {
    { &QTimer::staticMetaObject, qt_meta_stringdata_Metronome.data,
      qt_meta_data_Metronome,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Metronome::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Metronome::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Metronome.stringdata0))
        return static_cast<void*>(this);
    return QTimer::qt_metacast(_clname);
}

int Metronome::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTimer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Metronome::timeSigNumChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Metronome::timeSigDenomChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Metronome::tempoChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Metronome::beatNumberChanged(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Metronome::volumeAsSliderChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
