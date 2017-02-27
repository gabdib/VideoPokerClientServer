#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QTcpSocket>
#include <QHostAddress>
#include <QByteArray>
#include <QMessageBox>

const QString HOST = QString("127.0.0.1");
const quint16 PORT = 1234;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    socket(new QTcpSocket(this)),
    blockSize(0)
{
    ui->setupUi(this);
    connect(ui->playMatchButton, SIGNAL(clicked()), this, SLOT(slotOpenConnection()));

    connect(socket, SIGNAL(readyRead()), this, SLOT(slotReadData()));
    connect(socket, SIGNAL(connected()),this, SLOT(slotSendPlayer()));
    connect(socket, SIGNAL(disconnected()),this, SLOT(disconnected()));
    connect(socket, SIGNAL(bytesWritten(qint64)),this, SLOT(bytesWritten(qint64)));

    typedef void (QAbstractSocket::*QAbstractSocketErrorSignal)(QAbstractSocket::SocketError);
    connect(socket, SIGNAL(error(QAbstractSocket::SocketError)) ,this, SLOT(displayError(QAbstractSocket::SocketError)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slotOpenConnection()
{
    socket->connectToHost(HOST, PORT);
}

void MainWindow::openPokerForm()
{
    pokerForm = new PokerForm(this,_id,name);

    connect(pokerForm, SIGNAL(checkHand(Hand)),this,SLOT(sendCheckResultRequest(Hand)));
    connect(pokerForm,SIGNAL(updateMoney(int)),this,SLOT(slotUpdateMoney(int)));
    pokerForm->setAttribute( Qt::WA_DeleteOnClose );
    connect(pokerForm, SIGNAL(destroyed()), this, SLOT(disconnected()) );

    pokerForm->show();
}

void MainWindow::setResultOnPokerForm(Win win)
{
    pokerForm->updateResult(win);
}

void MainWindow::slotSendPlayer()
{
    _id = socket->socketDescriptor();
    QString nameString = ui->playerName->text();
    name = nameString;

    QByteArray block;
    QDataStream out(&block, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_0);

    out<<(quint16) 0 << quint8('N')<< name;
    out.device()->seek(0);
    out<<(quint16) (block.size()-sizeof(quint16));

    socket->write(block);
    socket->flush();
}

void MainWindow::sendCheckResultRequest(Hand hand)
{
    QByteArray block;
    QDataStream out(&block, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_0);

    out<<(quint16) 0 << quint8('R') << _id;

    out<<hand.getCard1().get_rank()<<hand.getCard1().get_suit();
    out<<hand.getCard2().get_rank()<<hand.getCard2().get_suit();
    out<<hand.getCard3().get_rank()<<hand.getCard3().get_suit();
    out<<hand.getCard4().get_rank()<<hand.getCard4().get_suit();
    out<<hand.getCard5().get_rank()<<hand.getCard5().get_suit();
    out.device()->seek(0);
    out<<(quint16) (block.size()-sizeof(quint16));

    socket->write(block);
    socket->flush();
}

void MainWindow::slotUpdateMoney(int money)
{
    QByteArray block;
    QDataStream out(&block, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_0);

    out<<(quint16) 0 << quint8('M') << _id << money;
    out.device()->seek(0);
    out<<(quint16) (block.size()-sizeof(quint16));

    socket->write(block);
    socket->flush();
}


void MainWindow::slotReadData()
{
    qDebug()<<"Reading...";
    QDataStream in(socket);
    in.setVersion(QDataStream::Qt_4_0);
    qDebug()<<"Bytes: " + QString::number(socket->bytesAvailable());
    if (blockSize == 0)
    {
        if(socket->bytesAvailable() < (int)sizeof(quint16))
        {
            qDebug()<<"bytesAvailable < sizeof(quint16)";
            return;
        }
        in >> blockSize;
        qDebug()<<"Block Size = " + QString::number(blockSize);
    }

    if (socket->bytesAvailable() < blockSize)
    {
        qDebug()<<"bytesAvailable < blockSize";
        qDebug()<<"Block Size = " + QString::number(blockSize);
        return;
    }

    quint8 requestType;
    in >> requestType;

    if(requestType=='N')
    {
        int socketDescriptor;
        in >> socketDescriptor;
        _id = socketDescriptor;
        qDebug()<<"Response: new connection => ID : " + QString::number(_id);
        openPokerForm();
    }
    else if(requestType=='R')
    {
        qDebug()<<"Response: hand result";
        Win win;
        in >> win.name >> win.value;

        setResultOnPokerForm(win);
    }
    else
    {
        qDebug()<<"Other request or response";
    }

    blockSize = 0;
}

void MainWindow::disconnected()
{
    QByteArray block;
    QDataStream out(&block, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_0);

    out<<(quint16) 0 << quint8('D') << _id;
    out.device()->seek(0);
    out<<(quint16) (block.size()-sizeof(quint16));

    socket->write(block);
    socket->flush();

    qDebug()<<"Disconneted...";
}

void MainWindow::bytesWritten(qint64 bytes)
{
    qDebug() << bytes << "bytes written";
}

void MainWindow::displayError(QAbstractSocket::SocketError socketError)
{
    switch (socketError) {

    case QAbstractSocket::RemoteHostClosedError:
        break;

    case QAbstractSocket::HostNotFoundError:

        QMessageBox::information(this, tr("Poker Client"),
                                 tr("The host was not found. Please check the "
                                    "host name and port settings."));
        break;

    case QAbstractSocket::ConnectionRefusedError:

        QMessageBox::information(this, tr("Poker Client"),
                                 tr("The connection was refused by the peer. "
                                    "Make sure the Poker Server is running, "
                                    "and check that the host name and port "
                                    "settings are correct."));
        break;

    default:

        QMessageBox::information(this, tr("Poker Client"),
                                 tr("The following error occurred: %1.")
                                 .arg(socket->errorString()));
    }


}
