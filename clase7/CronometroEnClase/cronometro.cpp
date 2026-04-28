#include "cronometro.h"
#include "ui_cronometro.h"
#include <QMessageBox>


Cronometro::Cronometro(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Cronometro)
{
    ui->setupUi(this);
    this->time = new QTimer(this);
    QObject::connect(this->time,
                     SIGNAL(timeout()),
                     this,
                     SLOT(onTimer()));
    this->time->setInterval(1000);
}

Cronometro::~Cronometro()
{
    delete ui;
}


void Cronometro::on_pushButton_clicked()
{
    auto txt = this->ui->pushButton->text();
    if (txt == "Stop") {
        this->ui->pushButton->setText("Play");
        this->time->stop();
    } else {
        this->ui->pushButton->setText("Stop");
        this->time->start();
    }
}

void Cronometro::onTimer()
{
    this->ui->lcdNumber->
            display(this->ui->lcdNumber->intValue()+1);
}


void Cronometro::on_pushButton_2_clicked()
{
    this->ui->lcdNumber->
            display(0);
}


void Cronometro::on_pushButton_3_clicked()
{
    if (this->ui->lineEdit->text() != "0"
            && this->ui->lineEdit->text().toInt() == 0) {

        QMessageBox::critical(this,"Error", "Mete un nro");
        return;
    }
    int a = this->ui->lineEdit->text().toInt();
    int b = this->ui->lineEdit_2->text().toInt();
    this->ui->label_2->setText(" = " + QString::number(a + b));
}

