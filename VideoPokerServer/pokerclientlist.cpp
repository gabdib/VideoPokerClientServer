//#include "pokerclientlist.h"

//PokerClientList::PokerClientList() :
//    QObject(0)
//{
//    instance = 0;
//    mutex = new QMutex();
//}

//PokerClientList &PokerClientList::getInstance()
//{
//    if(instance == 0)
//    {
////        mutex->lock();
//        if(instance == 0)
//        {
//            instance = new PokerClientList();
//        }
////        mutex->unlock();
//    }

//    return *instance;
//}

//PokerClientInfo* PokerClientList::getPokerClientById(int id)
//{
//    int i, index;
//    for(i = 0; this->size(); i++)
//        index = this->at(i)->getId();
//        if(index == id)
//        {
//            return this->at(i);
//        }
//        return 0;
//}


//void PokerClientList::slotRemovePlayer(ClientInfo* clientInfo)
//{
//    mutex->lock();
//    instance->removeOne((PokerClientInfo*)clientInfo);
//    mutex->unlock();
//    emit client2remove(clientInfo);
//}

//void PokerClientList::slotAddPlayer(ClientInfo* clientInfo)
//{
//    mutex->lock();
//    instance->prepend((PokerClientInfo*)clientInfo);
//    mutex->unlock();
//    emit client2insert(clientInfo);
//}

//void PokerClientList::slotUpdateMoney(ClientInfo* clientInfo)
//{
//    PokerClientInfo* pokerClient = (PokerClientInfo*) getPokerClientById(clientInfo->getId());
//    mutex->lock();
//    instance->replace(pokerClient->getId(), (PokerClientInfo*)clientInfo);
//    mutex->unlock();
//    emit client2update(clientInfo);
//}
