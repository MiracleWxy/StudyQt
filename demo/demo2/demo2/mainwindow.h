#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QDateTime>

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
    void RTTimeUpdate(void);

private:
    Ui::MainWindow *ui;

    QDateTime *MyDateTime;
    QTimer *MyTimer;
};

#endif // MAINWINDOW_H
