#include "medium.h"
#include "alumno.h"

Medium::Medium()
{

}

bool Medium::isOk(Alumno *a)
{
    return ((a->getNotas()[0] +
            a->getNotas()[1] +
            a->getNotas()[2])/3) >= 70;
}
