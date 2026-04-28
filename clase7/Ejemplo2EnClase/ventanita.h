#ifndef VENTANITA_H
#define VENTANITA_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Ventanita; }
QT_END_NAMESPACE

class Ventanita : public QMainWindow
{
    Q_OBJECT

public:
    Ventanita(QWidget *parent = nullptr);
    ~Ventanita();

private slots:
    void on_spinBox_valueChanged(int arg1);

    void on_horizontalSlider_valueChanged(int value);

    void on_pushButton_clicked();

private:
    Ui::Ventanita *ui;
};
#endif // VENTANITA_H
