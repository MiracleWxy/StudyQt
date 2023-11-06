#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->lineEdit->setPlaceholderText("Please input your name...");
    ui->lineEdit->setMaxLength(10);
    ui->lineEdit->setFrame(1);

    QFont font;
    font.setFamily("思源黑体 CN");
    font.setBold(1);
    font.setPointSize(30);
    ui->lineEdit->setFont(font);

    //ui->lineEdit->setEchoMode(QLineEdit::NoEcho);
    ui->lineEdit->setEchoMode(QLineEdit::Password);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString str;
    str=ui->lineEdit->text();
    ui->label->setText(str);
}
