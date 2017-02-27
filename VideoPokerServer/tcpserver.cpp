#include "tcpserver.h"
#include "serverthread.h"

#include <stdlib.h>
#include <QtNetwork>

TcpServer::TcpServer(QObject *parent)
    : QTcpServer(parent)
{
}

void TcpServer::startServer()
{
    if(!this->listen(QHostAddress::Any, 1234))
    {
        qDebug() << "Server could not start!";
    }
    else
    {
        qDebug() << "Server started!";
    }
}

void TcpServer::incomingConnection(int socketDescriptor)
{
    qDebug()<<"incomingConnection with socketDescriptor = " + QString::number(socketDescriptor);

    ServerThread *thread = new ServerThread(socketDescriptor, this);

    connect(thread, SIGNAL(finished()), thread, SLOT(deleteLater()));
    connect(thread,SIGNAL(client2insert(ClientInfo*)),this,SLOT(slotInsertClient(ClientInfo*)));
    connect(thread,SIGNAL(client2remove(ClientInfo*)),this,SLOT(slotRemoveClient(ClientInfo*)));
    connect(thread,SIGNAL(client2update(ClientInfo*)),this,SLOT(slotUpdateClient(ClientInfo*)));

    thread->start();
}

void TcpServer::slotInsertClient(ClientInfo* clientInfo)
{

}

void TcpServer::slotRemoveClient(ClientInfo* clientInfo)
{

}

void TcpServer::slotUpdateClient(ClientInfo* clientInfo)
{

}
