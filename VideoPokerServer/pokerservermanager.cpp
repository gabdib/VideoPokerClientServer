#include "pokerservermanager.h"
#include <QDebug>
#include <QByteArray>

PokerServerManager::PokerServerManager(int sockDesc, QObject *parent) :
    RequestManager(sockDesc, parent)
{
    blockSize = 0;
    clientInfo =  new PokerClientInfo(this->getId());

}

void PokerServerManager::checkResult(Hand hand)
{
    qDebug()<<"Card1 = " + QString::number(hand.getCard1().get_rank()) + QString::number(hand.getCard1().get_suit()) + "\nCard2 = " + QString::number(hand.getCard2().get_rank()) + QString::number(hand.getCard2().get_suit()) +"\nCard3 = " + QString::number(hand.getCard3().get_rank()) + QString::number(hand.getCard3().get_suit()) + "\nCard4 = " + QString::number(hand.getCard4().get_rank()) + QString::number(hand.getCard4().get_suit()) + "\nCard5 = " + QString::number(hand.getCard5().get_rank()) + QString::number(hand.getCard5().get_suit());

    Win win = hand.checkWinning();

    qDebug()<<"WIN: " + win.name;

    sendResultToClient(win);
}

void PokerServerManager::sendResultToClient(Win win)
{
    QByteArray block;
    QDataStream out(&block, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_0);
    out<<(quint16) 0 << quint8('R');
    out<<win.name<<win.value;
    out.device()->seek(0);
    out<<(quint16) (block.size()-sizeof(quint16));

    _socket->write(block);

    _socket->flush();
}

void PokerServerManager::readRequest(QTcpSocket* socket)
{
    _socket = socket;

    QDataStream in(_socket);

    in.setVersion(QDataStream::Qt_4_0);

    if (blockSize == 0) {
        if (socket->bytesAvailable() < (int)sizeof(quint16))
            return;

        in >> blockSize;
    }

    if (socket->bytesAvailable() < blockSize)
        return;

    quint8 requestType;
    in >> requestType;
    int id;
    switch(requestType)
    {
    case 'N':
    {
        QString name;
        in >> name;
        qDebug()<<"Request: new connection with NAME = " + name;
        clientInfo->setName(name);
        emit client2insert(clientInfo);
        break;
    }
    case 'R':
    {
        qDebug()<<"Request: check hand result";

        in >> id;

        Hand hand;
        int rank, suit;

        in >>rank>>suit;
        Card card(suit, rank, QIcon());
        hand.setCard1(card);

        in >>rank>>suit;
        card.set_rank(rank);
        card.set_suit(suit);
        hand.setCard2(card);

        in >>rank>>suit;
        card.set_rank(rank);
        card.set_suit(suit);
        hand.setCard3(card);

        in >>rank>>suit;
        card.set_rank(rank);
        card.set_suit(suit);
        hand.setCard4(card);

        in >>rank>>suit;
        card.set_rank(rank);
        card.set_suit(suit);
        hand.setCard5(card);

        qDebug()<<"Request sent by id = " + QString::number(id);

        checkResult(hand);
        break;
    }
    case 'M':
    {
        qDebug()<<"Request: update money";
        int money;
        in >> id;
        in >> money;
        qDebug()<<"Money = " + QString::number(money);
        clientInfo->setMoney(money);
        emit client2update(clientInfo);
        break;

    }
    case 'D':
    {
        qDebug()<<"Request: Disconnect";
        in >> id;
        clientDisconnection(clientInfo);
        break;
    }

    }

    blockSize = 0;
}

QByteArray PokerServerManager::sendResponse()
{
    QByteArray qba;
    return qba;
}
