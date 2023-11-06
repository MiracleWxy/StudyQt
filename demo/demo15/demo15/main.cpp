#include <QCoreApplication>

#include <QtGlobal>
#include <QVariant>
#include <string.h>
#include <QDebug>

struct stu
{
   int age;
   char name[20];
};
Q_DECLARE_METATYPE(stu);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QVariant v;

    struct stu mystu;
    mystu.age=15;
    strcpy(mystu.name,"MiracleWxy");
    v.setValue(mystu);

    struct stu mystu_t;
    mystu_t=v.value<stu>();
    qDebug()<<"mystu_t.age: "<<mystu_t.age<<endl;
    qDebug()<<"mystu_t.name: "<<mystu_t.name<<endl;

    
    return a.exec();
}
