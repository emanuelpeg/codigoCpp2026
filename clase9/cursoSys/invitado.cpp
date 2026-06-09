#include "invitado.h"
#include "alumno.h"

Invitado::Invitado()
{

}

bool Invitado::isOk(Alumno *a)
{
    return a->getNotas()[0] >= 60;
}
