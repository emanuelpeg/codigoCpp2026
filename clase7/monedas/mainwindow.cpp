#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <time.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->r1 = new Rotor();
    for (int i = 0; i < 6; i++){
        this->r1->add(i);
    }
    this->r2 = this->r1->copy();
    this->r3 = this->r1->copy();
    this->t1 = new QTimer(this);
    this->t2 = new QTimer(this);
    this->t3 = new QTimer(this);

    QObject::connect(this->t1,
                     SIGNAL(timeout()),
                     this,
                     SLOT(onTimer1()));
    QObject::connect(this->t2,
                     SIGNAL(timeout()),
                     this,
                     SLOT(onTimer2()));
    QObject::connect(this->t3,
                     SIGNAL(timeout()),
                     this,
                     SLOT(onTimer3()));
    srand(time(0));
    this->t1->setInterval(rand() % 50 + 204);
    this->t2->setInterval(rand() % 50 + 104);
    this->t3->setInterval(rand() % 50 + 104);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onTimer1()
{
    this->ui->label->setText(
                QString::number(this->r1->next()));
    this->t1->setInterval(rand() % 20 + this->t1->interval()+10);

    this->verificar();
}

void MainWindow::onTimer2()
{
    this->ui->label_2->setText(
                QString::number(this->r2->next()));
    this->t2->setInterval(rand() % 20 + this->t2->interval()+10);
    this->verificar();
}

void MainWindow::onTimer3()
{
    this->ui->label_3->setText(
                QString::number(this->r3->next()));
    this->t3->setInterval(rand() % 20 + this->t3->interval()+10);
    this->verificar();
}

void MainWindow::on_pushButton_clicked()
{
    this->t1->start();
    this->t2->start();
    this->t3->start();
}

void MainWindow::verificar()
{
    if (t1->interval() >= 500 &&
            t2->interval() >= 500 &&
            t3->interval() >= 500) {
        t1->stop();
        t2->stop();
        t3->stop();
        int r = r1->next();
        if (r == r2->next() &&
               r == r3->next()) {
            QMessageBox::information(this, "Ganaste", "Ganaste");
        } else {
            QMessageBox::information(this, "Perdiste", "Perdiste");
        }
    }
}

