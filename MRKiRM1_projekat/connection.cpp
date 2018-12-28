#include "connection.h"

#include <QtNetwork>

/*
 * Protocol is defined as follows, using the CBOR Data Definition Language:
 *
 *  protocol    = [
 *     greeting,        ; must start with a greeting command
 *     * command        ; zero or more regular commands after
 *  ]
 *  command     = plaintext / ping / pong / greeting
 *  plaintext   = { 0 => text }
 *  ping        = { 1 => null }
 *  pong        = { 2 => null }
 *  greeting    = { 3 => text }
 */

Connection::Connection(QObject *parent)
    : QTcpSocket(parent), writer(this)
{
    greetingMessage = tr("undefined");
    username = tr("unknown");
    state = WaitingForGreeting;
    currentDataType = Undefined;
    isGreetingMessageSent = false;

    QObject::connect(this, SIGNAL(readyRead()), this, SLOT(processReadyRead()));
    QObject::connect(this, SIGNAL(connected()),
                     this, SLOT(sendGreetingMessage()));
}

Connection::Connection(qintptr socketDescriptor, QObject *parent)
    : Connection(parent)
{
    setSocketDescriptor(socketDescriptor);
    reader.setDevice(this);
}

QString Connection::name() const
{
    return username;
}

void Connection::setGreetingMessage(const QString &message)
{
    greetingMessage = message;
}

bool Connection::sendMessage(const QString &message)
{
    if (message.isEmpty())
        return false;

    writer.startMap(1);
    writer.append(PlainText);
    writer.append(message);
    writer.endMap();
    return true;
}

void Connection::processReadyRead()
{

}

void Connection::sendGreetingMessage()
{
    writer.startArray();        // this array never ends

    writer.startMap(1);
    writer.append(Greeting);
    writer.append(greetingMessage);
    writer.endMap();
    isGreetingMessageSent = true;

    if (!reader.device())
        reader.setDevice(this);
}

void Connection::processGreeting()
{
    username = buffer + '@' + peerAddress().toString() + ':'
            + QString::number(peerPort());
    currentDataType = Undefined;
    buffer.clear();

    if (!isValid()) {
        abort();
        return;
    }

    if (!isGreetingMessageSent)
        sendGreetingMessage();
    state = ReadyForUse;
    emit readyForUse();
}

void Connection::processData()
{
    emit newMessage(username, buffer);
    currentDataType = Undefined;
    buffer.clear();
}
