#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_MWinpushButton_clicked()
{
    this->hide();
    emit this -> MtoD_signal();
}

void  MainWindow::fromDlgSig(void)
{
    this->show();
}
