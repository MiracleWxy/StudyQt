#include "mainwindow.h"
#include <QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTextCodec *codec=QTextCodec::codecForName("UTF8");
    QTextCodec::setCodecForTr(codec);

    MainWindow w;
    w.show();
    
    return a.exec();
}
