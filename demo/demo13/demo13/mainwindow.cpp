#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFile>
#include <QIODevice>
#include <QByteArray>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    im = new SyszuxIM;
    QWSServer::setCurrentInputMethod(im);

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete im;

    delete ui;
}

void MainWindow::on_RPushButton_clicked()
{
    QFile file("abc");
    file.open(QIODevice::ReadWrite | QIODevice::Text);
    QByteArray BData = file.readAll();
    QString str = QString::fromLocal8Bit(BData);

    ui->label->setText(str);
    file.close();

    file.open(QFile::WriteOnly|QFile::Truncate);
    file.close();
}

void MainWindow::on_WPushButton_2_clicked()
{
    QFile file("abc");
    file.open(QIODevice::ReadWrite | QIODevice::Text);
    QString str= ui->lineEdit->text();
    QByteArray BData=str.toLocal8Bit();
    file.write(BData);

    file.close();

}
