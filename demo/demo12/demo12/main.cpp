#include "mainwindow.h"
#include <QApplication>
#include <QFile>
#include <QIODevice>
#include <QByteArray>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    /*QFile file("abc");
    file.open(QIODevice::ReadWrite | QIODevice::Text);
    QByteArray byte("asdaca Hello Wrold 123");
    file.write(byte);
    file.close();*/

    //QFile file("abc");
    //file.open(QIODevice::ReadOnly);
    //qDebug() << file.read(1024) << endl;
    //qDebug()<<file.readLine(1024)<<endl;
    //qDebug()<<file.readAll()<<endl;

    QFile file("d");
    file.open(QIODevice::ReadWrite);
    QDataStream DStream(&file);
    int a =10;
    QString str = "ABC dads 123";
    DStream<<a<<str;


    file.close();

    MainWindow w;
    w.show();
    
    return app.exec();
}
