/****************************************************************************
** Meta object code from reading C++ file 'linkmanager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../linkmanager.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'linkmanager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSLinkManagerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSLinkManagerENDCLASS = QtMocHelpers::stringData(
    "LinkManager",
    "createConfiguration",
    "LinkConfiguration*",
    "",
    "type",
    "name",
    "startConfigurationEditing",
    "config",
    "cancelConfigurationEditing",
    "endConfigurationEditing",
    "editedConfig",
    "removeConfiguration",
    "createMavlinkForwardingSupportLink",
    "shutdown"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSLinkManagerENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[12];
    char stringdata1[20];
    char stringdata2[19];
    char stringdata3[1];
    char stringdata4[5];
    char stringdata5[5];
    char stringdata6[26];
    char stringdata7[7];
    char stringdata8[27];
    char stringdata9[24];
    char stringdata10[13];
    char stringdata11[20];
    char stringdata12[35];
    char stringdata13[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSLinkManagerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSLinkManagerENDCLASS_t qt_meta_stringdata_CLASSLinkManagerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "LinkManager"
        QT_MOC_LITERAL(12, 19),  // "createConfiguration"
        QT_MOC_LITERAL(32, 18),  // "LinkConfiguration*"
        QT_MOC_LITERAL(51, 0),  // ""
        QT_MOC_LITERAL(52, 4),  // "type"
        QT_MOC_LITERAL(57, 4),  // "name"
        QT_MOC_LITERAL(62, 25),  // "startConfigurationEditing"
        QT_MOC_LITERAL(88, 6),  // "config"
        QT_MOC_LITERAL(95, 26),  // "cancelConfigurationEditing"
        QT_MOC_LITERAL(122, 23),  // "endConfigurationEditing"
        QT_MOC_LITERAL(146, 12),  // "editedConfig"
        QT_MOC_LITERAL(159, 19),  // "removeConfiguration"
        QT_MOC_LITERAL(179, 34),  // "createMavlinkForwardingSuppor..."
        QT_MOC_LITERAL(214, 8)   // "shutdown"
    },
    "LinkManager",
    "createConfiguration",
    "LinkConfiguration*",
    "",
    "type",
    "name",
    "startConfigurationEditing",
    "config",
    "cancelConfigurationEditing",
    "endConfigurationEditing",
    "editedConfig",
    "removeConfiguration",
    "createMavlinkForwardingSupportLink",
    "shutdown"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLinkManagerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   56,    3, 0x02,    1 /* Public */,
       6,    1,   61,    3, 0x02,    4 /* Public */,
       8,    1,   64,    3, 0x02,    6 /* Public */,
       9,    2,   67,    3, 0x02,    8 /* Public */,
      11,    1,   72,    3, 0x02,   11 /* Public */,
      12,    0,   75,    3, 0x02,   13 /* Public */,
      13,    0,   76,    3, 0x02,   14 /* Public */,

 // methods: parameters
    0x80000000 | 2, QMetaType::Int, QMetaType::QString,    4,    5,
    0x80000000 | 2, 0x80000000 | 2,    7,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 2,    7,   10,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject LinkManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSLinkManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLinkManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLinkManagerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LinkManager, std::true_type>,
        // method 'createConfiguration'
        QtPrivate::TypeAndForceComplete<LinkConfiguration *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'startConfigurationEditing'
        QtPrivate::TypeAndForceComplete<LinkConfiguration *, std::false_type>,
        QtPrivate::TypeAndForceComplete<LinkConfiguration *, std::false_type>,
        // method 'cancelConfigurationEditing'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<LinkConfiguration *, std::false_type>,
        // method 'endConfigurationEditing'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<LinkConfiguration *, std::false_type>,
        QtPrivate::TypeAndForceComplete<LinkConfiguration *, std::false_type>,
        // method 'removeConfiguration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<LinkConfiguration *, std::false_type>,
        // method 'createMavlinkForwardingSupportLink'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'shutdown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void LinkManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LinkManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { LinkConfiguration* _r = _t->createConfiguration((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< LinkConfiguration**>(_a[0]) = std::move(_r); }  break;
        case 1: { LinkConfiguration* _r = _t->startConfigurationEditing((*reinterpret_cast< std::add_pointer_t<LinkConfiguration*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< LinkConfiguration**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->cancelConfigurationEditing((*reinterpret_cast< std::add_pointer_t<LinkConfiguration*>>(_a[1]))); break;
        case 3: { bool _r = _t->endConfigurationEditing((*reinterpret_cast< std::add_pointer_t<LinkConfiguration*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<LinkConfiguration*>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->removeConfiguration((*reinterpret_cast< std::add_pointer_t<LinkConfiguration*>>(_a[1]))); break;
        case 5: _t->createMavlinkForwardingSupportLink(); break;
        case 6: _t->shutdown(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LinkConfiguration* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LinkConfiguration* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LinkConfiguration* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LinkConfiguration* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *LinkManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LinkManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLinkManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LinkManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
