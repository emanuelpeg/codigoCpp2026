#ifndef CRONOMETRO_H
#define CRONOMETRO_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class Cronometro; }
QT_END_NAMESPACE

class Cronometro : public QMainWindow
{
    Q_OBJECT

public:
    Cronometro(QWidget *parent = nullptr);
    ~Cronometro();

private slots:
    void on_pushButton_clicked();
    void onTimer();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Cronometro *ui;
    QTimer* time = nullptr;
};
#endif // CRONOMETRO_H
