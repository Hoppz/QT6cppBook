/****************************************************************************
** Meta object code from reading C++ file 'udplink.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../udplink.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'udplink.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSUDPLinkENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSUDPLinkENDCLASS = QtMocHelpers::stringData(
    "UDPLink"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSUDPLinkENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSUDPLinkENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSUDPLinkENDCLASS_t qt_meta_stringdata_CLASSUDPLinkENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7)   // "UDPLink"
    },
    "UDPLink"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSUDPLinkENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject UDPLink::staticMetaObject = { {
    QMetaObject::SuperData::link<LinkInterface::staticMetaObject>(),
    qt_meta_stringdata_CLASSUDPLinkENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSUDPLinkENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSUDPLinkENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UDPLink, std::true_type>
    >,
    nullptr
} };

void UDPLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *UDPLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UDPLink::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSUDPLinkENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return LinkInterface::qt_metacast(_clname);
}

int UDPLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LinkInterface::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSUDPConfigurationENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSUDPConfigurationENDCLASS = QtMocHelpers::stringData(
    "UDPConfiguration",
    "localPortChanged",
    "",
    "hostListChanged",
    "addHost",
    "host",
    "removeHost",
    "localPort",
    "hostList"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSUDPConfigurationENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[17];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[8];
    char stringdata5[5];
    char stringdata6[11];
    char stringdata7[10];
    char stringdata8[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSUDPConfigurationENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSUDPConfigurationENDCLASS_t qt_meta_stringdata_CLASSUDPConfigurationENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "UDPConfiguration"
        QT_MOC_LITERAL(17, 16),  // "localPortChanged"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 15),  // "hostListChanged"
        QT_MOC_LITERAL(51, 7),  // "addHost"
        QT_MOC_LITERAL(59, 4),  // "host"
        QT_MOC_LITERAL(64, 10),  // "removeHost"
        QT_MOC_LITERAL(75, 9),  // "localPort"
        QT_MOC_LITERAL(85, 8)   // "hostList"
    },
    "UDPConfiguration",
    "localPortChanged",
    "",
    "hostListChanged",
    "addHost",
    "host",
    "removeHost",
    "localPort",
    "hostList"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSUDPConfigurationENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    3 /* Public */,
       3,    0,   39,    2, 0x06,    4 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   40,    2, 0x02,    5 /* Public */,
       6,    1,   43,    2, 0x02,    7 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,

 // properties: name, type, flags
       7, QMetaType::UShort, 0x00015103, uint(0), 0,
       8, QMetaType::QStringList, 0x00015001, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject UDPConfiguration::staticMetaObject = { {
    QMetaObject::SuperData::link<LinkConfiguration::staticMetaObject>(),
    qt_meta_stringdata_CLASSUDPConfigurationENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSUDPConfigurationENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSUDPConfigurationENDCLASS_t,
        // property 'localPort'
        QtPrivate::TypeAndForceComplete<quint16, std::true_type>,
        // property 'hostList'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UDPConfiguration, std::true_type>,
        // method 'localPortChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hostListChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addHost'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString, std::false_type>,
        // method 'removeHost'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString, std::false_type>
    >,
    nullptr
} };

void UDPConfiguration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UDPConfiguration *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->localPortChanged(); break;
        case 1: _t->hostListChanged(); break;
        case 2: _t->addHost((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->removeHost((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UDPConfiguration::*)();
            if (_t _q_method = &UDPConfiguration::localPortChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UDPConfiguration::*)();
            if (_t _q_method = &UDPConfiguration::hostListChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<UDPConfiguration *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint16*>(_v) = _t->localPort(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->hostList(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<UDPConfiguration *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLocalPort(*reinterpret_cast< quint16*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *UDPConfiguration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UDPConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSUDPConfigurationENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return LinkConfiguration::qt_metacast(_clname);
}

int UDPConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LinkConfiguration::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void UDPConfiguration::localPortChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void UDPConfiguration::hostListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
