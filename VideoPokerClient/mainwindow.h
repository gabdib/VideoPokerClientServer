#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QThread>
#include <QVector>
#include <QTcpSocket>
#include "deck.h"
#include "card.h"
#include "hand.h"
#include "pokerform.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setResultOnPokerForm(Win win);
    void openPokerForm();
signals:
    void checkHand(Hand);

private:
    Ui::MainWindow *ui;

    int _id;
    QString name;
    PokerForm* pokerForm;
    QTcpSocket* socket;
    quint16 blockSize;

public slots:
    void sendCheckResultRequest(Hand hand);
    void slotOpenConnection();
    void slotSendPlayer();
    void slotUpdateMoney(int money);
    void slotReadData();    
    void bytesWritten(qint64 id);
    void disconnected();


private slots:
    void displayError(QAbstractSocket::SocketError socketError);

};

#endif // MAINWINDOW_H
