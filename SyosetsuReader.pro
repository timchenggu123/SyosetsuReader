#-------------------------------------------------
#
# Project created by QtCreator 2019-05-22T15:30:39
#
#-------------------------------------------------

QT       += core gui
QT       += svg
CONFIG += QT
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SyosetsuReader
TEMPLATE = app

include(../free/common/common.pri)

LIBS  += -L../free/build-common-Kobo-Release -lcommon

SOURCES += main.cpp\
        mainwidget.cpp

HEADERS  += mainwidget.h

FORMS    += mainwidget.ui
