QT += core
QT -= gui

CONFIG += c++11

TARGET = Strategy
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    compressor.cpp \
    rarcompression.cpp \
    zipcompression.cpp

HEADERS += \
    icompression.h \
    compressor.h \
    rarcompression.h \
    zipcompression.h
