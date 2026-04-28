#include "ventanita.h"
#include "ui_ventanita.h"

Ventanita::Ventanita(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Ventanita)
{
    ui->setupUi(this);
}

Ventanita::~Ventanita()
{
    delete ui;
}


void Ventanita::on_spinBox_valueChanged(int arg1)
{
    this->ui->horizontalSlider->setValue(arg1);
}


void Ventanita::on_horizontalSlider_valueChanged(int value)
{
    this->ui->spinBox->setValue(value);
}


void Ventanita::on_pushButton_clicked()
{
    this->ui->pushButton->setText("Hola");
}

