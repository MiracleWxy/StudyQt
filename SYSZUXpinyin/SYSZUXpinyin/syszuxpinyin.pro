TEMPLATE = lib
HEADERS += syszuxpinyin.h \
    syszuxim.h
SOURCES += syszuxpinyin.cpp \
    syszuxim.cpp
FORMS += syszuxpinyin.ui
RESOURCES += syszuxpinyin.qrc

unix:!macx: LIBS += -L$$PWD/../../../../../../../usr/local/Trolltech/tslib/lib/ -lts

INCLUDEPATH += $$PWD/../../../../../../../usr/local/Trolltech/tslib/include
DEPENDPATH += $$PWD/../../../../../../../usr/local/Trolltech/tslib/include
