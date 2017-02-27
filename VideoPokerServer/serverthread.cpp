#include "serverthread.h"
#include <QDebug>
#include <QByteArray>

ServerThread::ServerThread(int socketDesc, QObject *parent) :
    QThread(parent),
    socketDescriptor(socketDesc),
    blockSize(0)
{
    requestManager = new PokerServerManager(socketDescriptor, this);
}

void ServerThread::run()
{
    socket = new QTcpSocket(this);
    if(!socket->setSocketDescriptor(socketDescriptor))
    {
        //emit error(socket.error());
        qDebug()<<socket->errorString();
        return;
    }

    connect(socket, SIGNAL(connected()),this, SLOT(connected()));
    connect(socket, SIGNAL(bytesWritten(qint64)),this, SLOT(bytesWritten(qint64)));
    connect(socket, SIGNAL(disconnected()),this, SLOT(disconnected()));
    connect(socket, SIGNAL(readyRead()),this, SLOT(readyRead()), Qt::DirectConnection);

    QByteArray block = requestManager->clientConnection();

    socket->write(block);
    socket->flush();

    exec();
}

void ServerThread::sendResponse(QByteArray block)
{
    socket->write(block);
    socket->flush();
}

void ServerThread::connected()
{
    qDebug() << "connected";
}

void ServerThread::disconnected()
{
    socket->disconnectFromHost();
    socket->close();
    qDebug()<<"Socket disconnected";
}

void ServerThread::bytesWritten(qint64 bytes)
{
    qDebug() << bytes << "bytes written";
}

void ServerThread::readyRead()
{
    qDebug() << "Reading...";

    requestManager->readRequest(socket);
}
