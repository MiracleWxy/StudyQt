#############################################################################
# Makefile for building: demo13
# Generated by qmake (2.01a) (Qt 4.8.5) on: Thu Nov 2 11:34:27 2023
# Project:  ../demo13/demo13.pro
# Template: app
# Command: /usr/local/Trolltech/Qt-4.8.5/bin/qmake -spec /usr/local/Trolltech/Qt-4.8.5/mkspecs/linux-g++ CONFIG+=debug CONFIG+=declarative_debug -o Makefile ../demo13/demo13.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/local/Trolltech/Qt-4.8.5/mkspecs/linux-g++ -I../demo13 -I/usr/local/Trolltech/Qt-4.8.5/include/QtCore -I/usr/local/Trolltech/Qt-4.8.5/include/QtGui -I/usr/local/Trolltech/Qt-4.8.5/include -I../demo13-build-ARM-Debug -I. -I. -I../demo13 -I.
LINK          = g++
LFLAGS        = -Wl,-rpath,/usr/local/Trolltech/Qt-4.8.5/lib
LIBS          = $(SUBLIBS)  -L/usr/local/Trolltech/Qt-4.8.5/lib -L/home/miraclewxy/qtwork/demo/demo13/demo13/../demo13-build-ARM-Debug/lib/ -lsyszuxpinyin -lQtGui -L/usr/local/Trolltech/Qt-4.8.5/lib -L/usr/X11R6/lib -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/local/Trolltech/Qt-4.8.5/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = ../demo13/main.cpp \
		../demo13/mainwindow.cpp moc_mainwindow.cpp \
		moc_syszuxim.cpp \
		moc_syszuxpinyin.cpp \
		qrc_qrt.cpp
OBJECTS       = main.o \
		mainwindow.o \
		moc_mainwindow.o \
		moc_syszuxim.o \
		moc_syszuxpinyin.o \
		qrc_qrt.o
DIST          = /usr/local/Trolltech/Qt-4.8.5/mkspecs/common/unix.conf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/common/linux.conf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/common/gcc-base.conf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/common/gcc-base-unix.conf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/common/g++-base.conf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/common/g++-unix.conf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/qconfig.pri \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/qt_functions.prf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/qt_config.prf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/exclusive_builds.prf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/default_pre.prf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/debug.prf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/default_post.prf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/declarative_debug.prf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/shared.prf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/warn_on.prf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/qt.prf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/unix/thread.prf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/moc.prf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/resources.prf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/uic.prf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/yacc.prf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/lex.prf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/include_source_dir.prf \
		../demo13/demo13.pro
QMAKE_TARGET  = demo13
DESTDIR       = 
TARGET        = demo13

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_mainwindow.h ui_syszuxpinyin.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)
	{ test -n "$(DESTDIR)" && DESTDIR="$(DESTDIR)" || DESTDIR=.; } && test $$(gdb --version | sed -e 's,[^0-9]\+\([0-9]\)\.\([0-9]\).*,\1\2,;q') -gt 72 && gdb --nx --batch --quiet -ex 'set confirm off' -ex "save gdb-index $$DESTDIR" -ex quit '$(TARGET)' && test -f $(TARGET).gdb-index && objcopy --add-section '.gdb_index=$(TARGET).gdb-index' --set-section-flags '.gdb_index=readonly' '$(TARGET)' '$(TARGET)' && rm -f $(TARGET).gdb-index || true

Makefile: ../demo13/demo13.pro  /usr/local/Trolltech/Qt-4.8.5/mkspecs/linux-g++/qmake.conf /usr/local/Trolltech/Qt-4.8.5/mkspecs/common/unix.conf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/common/linux.conf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/common/gcc-base.conf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/common/gcc-base-unix.conf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/common/g++-base.conf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/common/g++-unix.conf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/qconfig.pri \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/qt_functions.prf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/qt_config.prf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/exclusive_builds.prf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/default_pre.prf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/debug.prf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/default_post.prf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/declarative_debug.prf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/shared.prf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/warn_on.prf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/qt.prf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/unix/thread.prf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/moc.prf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/resources.prf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/uic.prf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/yacc.prf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/lex.prf \
		/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/include_source_dir.prf \
		/usr/local/Trolltech/Qt-4.8.5/lib/libQtGui.prl \
		/usr/local/Trolltech/Qt-4.8.5/lib/libQtCore.prl
	$(QMAKE) -spec /usr/local/Trolltech/Qt-4.8.5/mkspecs/linux-g++ CONFIG+=debug CONFIG+=declarative_debug -o Makefile ../demo13/demo13.pro
