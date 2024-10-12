#ifndef LINKMANAGER_H
#define LINKMANAGER_H

#include <QObject>

#include "linkconfiguration.h"
#include "linkinterface.h"

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




signals:
};

#endif // LINKMANAGER_H
