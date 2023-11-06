#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_DlgPushButton_clicked()
{
    this->hide();
    emit this ->DtoM_signal();
}

void  Dialog::fromMainSig(void)
{
    this->show();
}
