#include "pokerclientinfo.h"

PokerClientInfo::PokerClientInfo() :
    ClientInfo()
{
}

PokerClientInfo::PokerClientInfo(int id) :
    ClientInfo(id)
{
}

PokerClientInfo::PokerClientInfo(int id, QString name, int money):
    ClientInfo(id)
{
    _name = name;
    _money = money;
}

QString PokerClientInfo::getName()
{
    return _name;
}

int PokerClientInfo::getMoney()
{
    return _money;
}

void PokerClientInfo::setName(QString name)
{
    _name = name;
}

void PokerClientInfo::setMoney(int money)
{
    _money = money;
}
