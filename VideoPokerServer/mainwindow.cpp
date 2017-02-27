#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    id = 0;

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadPlayer(ClientInfo* clientInfo)
{
    PokerClientInfo* pokerClient = (PokerClientInfo*) clientInfo;
    QTableWidgetItem* nameItem = new QTableWidgetItem(pokerClient->getName());
    QTableWidgetItem* idItem = new QTableWidgetItem(QString::number(pokerClient->getId()));
    ui->playersTable->insertRow(0);
    ui->playersTable->setItem(0,0,idItem);
    ui->playersTable->setItem(0,1,nameItem);
}

void MainWindow::slotUpdateMoney(ClientInfo* clientInfo)
{
    PokerClientInfo* pokerClient = (PokerClientInfo*) clientInfo;
    QTableWidgetItem* moneyItem = new QTableWidgetItem(QString::number(pokerClient->getMoney()));
    ui->playersTable->setItem(getPlayerTableRow(id),2,moneyItem);
}

int MainWindow::getPlayerTableRow(int index)
{
    int rowCount = ui->playersTable->rowCount();

    for(int i=0;i<rowCount;i++)
    {
        if(QString::number(index)==ui->playersTable->item(i,0)->text())
        {
            return i;
        }
    }
    return 0;
}

void MainWindow::slotRemovePlayer(ClientInfo* clientInfo)
{
    int row = getPlayerTableRow(clientInfo->getId());
    ui->playersTable->removeRow(getPlayerTableRow(row));
//    pokerClients.removePlayer(row);
}

void MainWindow::slotAddPlayer(ClientInfo* clientInfo)
{
    PokerClientInfo* pokerClient = (PokerClientInfo*) clientInfo;
    //pokerClients.insert(pokerClient);
    QTableWidgetItem* idItem = new QTableWidgetItem(QString::number(pokerClient->getId()));
    QTableWidgetItem* nameItem = new QTableWidgetItem(pokerClient->getName());
    ui->playersTable->insertRow(0);
    ui->playersTable->setItem(0,0,idItem);
    ui->playersTable->setItem(0,1,nameItem);
}
