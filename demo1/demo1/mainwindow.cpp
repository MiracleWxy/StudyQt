#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    Count = 0;
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_AddPushButton_clicked()
{

    Count ++;
    Count %= 100;
    ui->NumLabel->setNum(Count);
}

void MainWindow::on_DecPushButton_clicked()
{
    if(Count>0)
           Count--;
    else Count=99;
    ui->NumLabel->setNum(Count);
}
