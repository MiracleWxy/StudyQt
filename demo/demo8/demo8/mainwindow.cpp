#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    im = new SyszuxIM;
    QWSServer::setCurrentInputMethod(im);

    this->setWindowFlags(this->windowFlags() |
                                                Qt::FramelessWindowHint |
                                                Qt::WindowTitleHint);

    this->setWindowFlags(this->windowFlags() &
                                                ~Qt::WindowMinMaxButtonsHint);

    this->showMaximized();

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete im;
    delete ui;
}
