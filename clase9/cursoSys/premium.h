#ifndef PREMIUM_H
#define PREMIUM_H
#include "contrato.h"

class Premium : public Contrato
{
public:
    Premium();
    bool isOk(Alumno* a);
};

#endif // PREMIUM_H
