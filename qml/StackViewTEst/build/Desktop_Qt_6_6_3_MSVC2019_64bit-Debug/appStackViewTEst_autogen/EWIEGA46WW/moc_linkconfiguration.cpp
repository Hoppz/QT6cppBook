/****************************************************************************
** Meta object code from reading C++ file 'linkconfiguration.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../linkconfiguration.h"
#include "LinkInterface.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'linkconfiguration.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSLinkConfigurationENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSLinkConfigurationENDCLASS = QtMocHelpers::stringData(
    "LinkConfiguration",
    "nameChanged",
    "",
    "name",
    "linkChanged",
    "dynamicChanged",
    "autoConnectChanged",
    "highLatencyChanged",
    "link",
    "LinkInterface*",
    "linkType",
    "LinkType",
    "dynamic",
    "autoConnect",
    "settingsURL",
    "settingsTitle",
    "highLatency",
    "TypeSerial",
    "TypeUdp",
    "TypeTcp",
    "TypeMock",
    "Airlink",
    "TypeLogReplay",
    "TypeLast"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSLinkConfigurationENDCLASS_t {
    uint offsetsAndSizes[48];
    char stringdata0[18];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[12];
    char stringdata5[15];
    char stringdata6[19];
    char stringdata7[19];
    char stringdata8[5];
    char stringdata9[15];
    char stringdata10[9];
    char stringdata11[9];
    char stringdata12[8];
    char stringdata13[12];
    char stringdata14[12];
    char stringdata15[14];
    char stringdata16[12];
    char stringdata17[11];
    char stringdata18[8];
    char stringdata19[8];
    char stringdata20[9];
    char stringdata21[8];
    char stringdata22[14];
    char stringdata23[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSLinkConfigurationENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSLinkConfigurationENDCLASS_t qt_meta_stringdata_CLASSLinkConfigurationENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "LinkConfiguration"
        QT_MOC_LITERAL(18, 11),  // "nameChanged"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 4),  // "name"
        QT_MOC_LITERAL(36, 11),  // "linkChanged"
        QT_MOC_LITERAL(48, 14),  // "dynamicChanged"
        QT_MOC_LITERAL(63, 18),  // "autoConnectChanged"
        QT_MOC_LITERAL(82, 18),  // "highLatencyChanged"
        QT_MOC_LITERAL(101, 4),  // "link"
        QT_MOC_LITERAL(106, 14),  // "LinkInterface*"
        QT_MOC_LITERAL(121, 8),  // "linkType"
        QT_MOC_LITERAL(130, 8),  // "LinkType"
        QT_MOC_LITERAL(139, 7),  // "dynamic"
        QT_MOC_LITERAL(147, 11),  // "autoConnect"
        QT_MOC_LITERAL(159, 11),  // "settingsURL"
        QT_MOC_LITERAL(171, 13),  // "settingsTitle"
        QT_MOC_LITERAL(185, 11),  // "highLatency"
        QT_MOC_LITERAL(197, 10),  // "TypeSerial"
        QT_MOC_LITERAL(208, 7),  // "TypeUdp"
        QT_MOC_LITERAL(216, 7),  // "TypeTcp"
        QT_MOC_LITERAL(224, 8),  // "TypeMock"
        QT_MOC_LITERAL(233, 7),  // "Airlink"
        QT_MOC_LITERAL(241, 13),  // "TypeLogReplay"
        QT_MOC_LITERAL(255, 8)   // "TypeLast"
    },
    "LinkConfiguration",
    "nameChanged",
    "",
    "name",
    "linkChanged",
    "dynamicChanged",
    "autoConnectChanged",
    "highLatencyChanged",
    "link",
    "LinkInterface*",
    "linkType",
    "LinkType",
    "dynamic",
    "autoConnect",
    "settingsURL",
    "settingsTitle",
    "highLatency",
    "TypeSerial",
    "TypeUdp",
    "TypeTcp",
    "TypeMock",
    "Airlink",
    "TypeLogReplay",
    "TypeLast"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLinkConfigurationENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       8,   51, // properties
       1,   91, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,   10 /* Public */,
       4,    0,   47,    2, 0x06,   12 /* Public */,
       5,    0,   48,    2, 0x06,   13 /* Public */,
       6,    0,   49,    2, 0x06,   14 /* Public */,
       7,    0,   50,    2, 0x06,   15 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00015103, uint(0), 0,
       8, 0x80000000 | 9, 0x00015009, uint(1), 0,
      10, 0x80000000 | 11, 0x00015409, uint(-1), 0,
      12, QMetaType::Bool, 0x00015103, uint(2), 0,
      13, QMetaType::Bool, 0x00015103, uint(3), 0,
      14, QMetaType::QString, 0x00015401, uint(-1), 0,
      15, QMetaType::QString, 0x00015401, uint(-1), 0,
      16, QMetaType::Bool, 0x00015103, uint(4), 0,

 // enums: name, alias, flags, count, data
      11,   11, 0x0,    7,   96,

 // enum data: key, value
      17, uint(LinkConfiguration::TypeSerial),
      18, uint(LinkConfiguration::TypeUdp),
      19, uint(LinkConfiguration::TypeTcp),
      20, uint(LinkConfiguration::TypeMock),
      21, uint(LinkConfiguration::Airlink),
      22, uint(LinkConfiguration::TypeLogReplay),
      23, uint(LinkConfiguration::TypeLast),

       0        // eod
};

Q_CONSTINIT const QMetaObject LinkConfiguration::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSLinkConfigurationENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLinkConfigurationENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLinkConfigurationENDCLASS_t,
        // property 'name'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'link'
        QtPrivate::TypeAndForceComplete<LinkInterface*, std::true_type>,
        // property 'linkType'
        QtPrivate::TypeAndForceComplete<LinkType, std::true_type>,
        // property 'dynamic'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'autoConnect'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'settingsURL'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'settingsTitle'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'highLatency'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // enum 'LinkType'
        QtPrivate::TypeAndForceComplete<LinkConfiguration::LinkType, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LinkConfiguration, std::true_type>,
        // method 'nameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'linkChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dynamicChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'autoConnectChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'highLatencyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void LinkConfiguration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LinkConfiguration *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->nameChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->linkChanged(); break;
        case 2: _t->dynamicChanged(); break;
        case 3: _t->autoConnectChanged(); break;
        case 4: _t->highLatencyChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LinkConfiguration::*)(const QString & );
            if (_t _q_method = &LinkConfiguration::nameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LinkConfiguration::*)();
            if (_t _q_method = &LinkConfiguration::linkChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LinkConfiguration::*)();
            if (_t _q_method = &LinkConfiguration::dynamicChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LinkConfiguration::*)();
            if (_t _q_method = &LinkConfiguration::autoConnectChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (LinkConfiguration::*)();
            if (_t _q_method = &LinkConfiguration::highLatencyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<LinkConfiguration *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< LinkInterface**>(_v) = _t->link(); break;
        case 2: *reinterpret_cast< LinkType*>(_v) = _t->type(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isDynamic(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isAutoConnect(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->settingsURL(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->settingsTitle(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isHighLatency(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<LinkConfiguration *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setDynamic(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setAutoConnect(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setHighLatency(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *LinkConfiguration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LinkConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLinkConfigurationENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LinkConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void LinkConfiguration::nameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LinkConfiguration::linkChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LinkConfiguration::dynamicChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void LinkConfiguration::autoConnectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void LinkConfiguration::highLatencyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
