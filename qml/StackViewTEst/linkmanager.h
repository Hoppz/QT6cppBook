#ifndef LINKMANAGER_H
#define LINKMANAGER_H

#include <QObject>
#include <QSerialPort>

#include "linkconfiguration.h"
#include "linkinterface.h"

#ifndef NO_SERIAL_LINK
class SerialLink;
#endif

class LinkManager : public QObject
{
    Q_OBJECT
public:
    LinkManager();
    ~LinkManager();

    // create/Edit Link Configuration
    Q_INVOKABLE LinkConfiguration* createConfiguration (int type,const QString& name);
    Q_INVOKABLE LinkConfiguration* startConfigurationEditing (LinkConfiguration* config);
    Q_INVOKABLE void                cancelConfigurationEditing         (LinkConfiguration* config) { delete config; }
    Q_INVOKABLE bool                endConfigurationEditing            (LinkConfiguration* config, LinkConfiguration* editedConfig);
    Q_INVOKABLE void                removeConfiguration                (LinkConfiguration* config);
    // 转发 MAVLink 消息的支持链接，并启用 MAVLink 消息转发功能
    Q_INVOKABLE void                createMavlinkForwardingSupportLink (void);


    // Called to signal app shutdown. Disconnects all links while turning off auto-connect.
    Q_INVOKABLE void shutdown(void);

    // Property accessors

    bool isBluetoothAvailable       (void);

    QList<SharedLinkInterfacePtr>   links                           (void) { return _rgLinks; }
    QStringList                     linkTypeStrings                 (void) const;
    bool                            mavlinkSupportForwardingEnabled (void) { return _mavlinkSupportForwardingEnabled; }

    void loadLinkConfigurationList();
    void saveLinkConfigurationList();

    /// Suspend automatic confguration updates (during link maintenance for instance)
    void suspendConfigurationUpdates(bool suspend);

    /// Sets the flag to suspend the all new connections
    ///     @param reason User visible reason to suspend connections
    void setConnectionsSuspended(QString reason);

    /// Sets the flag to allow new connections to be made
    void setConnectionsAllowed(void) { _connectionsSuspended = false; }

    /// Creates, connects (and adds) a link  based on the given configuration instance.
    bool createConnectedLink(SharedLinkConfigurationPtr& config, bool isPX4Flow = false);

    // This should only be used by Qml code
    Q_INVOKABLE void createConnectedLink(LinkConfiguration* config);

    /// Returns pointer to the mavlink forwarding link, or nullptr if it does not exist
    SharedLinkInterfacePtr mavlinkForwardingLink();

    /// Returns pointer to the mavlink support forwarding link, or nullptr if it does not exist
    SharedLinkInterfacePtr mavlinkForwardingSupportLink();

    /// Re-initilize the mavlink signing for all links. Used when the signing key changes.
    void resetMavlinkSigning();

    void disconnectAll(void);

signals:
    void mavlinkSupportForwardingEnabledChanged();
    void isBluetoothAvailableChanged();

private slots:
    void _linkDisconnected  (void);

private:
    QmlObjectListModel* _qmlLinkConfigurations      (void) { return &_qmlConfigurations; }
    bool                _connectionsSuspendedMsg    (void);
    void                _updateAutoConnectLinks     (void);
    void                _removeConfiguration        (LinkConfiguration* config);
    void                _addUDPAutoConnectLink      (void);
#ifdef QGC_ZEROCONF_ENABLED
    void                _addZeroConfAutoConnectLink (void);
#endif
    void                _addMAVLinkForwardingLink   (void);
    void                _createDynamicForwardLink   (const char* linkName, QString hostName);

    bool                                _configUpdateSuspended;                     ///< true: stop updating configuration list
    bool                                _configurationsLoaded;                      ///< true: Link configurations have been loaded
    bool                                _connectionsSuspended;                      ///< true: all new connections should not be allowed
    QString                             _connectionsSuspendedReason;                ///< User visible reason for suspension
    QTimer                              _portListTimer;
    uint32_t                            _mavlinkChannelsUsedBitMask;

    AutoConnectSettings*                _autoConnectSettings;
    MAVLinkProtocol*                    _mavlinkProtocol;

    QList<SharedLinkInterfacePtr>       _rgLinks;
    QList<SharedLinkConfigurationPtr>   _rgLinkConfigs;
    QmlObjectListModel                  _qmlConfigurations;

    UdpIODevice                         _nmeaSocket;

    bool                _mavlinkSupportForwardingEnabled = false;

    static constexpr const char* _defaultUDPLinkName =                  "UDP Link (AutoConnect)";
    static constexpr const char* _mavlinkForwardingLinkName =           "MAVLink Forwarding Link";
    static constexpr const char* _mavlinkForwardingSupportLinkName =    "MAVLink Support Forwarding Link";

    static constexpr int _autoconnectUpdateTimerMSecs =   1000;
#ifdef Q_OS_WIN
    // Have to manually let the bootloader go by on Windows to get a working connect
    static constexpr int _autoconnectConnectDelayMSecs =  6000;
#else
    static constexpr int _autoconnectConnectDelayMSecs =  1000;
#endif

#ifndef NO_SERIAL_LINK
public:
    Q_PROPERTY(QStringList serialBaudRates   READ serialBaudRates   CONSTANT)
    Q_PROPERTY(QStringList serialPortStrings READ serialPortStrings NOTIFY commPortStringsChanged)
    Q_PROPERTY(QStringList serialPorts       READ serialPorts       NOTIFY commPortsChanged)

    static QStringList serialBaudRates();
    QStringList serialPortStrings();
    QStringList serialPorts();

signals:
    void commPortStringsChanged();
    void commPortsChanged();

private:
    bool _isSerialPortConnected();
    void _updateSerialPorts();
    //bool _allowAutoConnectToBoard(QGCSerialPortInfo::BoardType_t boardType);
    bool _portAlreadyConnected(const QString &portName);

    QMap<QString, int> _autoconnectPortWaitList;   ///< key: QGCSerialPortInfo::systemLocation, value: wait count
    QList<SerialLink*> _activeLinkCheckList;       ///< List of links we are waiting for a vehicle to show up on
    QStringList _commPortList;
    QStringList _commPortDisplayList;
    QString _autoConnectRTKPort;
    QString _nmeaDeviceName;
    uint32_t _nmeaBaud = 0;
    QSerialPort *_nmeaPort = nullptr;
};

#endif // LINKMANAGER_H
