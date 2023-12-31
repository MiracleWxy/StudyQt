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
    void on_AddPushButton_clicked();

    void on_DecPushButton_clicked();

private:
    Ui::MainWindow *ui;
    int Count;
};

#endif // MAINWINDOW_H
