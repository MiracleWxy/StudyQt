#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //QMessageBox::information(NULL,tr("确定"),tr("您确定吗?"),QMessageBox::Yes | QMessageBox::No,QMessageBox::Yes);
    //QMessageBox::information(NULL,tr("保存"),tr("数据已保存"),QMessageBox::Yes | QMessageBox::No,QMessageBox::No);
    //QMessageBox::critical(NULL,tr("abc"),tr("hello"),QMessageBox::Yes | QMessageBox::No,QMessageBox::No);
    //QMessageBox::warning(NULL,tr("保存"),tr("您确定覆盖吗？"),QMessageBox::Yes | QMessageBox::No,QMessageBox::No);
    //QMessageBox::question(NULL,tr("退出"),tr("您确定退出吗？"),QMessageBox::Yes | QMessageBox::No,QMessageBox::No);
    //QMessageBox::about(NULL,tr("版本"),tr("版本号:V1.0 2023111"));

    QMessageBox::about(NULL,tr("版本"),tr("版本号:<font color='red'>V1.0 20231111"));

}
