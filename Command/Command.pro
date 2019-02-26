QT += core
QT -= gui

CONFIG += c++11

TARGET = Command
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    saydog.cpp \
    saycat.cpp \
    sounder.cpp

HEADERS += \
    icommand.h \
    saydog.h \
    saycat.h \
    sounder.h
