#ifndef RequestManager_H
#define RequestManager_H

#include <QObject>
#include <stdlib.h>
#include <QTcpSocket>
#include "hand.h"
#include "clientinfo.h"

class RequestManager : public QObject
{
    Q_OBJECT

public:
    explicit RequestManager(int socketDesc = 0, QObject *parent = 0);
    virtual void readRequest(QTcpSocket* socket);
    virtual QByteArray sendResponse();
    QByteArray clientConnection();
    void clientDisconnection(ClientInfo *clientInfo);
    int getId();
signals:
    void client2remove(ClientInfo*);
    void client2insert(ClientInfo*);
    void client2update(ClientInfo*);
private:
    quint16 blockSize;
    int _id;

};

#endif // RequestManager_H
