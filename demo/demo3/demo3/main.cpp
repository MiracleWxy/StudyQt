#include "mainwindow.h"
#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow w;
    Dialog d;

    QObject::connect(&w,SIGNAL(MtoD_signal()),&d,SLOT(fromMainSig()));
    QObject::connect(&d,SIGNAL(DtoM_signal()),&w,SLOT(fromDlgSig()));

    w.show();
    //d.show();
    
    return app.exec();
}
