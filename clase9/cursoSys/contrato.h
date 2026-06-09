#ifndef CONTRATO_H
#define CONTRATO_H

class Alumno;

class Contrato
{
public:
    Contrato();
    virtual bool isOk(Alumno* a) = 0;
};

#endif // CONTRATO_H
