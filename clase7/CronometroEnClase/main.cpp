#include "cronometro.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Cronometro w;
    w.show();
    return a.exec();
}
