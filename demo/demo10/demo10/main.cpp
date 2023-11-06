#include "mainwindow.h"
#include <QApplication>
#include <QPixmap>
#include <QSplashScreen>
#include <QDateTime>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QPixmap SView("yuanshen.jpg");
    QSplashScreen SPSCreen;
    SPSCreen.setPixmap(SView);
    SPSCreen.show();

    app.processEvents();
    QDateTime n= QDateTime::currentDateTime();
    QDateTime now;
    do
    {
        now=QDateTime::currentDateTime();
    }
    while(n.secsTo(now)<=10);


    MainWindow w;
    w.show();
    
    SPSCreen.finish(&w);

    return app.exec();
}
