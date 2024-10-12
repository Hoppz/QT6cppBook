#ifndef LINKINTERFACE_H
#define LINKINTERFACE_H

#include <QObject>

class LinkInterface : public QObject
{
    Q_OBJECT
public:
    explicit LinkInterface(QObject *parent = nullptr);

signals:
};



typedef std::shared_ptr<LinkInterface> SharedLinkInterfacePtr;
typedef std::weak_ptr<LinkInterface> WeakLinkInterfacePtr;

#endif // LINKINTERFACE_H
