QT += core
QT -= gui

CONFIG += c++11

TARGET = Observer
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    callNotifier.cpp \
    NewsAggregator.cpp \
    smsNotifier.cpp

HEADERS += \
    callNotifier.h \
    IObserver.h \
    ISubject.h \
    NewsAggregator.h \
    smsNotifier.h
