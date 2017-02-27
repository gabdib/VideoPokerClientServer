#ifndef SERVERTHREAD_H
#define SERVERTHREAD_H

#include <QTcpServer>
#include "clientinfo.h"


class TcpServer : public QTcpServer
{
    Q_OBJECT

public:
    TcpServer(QObject *parent = 0);
    void startServer();

protected:
    void incomingConnection(int socketDescriptor);
public slots:
    void slotInsertClient(ClientInfo* clientInfo);
    void slotRemoveClient(ClientInfo* clientInfo);
    void slotUpdateClient(ClientInfo* clientInfo);
};

#endif // SERVERTHREAD_H
