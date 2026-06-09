#include "premium.h"
#include "alumno.h"

Premium::Premium()
{

}

bool Premium::isOk(Alumno *a)
{
    int acu = 0;
    for(int i = 0; i< 5; i++) {
        if (a->getNotas()[i] < 70) return false;
        acu += a->getNotas()[i];
    }
    return (acu/5) >=80;
}
