/****************************************************************************
** Meta object code from reading C++ file 'seriallink.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../seriallink.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'seriallink.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSSerialConfigurationENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSerialConfigurationENDCLASS = QtMocHelpers::stringData(
    "SerialConfiguration",
    "baudChanged",
    "",
    "dataBitsChanged",
    "flowControlChanged",
    "stopBitsChanged",
    "parityChanged",
    "portNameChanged",
    "portDisplayNameChanged",
    "usbDirectChanged",
    "usbDirect",
    "baud",
    "dataBits",
    "flowControl",
    "stopBits",
    "parity",
    "portName",
    "portDisplayName"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSerialConfigurationENDCLASS_t {
    uint offsetsAndSizes[36];
    char stringdata0[20];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[19];
    char stringdata5[16];
    char stringdata6[14];
    char stringdata7[16];
    char stringdata8[23];
    char stringdata9[17];
    char stringdata10[10];
    char stringdata11[5];
    char stringdata12[9];
    char stringdata13[12];
    char stringdata14[9];
    char stringdata15[7];
    char stringdata16[9];
    char stringdata17[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSerialConfigurationENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSerialConfigurationENDCLASS_t qt_meta_stringdata_CLASSSerialConfigurationENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "SerialConfiguration"
        QT_MOC_LITERAL(20, 11),  // "baudChanged"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 15),  // "dataBitsChanged"
        QT_MOC_LITERAL(49, 18),  // "flowControlChanged"
        QT_MOC_LITERAL(68, 15),  // "stopBitsChanged"
        QT_MOC_LITERAL(84, 13),  // "parityChanged"
        QT_MOC_LITERAL(98, 15),  // "portNameChanged"
        QT_MOC_LITERAL(114, 22),  // "portDisplayNameChanged"
        QT_MOC_LITERAL(137, 16),  // "usbDirectChanged"
        QT_MOC_LITERAL(154, 9),  // "usbDirect"
        QT_MOC_LITERAL(164, 4),  // "baud"
        QT_MOC_LITERAL(169, 8),  // "dataBits"
        QT_MOC_LITERAL(178, 11),  // "flowControl"
        QT_MOC_LITERAL(190, 8),  // "stopBits"
        QT_MOC_LITERAL(199, 6),  // "parity"
        QT_MOC_LITERAL(206, 8),  // "portName"
        QT_MOC_LITERAL(215, 15)   // "portDisplayName"
    },
    "SerialConfiguration",
    "baudChanged",
    "",
    "dataBitsChanged",
    "flowControlChanged",
    "stopBitsChanged",
    "parityChanged",
    "portNameChanged",
    "portDisplayNameChanged",
    "usbDirectChanged",
    "usbDirect",
    "baud",
    "dataBits",
    "flowControl",
    "stopBits",
    "parity",
    "portName",
    "portDisplayName"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSerialConfigurationENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       8,   72, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    9 /* Public */,
       3,    0,   63,    2, 0x06,   10 /* Public */,
       4,    0,   64,    2, 0x06,   11 /* Public */,
       5,    0,   65,    2, 0x06,   12 /* Public */,
       6,    0,   66,    2, 0x06,   13 /* Public */,
       7,    0,   67,    2, 0x06,   14 /* Public */,
       8,    0,   68,    2, 0x06,   15 /* Public */,
       9,    1,   69,    2, 0x06,   16 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,

 // properties: name, type, flags
      11, QMetaType::Int, 0x00015103, uint(0), 0,
      12, QMetaType::Int, 0x00015103, uint(1), 0,
      13, QMetaType::Int, 0x00015103, uint(2), 0,
      14, QMetaType::Int, 0x00015103, uint(3), 0,
      15, QMetaType::Int, 0x00015103, uint(4), 0,
      16, QMetaType::QString, 0x00015103, uint(5), 0,
      17, QMetaType::QString, 0x00015001, uint(6), 0,
      10, QMetaType::Bool, 0x00015103, uint(7), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject SerialConfiguration::staticMetaObject = { {
    QMetaObject::SuperData::link<LinkConfiguration::staticMetaObject>(),
    qt_meta_stringdata_CLASSSerialConfigurationENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSerialConfigurationENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSerialConfigurationENDCLASS_t,
        // property 'baud'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'dataBits'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'flowControl'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'stopBits'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'parity'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'portName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'portDisplayName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'usbDirect'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SerialConfiguration, std::true_type>,
        // method 'baudChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dataBitsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'flowControlChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stopBitsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'parityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'portNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'portDisplayNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'usbDirectChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void SerialConfiguration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SerialConfiguration *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->baudChanged(); break;
        case 1: _t->dataBitsChanged(); break;
        case 2: _t->flowControlChanged(); break;
        case 3: _t->stopBitsChanged(); break;
        case 4: _t->parityChanged(); break;
        case 5: _t->portNameChanged(); break;
        case 6: _t->portDisplayNameChanged(); break;
        case 7: _t->usbDirectChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SerialConfiguration::*)();
            if (_t _q_method = &SerialConfiguration::baudChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SerialConfiguration::*)();
            if (_t _q_method = &SerialConfiguration::dataBitsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SerialConfiguration::*)();
            if (_t _q_method = &SerialConfiguration::flowControlChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SerialConfiguration::*)();
            if (_t _q_method = &SerialConfiguration::stopBitsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SerialConfiguration::*)();
            if (_t _q_method = &SerialConfiguration::parityChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SerialConfiguration::*)();
            if (_t _q_method = &SerialConfiguration::portNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SerialConfiguration::*)();
            if (_t _q_method = &SerialConfiguration::portDisplayNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (SerialConfiguration::*)(bool );
            if (_t _q_method = &SerialConfiguration::usbDirectChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SerialConfiguration *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->baud(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->dataBits(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->flowControl(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->stopBits(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->parity(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->portName(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->portDisplayName(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->usbDirect(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SerialConfiguration *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBaud(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setDataBits(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setFlowControl(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setStopBits(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setParity(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setPortName(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setUsbDirect(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *SerialConfiguration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSerialConfigurationENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return LinkConfiguration::qt_metacast(_clname);
}

int SerialConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LinkConfiguration::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void SerialConfiguration::baudChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SerialConfiguration::dataBitsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SerialConfiguration::flowControlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SerialConfiguration::stopBitsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SerialConfiguration::parityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void SerialConfiguration::portNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void SerialConfiguration::portDisplayNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void SerialConfiguration::usbDirectChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSSerialLinkENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSerialLinkENDCLASS = QtMocHelpers::stringData(
    "SerialLink",
    "_writeBytes",
    "",
    "data",
    "linkError",
    "QSerialPort::SerialPortError",
    "error",
    "_readBytes"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSerialLinkENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[11];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[10];
    char stringdata5[29];
    char stringdata6[6];
    char stringdata7[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSerialLinkENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSerialLinkENDCLASS_t qt_meta_stringdata_CLASSSerialLinkENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "SerialLink"
        QT_MOC_LITERAL(11, 11),  // "_writeBytes"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 4),  // "data"
        QT_MOC_LITERAL(29, 9),  // "linkError"
        QT_MOC_LITERAL(39, 28),  // "QSerialPort::SerialPortError"
        QT_MOC_LITERAL(68, 5),  // "error"
        QT_MOC_LITERAL(74, 10)   // "_readBytes"
    },
    "SerialLink",
    "_writeBytes",
    "",
    "data",
    "linkError",
    "QSerialPort::SerialPortError",
    "error",
    "_readBytes"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSerialLinkENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x08,    1 /* Private */,
       4,    1,   35,    2, 0x0a,    3 /* Public */,
       7,    0,   38,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SerialLink::staticMetaObject = { {
    QMetaObject::SuperData::link<LinkInterface::staticMetaObject>(),
    qt_meta_stringdata_CLASSSerialLinkENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSerialLinkENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSerialLinkENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SerialLink, std::true_type>,
        // method '_writeBytes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'linkError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSerialPort::SerialPortError, std::false_type>,
        // method '_readBytes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SerialLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SerialLink *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->_writeBytes((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 1: _t->linkError((*reinterpret_cast< std::add_pointer_t<QSerialPort::SerialPortError>>(_a[1]))); break;
        case 2: _t->_readBytes(); break;
        default: ;
        }
    }
}

const QMetaObject *SerialLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialLink::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSerialLinkENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return LinkInterface::qt_metacast(_clname);
}

int SerialLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LinkInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
