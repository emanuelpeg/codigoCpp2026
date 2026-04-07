#include "alumno.h"

int Alumno::getNota3() const
{
    return notas[2];
}

void Alumno::setNota3(int newNota3)
{
    notas[2] = newNota3;
}

int Alumno::getNota2() const
{
    return notas[1];
}

void Alumno::setNota2(int newNota2)
{
    notas[1] = newNota2;
}

int Alumno::getNota1() const
{
    return notas[0];
}

void Alumno::setNota1(int newNota1)
{
    notas[0] = newNota1;
}

long Alumno::getDni() const
{
    return dni;
}

Alumno::Alumno(long dni)
{
    this->notas[0]= 0;
    this->notas[1]= 0;
    this->notas[2]= 0;
    this->dni = dni;
}

double Alumno::promedio()
{
    double acu = 0;
    for(int i = 0; i < 3; i++) {
        acu += this->notas[i];
    }
    return acu / 3.0;
}
