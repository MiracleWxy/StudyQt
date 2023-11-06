#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /*ui->label_1->setAlignment(Qt::AlignLeft);
    ui->label_2->setAlignment(Qt::AlignRight);
    ui->label_3->setAlignment(Qt::AlignTop);
    ui->label_4->setAlignment(Qt::AlignBottom);
    ui->label_5->setAlignment(Qt::AlignHCenter);
    ui->label_6->setAlignment(Qt::AlignVCenter);
    ui->label_7->setAlignment(Qt::AlignLeft | Qt::AlignTop);*/

    /*ui->label_1->setNum(666);
    ui->label_2->setNum(3.14);*/

    /*ui->label_1->setStyleSheet("background-color: rgb(255,0,0)");
    ui->label_2->setStyleSheet("background-color: rgb(0,255,0)");
    ui->label_3->setStyleSheet("background-color: rgb(0,0,255)");*/

    QString str1="ABC123";
    ui->label_2->setText(str1);

    char a[]="DEF321";
    ui->label_3->setText(QLatin1String(a));

    char b[]="河南师范大学";
    ui->label_3->setText(QString::fromUtf8(b));

}

MainWindow::~MainWindow()
{
    delete ui;
}
