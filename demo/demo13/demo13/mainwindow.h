#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QtGui>
#include "syszuxim.h"
#include "syszuxpinyin.h"

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
    void on_RPushButton_clicked();

    void on_WPushButton_2_clicked();

private:
    Ui::MainWindow *ui;

    QWSInputMethod *im;
};

#endif // MAINWINDOW_H
