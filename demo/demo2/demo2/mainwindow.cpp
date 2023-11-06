#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    MyDateTime=new QDateTime(QDateTime::currentDateTime());
    MyTimer=new QTimer(this);
    connect(this->MyTimer,
            SIGNAL(timeout()),
            this,
            SLOT(RTTimeUpdate()) );

    this->RTTimeUpdate();
    MyTimer->start(1000);
}

MainWindow::~MainWindow()
{
    delete MyTimer;
    delete MyDateTime;
    delete ui;
}

void MainWindow::RTTimeUpdate(void)
{
    QString Str;
    Str=MyDateTime->currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    ui->RTTimeLabel->setText(Str);
}

