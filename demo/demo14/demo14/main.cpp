#include <QCoreApplication>

#include <QSqlDatabase>
#include <QSqlQuery>

#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QSqlDatabase db=QSqlDatabase::addDatabase("SQLITE");
    db.setDatabaseName("abc.db");
    if(db.open())
    {
        qDebug()<<"Open abc.db failed"<<endl;
        return false;
    }
    qDebug()<<"Open abc.db succed"<<endl;

    QSqlQuery query;
    query.exec("create table phonebook(name,no)");
    query.exec("insert into phonebook values('abc','123')");
    query.exec("insert into phonebook values('dog','13579')");
    query.exec("insert into phonebook values('元神','11451411')");

    db.close();
    
    return a.exec();
}
