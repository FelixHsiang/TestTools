#-------------------------------------------------
#
# Project created by QtCreator 2014-03-13T14:46:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TestTools
TEMPLATE = app


SOURCES += main.cpp\
        maindialog.cpp \
    setuprequest.cpp \
    requesturl.cpp \
    setupheaderexteneion.cpp \
    setuptransport.cpp

HEADERS  += maindialog.h \
    ../build-TestTools-VC-Debug/ui_maindialog.h \
    setuprequest.h \
    requesturl.h \
    setupheaderexteneion.h \
    setuptransport.h

FORMS    += maindialog.ui \
    setuprequest.ui \
    requesturl.ui \
    setupheaderexteneion.ui \
    setuptransport.ui
