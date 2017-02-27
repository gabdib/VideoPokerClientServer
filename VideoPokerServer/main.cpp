#include <QApplication>
#include "mainwindow.h"
#include "tcpserver.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    TcpServer server;
    server.startServer();
    w.show();
    return a.exec();
}
