#ifndef INVITADO_H
#define INVITADO_H
#include "contrato.h"


class Invitado : public Contrato
{
public:
    Invitado();
    bool isOk(Alumno* a);
};

#endif // INVITADO_H
