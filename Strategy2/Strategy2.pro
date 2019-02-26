QT += core
QT -= gui

CONFIG += c++11

TARGET = Strategy2
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    Cat.cpp \
    DeadCat.cpp \
    HellSound.cpp \
    SimpleSound.cpp \
    VillageCat.cpp

HEADERS += \
    Cat.h \
    DeadCat.h \
    HellSound.h \
    ISoundable.h \
    NoSound.h \
    SimpleSound.h \
    VillageCat.h
