#ifndef SERIALLINK_H
#define SERIALLINK_H

#include <QObject>
#include <QtCore/QMutex>
#include "LinkConfiguration.h"
#include "LinkInterface.h"

#ifdef Q_OS_ANDROID
#include "qserialport.h"
#else
#include <QtSerialPort/QSerialPort>
#endif

class LinkManager;

/// SerialLink configuration
class SerialConfiguration : public LinkConfiguration
{
    Q_OBJECT

public:

    SerialConfiguration(const QString& name);
    SerialConfiguration(SerialConfiguration* copy);

    Q_PROPERTY(int      baud            READ baud               WRITE setBaud               NOTIFY baudChanged)
    Q_PROPERTY(int      dataBits        READ dataBits           WRITE setDataBits           NOTIFY dataBitsChanged)
    Q_PROPERTY(int      flowControl     READ flowControl        WRITE setFlowControl        NOTIFY flowControlChanged)
    Q_PROPERTY(int      stopBits        READ stopBits           WRITE setStopBits           NOTIFY stopBitsChanged)
    Q_PROPERTY(int      parity          READ parity             WRITE setParity             NOTIFY parityChanged)
    Q_PROPERTY(QString  portName        READ portName           WRITE setPortName           NOTIFY portNameChanged)
    Q_PROPERTY(QString  portDisplayName READ portDisplayName                                NOTIFY portDisplayNameChanged)
    Q_PROPERTY(bool     usbDirect       READ usbDirect          WRITE setUsbDirect          NOTIFY usbDirectChanged)        ///< true: direct usb connection to board

    int  baud() const        { return _baud; }
    int  dataBits() const    { return _dataBits; }
    int  flowControl() const { return _flowControl; }    ///< QSerialPort Enums
    int  stopBits() const    { return _stopBits; }
    int  parity() const      { return _parity; }         ///< QSerialPort Enums
    bool usbDirect() const   { return _usbDirect; }

    const QString portName          () const { return _portName; }
    const QString portDisplayName   () const { return _portDisplayName; }

    void setBaud            (int baud);
    void setDataBits        (int databits);
    void setFlowControl     (int flowControl);          ///< QSerialPort Enums
    void setStopBits        (int stopBits);
    void setParity          (int parity);               ///< QSerialPort Enums
    void setPortName        (const QString& portName);
    void setUsbDirect       (bool usbDirect);

    static QStringList supportedBaudRates();
    static QString cleanPortDisplayname(const QString name);

    /// From LinkConfiguration
    LinkType    type            () { return LinkConfiguration::TypeSerial; }
    void        copyFrom        (LinkConfiguration* source);
    void        loadSettings    (QSettings& settings, const QString& root);
    void        saveSettings    (QSettings& settings, const QString& root);
    void        updateSettings  ();
    QString     settingsURL     () { return "SerialSettings.qml"; }
    QString     settingsTitle   () { return tr("Serial Link Settings"); }

signals:
    void baudChanged            ();
    void dataBitsChanged        ();
    void flowControlChanged     ();
    void stopBitsChanged        ();
    void parityChanged          ();
    void portNameChanged        ();
    void portDisplayNameChanged ();
    void usbDirectChanged       (bool usbDirect);

private:
    int _baud;
    int _dataBits;
    int _flowControl;
    int _stopBits;
    int _parity;
    QString _portName;
    QString _portDisplayName;
    bool _usbDirect;
};

class SerialLink : public LinkInterface
{
    Q_OBJECT

public:
    SerialLink(SharedLinkConfigurationPtr& config, bool isPX4Flow = false);
    virtual ~SerialLink();

    // LinkInterface overrides
    bool isConnected        (void) const override;
    void disconnect         (void) override;
    bool isSecureConnection (void) override;

    /// Don't even think of calling this method!
    QSerialPort* _hackAccessToPort(void) { return _port; }

private slots:
    void _writeBytes(const QByteArray &data) override;

public slots:
    void linkError(QSerialPort::SerialPortError error);

private slots:
    void _readBytes     (void);

private:
    // LinkInterface overrides
    bool _connect(void) override;

    void _emitLinkError     (const QString& errorMsg);
    bool _hardwareConnect   (QSerialPort::SerialPortError& error, QString& errorString);
    bool _isBootloader      (void);

    QSerialPort*            _port               = nullptr;
    quint64                 _bytesRead          = 0;
    int                     _timeout;
    QMutex                  _dataMutex;                     ///< Mutex for reading data from _port
    QMutex                  _writeMutex;                    ///< Mutex for accessing the _transmitBuffer.
    volatile bool           _stopp              = false;
    QMutex                  _stoppMutex;                    ///< Mutex for accessing _stopp
    QByteArray              _transmitBuffer;                ///< An internal buffer for receiving data from member functions and actually transmitting them via the serial port.
    SerialConfiguration*    _serialConfig       = nullptr;
};

#endif // SERIALLINK_H
