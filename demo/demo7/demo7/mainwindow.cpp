#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->radioButton->setText("ABC");
    ui->radioButton->setChecked(true);

    ui->comboBox->addItem("1200");
    ui->comboBox->addItem("2400");
    ui->comboBox->addItem("9600");
    ui->comboBox->addItem("19200");
    ui->comboBox->setCurrentIndex(3);

    QFont font;
    font.setPointSize(40);
    ui->comboBox->setFont(font);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if(ui->radioButton->isChecked())
    {
        ui->radioButton->setText("A is Seleced");
    }
    else
        ui->radioButton->setText("A");
}

void MainWindow::on_pushButton_2_clicked()
{
    QString str;

    if(ui->checkBox->isChecked())
    {
        str = "今天是阴天";
        ui->label->setText(str.fromUtf8(str.toAscii()));
    }
}
