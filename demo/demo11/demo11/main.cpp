#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include <QMovie>
#include <QtCore>
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QMovie *movie=new QMovie();
    QLabel *label;
    label=new QLabel("",0);
    label->setMovie(movie);
    label->setGeometry(0,0,800,480);
    label->setScaledContents(1);
    movie->start();
    label->show();

    QTime   t;
    t.start();
    while(t.elapsed()<5000)
    {
        QApplication::processEvents();
    }
    label->close();

    MainWindow w;
    w.show();
    
    return a.exec();
}
