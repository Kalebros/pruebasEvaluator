#-------------------------------------------------
#
# Project created by QtCreator 2015-08-25T23:08:52
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = appTest
TEMPLATE = app

INCLUDEPATH +=..

LIBS += -L../libs -lEvaluador

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
