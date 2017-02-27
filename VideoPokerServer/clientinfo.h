#ifndef CLIENTINFO_H
#define CLIENTINFO_H

class ClientInfo
{
public:
    ClientInfo();
    explicit ClientInfo(int id);
    void setId(int id);
    int getId();
private:
    int _id;
};

#endif // CLIENTINFO_H
