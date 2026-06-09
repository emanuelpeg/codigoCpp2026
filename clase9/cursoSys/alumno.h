#ifndef ALUMNO_H
#define ALUMNO_H
#include "contrato.h"

class Alumno
{
private:
    int dni;
    char * nombre;
    int notas[5];
    int cant = 0;
    Contrato* contrato;
public:
    Alumno();
    Alumno(int dni);
    bool isOk();
    int getDni() const;
    char *getNombre() const;
    void setNombre(char *newNombre);
    void addNota(int nota);
    int * getNotas();
    Contrato *getContrato() const;
    void setContrato(Contrato *newContrato);
    bool operator==(Alumno a);
};

#endif // ALUMNO_H
