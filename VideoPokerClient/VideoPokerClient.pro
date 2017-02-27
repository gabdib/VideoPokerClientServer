#-------------------------------------------------
#
# Project created by QtCreator 2016-03-17T15:54:19
#
#-------------------------------------------------

QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = VideoPokerClient
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    card.cpp \
    deck.cpp \
    hand.cpp \
    pokerform.cpp

HEADERS  += mainwindow.h \
    card.h \
    deck.h \
    hand.h \
    pokerform.h

FORMS    += mainwindow.ui \
    pokerform.ui

OTHER_FILES +=

RESOURCES += \
    resources.qrc
