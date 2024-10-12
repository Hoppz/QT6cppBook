#ifndef UDPLINK_H
#define UDPLINK_H

#include <QObject>
#include <QtNetwork/QHostAddress>

#include "LinkConfiguration.h"
#include "LinkInterface.h"

class LinkManager;
class QUdpSocket;

// 用于表示一个 UDP 客户端的网络地址和端口
class UDPCLient {
public:
    UDPCLient(const QHostAddress& address_, quint16 port_)
        : address(address_)
        , port(port_)
    {}
    UDPCLient(const UDPCLient* other)
        : address(other->address)
        , port(other->port)
    {}
    QHostAddress    address;
    quint16         port;
};

class UDPLink : public LinkInterface
{
    Q_OBJECT
public:
    explicit UDPLink(QObject *parent = nullptr);

signals:
};



class UDPConfiguration : public LinkConfiguration
{
    Q_OBJECT



public:
    Q_PROPERTY(quint16      localPort   READ localPort  WRITE setLocalPort  NOTIFY localPortChanged)
    Q_PROPERTY(QStringList  hostList    READ hostList                       NOTIFY  hostListChanged)

    UDPConfiguration(const QString& name);
    UDPConfiguration(UDPConfiguration* source);

    quint16 localPort   () const{ return _localPort; }

    /// @param[in] host Host name in standard formatt, e.g. localhost:14551 or 192.168.1.1:14551
    Q_INVOKABLE void addHost (const QString host);

    /// @param[in] host Host name, e.g. localhost or 192.168.1.1
    /// @param[in] port Port number
    void addHost        (const QString& host, quint16 port);

    /// @param[in] host Host name, e.g. localhost or 192.168.1.1
    Q_INVOKABLE void removeHost  (const QString host);

    void                    setLocalPort(quint16 port);
    QStringList             hostList    (void)          { return _hostList; }
    const QList<UDPCLient*> targetHosts (void)          { return _targetHosts; }

    /// LinkConfiguration overrides ////////////////////////////////////////////////
    LinkType    type                 (void) override                                        { return LinkConfiguration::TypeUdp; }
    void        copyFrom             (LinkConfiguration* source) override;
    void        loadSettings         (QSettings& settings, const QString& root) override;
    void        saveSettings         (QSettings& settings, const QString& root) override;
    QString     settingsURL          (void) override                                        { return "UdpSettings.qml"; }
    QString     settingsTitle        (void) override                                        { return tr("UDP Link Settings"); }

signals:
    void localPortChanged   (void);
    void hostListChanged    (void);


private:
    void _updateHostList    (void);
    void _clearTargetHosts  (void);
    void _copyFrom          (LinkConfiguration *source);

    QList<UDPCLient*>   _targetHosts;
    QStringList         _hostList;
    quint16             _localPort;
};


#endif // UDPLINK_H
























