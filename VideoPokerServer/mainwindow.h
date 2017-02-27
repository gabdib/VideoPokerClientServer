#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QThread>
#include <QVector>
#include "deck.h"
#include "card.h"
#include "hand.h"
#include "pokerclientinfo.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void loadPlayer(ClientInfo *clientInfo);
    int getPlayerTableRow(int index);

signals:
    void checkHand(Hand);

private:

    Ui::MainWindow *ui;
    int id;

public slots:
    void slotUpdateMoney(ClientInfo* clientInfo);
    void slotRemovePlayer(ClientInfo* clientInfo);
    void slotAddPlayer(ClientInfo* clientInfo);

};

#endif // MAINWINDOW_H
