#ifndef MEDIUM_H
#define MEDIUM_H
#include "contrato.h"

class Medium : public Contrato
{
public:
    Medium();
    bool isOk(Alumno* a);
};

#endif // MEDIUM_H
