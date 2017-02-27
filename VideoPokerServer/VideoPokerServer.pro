#-------------------------------------------------
#
# Project created by QtCreator 2016-03-17T15:54:19
#
#-------------------------------------------------

QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = VideoPokerServer
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    card.cpp \
    deck.cpp \
    hand.cpp \
    tcpserver.cpp \
    serverthread.cpp \
    requestmanager.cpp \
    pokerservermanager.cpp \
    clientinfo.cpp \
    pokerclientinfo.cpp \
    pokerclientlist.cpp

HEADERS  += mainwindow.h \
    card.h \
    deck.h \
    hand.h \
    tcpserver.h \
    serverthread.h \
    requestmanager.h \
    pokerservermanager.h \
    clientinfo.h \
    pokerclientinfo.h \
    pokerclientlist.h

FORMS    += mainwindow.ui

OTHER_FILES +=

RESOURCES += \
    resources.qrc
