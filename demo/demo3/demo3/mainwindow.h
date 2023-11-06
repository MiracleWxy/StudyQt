#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_MWinpushButton_clicked();

private slots:
    void fromDlgSig(void);

signals:
    void MtoD_signal(void);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
