#include "requestmanager.h"
#include <QDebug>
#include <QByteArray>

RequestManager::RequestManager(int socketDesc, QObject *parent) :
    QObject(parent),
    blockSize(0)
{
    _id = socketDesc;
}

QByteArray RequestManager::clientConnection()
{
    QByteArray block;
    QDataStream out(&block, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_0);
    out<<(quint16) 0 << quint8('N') << _id;
    out.device()->seek(0);
    out<<(quint16) (block.size()-sizeof(quint16));

    return block;

}

void RequestManager::clientDisconnection(ClientInfo* clientInfo)
{
    emit client2remove(clientInfo);
}

void RequestManager::readRequest(QTcpSocket* socket)
{
}

QByteArray RequestManager::sendResponse()
{
    QByteArray qba;
    return qba;
}

int RequestManager::getId()
{
    return _id;
}
