#-------------------------------------------------
#
# Project created by QtCreator 2022-05-31T09:58:07
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = formulaire_essai
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h \
    bddconnect.h

FORMS    += mainwindow.ui
