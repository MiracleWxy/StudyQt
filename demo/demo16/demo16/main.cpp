#include <QCoreApplication>
#include <QString>
#include <QtCore>
#include <QChar>
#include <QByteArray>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    //QString->char *
    QString str = "ABC123";
    QByteArray ba=str.toLocal8Bit();
    char *ch;
    ch=ba.data();
    qDebug()<<"ch:"<<ch<<endl;

    //char * -> QString
    QString str1;
    char ch1[]="ABCA123131";
    str1=QString::fromLocal8Bit(ch1);
    qDebug()<<"str1:"<<str1<<endl;


    return app.exec();
}
