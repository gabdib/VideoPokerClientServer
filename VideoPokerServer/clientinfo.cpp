#include "clientinfo.h"

ClientInfo::ClientInfo()
{

}

ClientInfo::ClientInfo(int id)
{
    _id = id;
}

void ClientInfo::setId(int id)
{
    _id = id;
}

int ClientInfo::getId()
{
    return _id;
}
