#ifndef PokerServerManager_H
#define PokerServerManager_H

#include <QObject>
#include <QThread>
#include <QTcpSocket>
#include <stdlib.h>
#include "hand.h"
#include "requestmanager.h"
#include "pokerclientinfo.h"

class PokerServerManager : public RequestManager
{
    Q_OBJECT

public:
    explicit PokerServerManager(int sockDesc, QObject *parent = 0);
    void sendResultToClient(Win win);
    QByteArray sendResponse();
    void readRequest(QTcpSocket *socket);
private:
    quint16 blockSize;
    QTcpSocket* _socket;
    PokerClientInfo* clientInfo;
public slots:
    void checkResult(Hand hand);
};

#endif // PokerServerManager_H
