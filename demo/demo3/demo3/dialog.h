#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    
private slots:
    void on_DlgPushButton_clicked();

private slots:
    void fromMainSig(void);

signals:
    void DtoM_signal(void);

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
