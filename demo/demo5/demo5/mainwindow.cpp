#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QIcon>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QString str="你好";
    ui->pushButton_1->setText(str.fromUtf8(str.toAscii()));

    QFont font;
    font.setFamily("思源黑体 CN");
    font.setBold(true);
    font.setPointSize(50);
    ui->pushButton_1->setFont(font);

    ui->pushButton_2->setText("ABC");
    ui->pushButton_3->setStyleSheet("QPushButton{color:red;font:40px}");

    ui->pushButton_4->setIconSize(QSize(200,200));
    ui->pushButton_4->setIcon(QIcon("./xin.jpg"));

}

MainWindow::~MainWindow()
{
    delete ui;
}
