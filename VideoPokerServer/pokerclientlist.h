//#ifndef POKERCLIENTLIST_H
//#define POKERCLIENTLIST_H

//#include <QList>
//#include <QObject>
//#include <QMutex>
//#include "pokerclientinfo.h"

//class PokerClientList : public QObject, public QList<PokerClientInfo*>
//{
//    Q_OBJECT

//public:
//    PokerClientList();
//    PokerClientInfo* getPokerClientById(int id);
//    static PokerClientList& getInstance();
//    QMutex* mutex;
//    const PokerClientList& operator=(const PokerClientList&);

//signals:
//    void client2insert(ClientInfo*);
//    void client2remove(ClientInfo*);
//    void client2update(ClientInfo*);

//protected:
//    static PokerClientList* instance;

//public slots:
//    void slotRemovePlayer(ClientInfo* clientInfo);
//    void slotAddPlayer(ClientInfo* clientInfo);
//    void slotUpdateMoney(ClientInfo* clientInfo);
//};

//#endif // POKERCLIENTLIST_H
