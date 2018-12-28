#ifndef CONNECTION_H
#define CONNECTION_H

#include <QCborStreamReader>
#include <QCborStreamWriter>
#include <QElapsedTimer>
#include <QHostAddress>
#include <QString>
#include <QTcpSocket>
#include <QTimer>

static const int MaxBufferSize = 1024000;

class Connection : public QTcpSocket
{
    Q_OBJECT

public:
    enum ConnectionState {
        WaitingForGreeting,
        ReadingGreeting,
        ReadyForUse
    };
    enum DataType {
        PlainText,
        Greeting,
        Undefined
    };

    Connection(QObject *parent = nullptr);
    Connection(qintptr socketDescriptor, QObject *parent = nullptr);

    QString name() const;
    void setGreetingMessage(const QString &message);
    bool sendMessage(const QString &message);

signals:
    void readyForUse();
    void newMessage(const QString &from, const QString &message);

protected:

private slots:
    void processReadyRead();
    void sendGreetingMessage();

private:
    bool hasEnoughData();
    void processGreeting();
    void processData();

    QCborStreamReader reader;
    QCborStreamWriter writer;
    QString greetingMessage;
    QString username;
    QString buffer;
    ConnectionState state;
    DataType currentDataType;
    bool isGreetingMessageSent;
};

#endif
