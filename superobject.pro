TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    value.cpp \
    object.cpp \
    test.cpp

QMAKE_CXXFLAGS += -std=c++0x

HEADERS += \
    value.h \
    object.h \
    test.h
