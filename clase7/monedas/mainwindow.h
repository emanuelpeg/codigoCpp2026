#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "rotor.h"
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onTimer1();
    void onTimer2();
    void onTimer3();
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Rotor* r1;
    Rotor* r2;
    Rotor* r3;
    QTimer* t1;
    QTimer* t2;
    QTimer* t3;
    void verificar();
};
#endif // MAINWINDOW_H
