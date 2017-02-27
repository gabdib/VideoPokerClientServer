#ifndef ServerThread_H
#define ServerThread_H

#include <QObject>
#include <QThread>
#include <QTcpServer>
#include <QTcpSocket>
#include <stdlib.h>
#include "hand.h"
#include "pokerservermanager.h"

class ServerThread : public QThread
{
    Q_OBJECT

public:
    explicit ServerThread(int socketDesc = 0, QObject *parent = 0);
    void sendResponse(QByteArray block);
private:
    void run();
    QTcpSocket *socket;
    quint16 blockSize;
    int socketDescriptor;
    RequestManager* requestManager;
signals:
    void client2insert(ClientInfo*);
    void client2remove(ClientInfo*);
    void client2update(ClientInfo*);
public slots:
    void connected();
    void bytesWritten(qint64 id);
    void readyRead();
    void disconnected();
};

#endif // ServerThread_H
