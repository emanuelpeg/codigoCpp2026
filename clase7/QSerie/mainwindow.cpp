#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->juego = new Juego();
    this->refrescar();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    if (this->juego->estaBien(this->ui->spinBox->value())) {
        QMessageBox::information(this, "Ganaste", "Ganaste :D");
    } else {
        QMessageBox::critical(this, "Perdiste", "Perdiste :(");
    }
    this->refrescar();
}

void MainWindow::refrescar() {
    this->ui->label->setText(
                QString::number(this->juego->getNro1()));
    this->ui->label_2->setText(
                QString::number(this->juego->getNro2()));
    this->ui->label_3->setText(
                QString::number(this->juego->getNro4()));
    this->ui->label_4->setText(
                QString::number(this->juego->getPuntos()));
    this->ui->spinBox->setValue(0);

}
