#-------------------------------------------------
#
# Project created by QtCreator 2023-10-31T15:36:24
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = demo8
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h \
    syszuxpinyin.h \
    syszuxim.h

FORMS    += mainwindow.ui \
    syszuxpinyin.ui

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/lib/release/ -lsyszuxpinyin
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/lib/debug/ -lsyszuxpinyin
else:unix: LIBS += -L$$PWD/lib/ -lsyszuxpinyin

INCLUDEPATH += $$PWD/
DEPENDPATH += $$PWD/

RESOURCES += \
    qtr.qrc

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/lib/release/ -lsyszuxpinyin
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/lib/debug/ -lsyszuxpinyin
else:unix: LIBS += -L$$PWD/lib/ -lsyszuxpinyin

INCLUDEPATH += $$PWD/
DEPENDPATH += $$PWD/
