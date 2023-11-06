#-------------------------------------------------
#
# Project created by QtCreator 2023-11-02T10:41:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = demo13
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h \
    ../demo13-build-ARM-Debug/syszuxim.h \
    ../demo13-build-ARM-Debug/syszuxpinyin.h

FORMS    += mainwindow.ui \
    ../demo13-build-ARM-Debug/syszuxpinyin.ui

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../demo13-build-ARM-Debug/lib/release/ -lsyszuxpinyin
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../demo13-build-ARM-Debug/lib/debug/ -lsyszuxpinyin
else:unix: LIBS += -L$$PWD/../demo13-build-ARM-Debug/lib/ -lsyszuxpinyin

INCLUDEPATH += $$PWD/../demo13-build-ARM-Debug
DEPENDPATH += $$PWD/../demo13-build-ARM-Debug

RESOURCES += \
    ../demo13-build-ARM-Debug/qrt.qrc
