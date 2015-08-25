#-------------------------------------------------
#
# Project created by QtCreator 2015-08-25T23:07:54
#
#-------------------------------------------------

QT       -= gui

TARGET = Evaluador
TEMPLATE = lib

DESTDIR = ../libs

DEFINES += EVALUADOR_LIBRARY

SOURCES += evaluador.cpp

HEADERS += evaluador.h\
        evaluador_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
