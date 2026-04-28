#include "ventanita.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Ventanita w;
    w.show();
    return a.exec();
}
