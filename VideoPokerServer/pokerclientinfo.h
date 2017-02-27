#ifndef POKERCLIENTINFO_H
#define POKERCLIENTINFO_H

#include <QString>
#include "clientinfo.h"

class PokerClientInfo : public ClientInfo
{

public:
    PokerClientInfo();
    PokerClientInfo(int id);
    PokerClientInfo(int id, QString name, int money);
    QString getName();
    int getMoney();
    void setName(QString name);
    void setMoney(int money);
private:
    QString _name;
    int _money;
};

#endif // POKERCLIENTINFO_H