/usr/local/Trolltech/Qt-4.8.5/mkspecs/common/unix.conf:
/usr/local/Trolltech/Qt-4.8.5/mkspecs/common/linux.conf:
/usr/local/Trolltech/Qt-4.8.5/mkspecs/common/gcc-base.conf:
/usr/local/Trolltech/Qt-4.8.5/mkspecs/common/gcc-base-unix.conf:
/usr/local/Trolltech/Qt-4.8.5/mkspecs/common/g++-base.conf:
/usr/local/Trolltech/Qt-4.8.5/mkspecs/common/g++-unix.conf:
/usr/local/Trolltech/Qt-4.8.5/mkspecs/qconfig.pri:
/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/qt_functions.prf:
/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/qt_config.prf:
/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/exclusive_builds.prf:
/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/default_pre.prf:
/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/debug.prf:
/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/default_post.prf:
/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/declarative_debug.prf:
/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/shared.prf:
/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/warn_on.prf:
/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/qt.prf:
/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/unix/thread.prf:
/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/moc.prf:
/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/resources.prf:
/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/uic.prf:
/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/yacc.prf:
/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/lex.prf:
/usr/local/Trolltech/Qt-4.8.5/mkspecs/features/include_source_dir.prf:
/usr/local/Trolltech/Qt-4.8.5/lib/libQtGui.prl:
/usr/local/Trolltech/Qt-4.8.5/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /usr/local/Trolltech/Qt-4.8.5/mkspecs/linux-g++ CONFIG+=debug CONFIG+=declarative_debug -o Makefile ../demo13/demo13.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/demo131.0.0 || $(MKDIR) .tmp/demo131.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/demo131.0.0/ && $(COPY_FILE) --parents ../demo13/mainwindow.h ../demo13-build-ARM-Debug/syszuxim.h ../demo13-build-ARM-Debug/syszuxpinyin.h .tmp/demo131.0.0/ && $(COPY_FILE) --parents ../demo13-build-ARM-Debug/qrt.qrc .tmp/demo131.0.0/ && $(COPY_FILE) --parents ../demo13/main.cpp ../demo13/mainwindow.cpp .tmp/demo131.0.0/ && $(COPY_FILE) --parents ../demo13/mainwindow.ui ../demo13-build-ARM-Debug/syszuxpinyin.ui .tmp/demo131.0.0/ && (cd `dirname .tmp/demo131.0.0` && $(TAR) demo131.0.0.tar demo131.0.0 && $(COMPRESS) demo131.0.0.tar) && $(MOVE) `dirname .tmp/demo131.0.0`/demo131.0.0.tar.gz . && $(DEL_FILE) -r .tmp/demo131.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_mainwindow.cpp moc_syszuxim.cpp moc_syszuxpinyin.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_mainwindow.cpp moc_syszuxim.cpp moc_syszuxpinyin.cpp
moc_mainwindow.cpp: ../demo13/mainwindow.h
	/usr/local/Trolltech/Qt-4.8.5/bin/moc $(DEFINES) $(INCPATH) ../demo13/mainwindow.h -o moc_mainwindow.cpp

moc_syszuxim.cpp: ../demo13-build-ARM-Debug/syszuxim.h
	/usr/local/Trolltech/Qt-4.8.5/bin/moc $(DEFINES) $(INCPATH) ../demo13-build-ARM-Debug/syszuxim.h -o moc_syszuxim.cpp

moc_syszuxpinyin.cpp: ui_syszuxpinyin.h \
		../demo13-build-ARM-Debug/syszuxpinyin.h
	/usr/local/Trolltech/Qt-4.8.5/bin/moc $(DEFINES) $(INCPATH) ../demo13-build-ARM-Debug/syszuxpinyin.h -o moc_syszuxpinyin.cpp

compiler_rcc_make_all: qrc_qrt.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_qrt.cpp
qrc_qrt.cpp: ../demo13-build-ARM-Debug/qrt.qrc \
		../demo13-build-ARM-Debug/syszuxpinyin
	/usr/local/Trolltech/Qt-4.8.5/bin/rcc -name qrt ../demo13-build-ARM-Debug/qrt.qrc -o qrc_qrt.cpp

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_mainwindow.h ui_syszuxpinyin.h
compiler_uic_clean:
	-$(DEL_FILE) ui_mainwindow.h ui_syszuxpinyin.h
ui_mainwindow.h: ../demo13/mainwindow.ui
	/usr/local/Trolltech/Qt-4.8.5/bin/uic ../demo13/mainwindow.ui -o ui_mainwindow.h

ui_syszuxpinyin.h: ../demo13-build-ARM-Debug/syszuxpinyin.ui
	/usr/local/Trolltech/Qt-4.8.5/bin/uic ../demo13-build-ARM-Debug/syszuxpinyin.ui -o ui_syszuxpinyin.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean compiler_uic_clean 

####### Compile

main.o: ../demo13/main.cpp ../demo13/mainwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o ../demo13/main.cpp

mainwindow.o: ../demo13/mainwindow.cpp ../demo13/mainwindow.h \
		../demo13-build-ARM-Debug/ui_mainwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o ../demo13/mainwindow.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

moc_syszuxim.o: moc_syszuxim.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_syszuxim.o moc_syszuxim.cpp

moc_syszuxpinyin.o: moc_syszuxpinyin.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_syszuxpinyin.o moc_syszuxpinyin.cpp

qrc_qrt.o: qrc_qrt.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qrc_qrt.o qrc_qrt.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

