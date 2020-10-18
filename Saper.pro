#-------------------------------------------------
#
# Project created by QtCreator 2020-10-18T13:36:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Saper
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    celltable.cpp \
    cell.cpp \


HEADERS  += mainwindow.h \
    celltable.h \
    cell.h \


FORMS    += mainwindow.ui

CONFIG += C++11
