#include "alumno.h"
#include "string.h"

int Alumno::getDni() const
{
    return dni;
}

char *Alumno::getNombre() const
{
    return nombre;
}

void Alumno::setNombre(char *newNombre)
{
    int cantc = strlen(newNombre);
    nombre = new char[cantc];
    strcpy(this->nombre,newNombre);
}

void Alumno::addNota(int nota)
{
    this->notas[this->cant] = nota;
    this->cant++;
}

int *Alumno::getNotas()
{
    return this->notas;
}

Contrato *Alumno::getContrato() const
{
    return contrato;
}

void Alumno::setContrato(Contrato *newContrato)
{
    contrato = newContrato;
}

bool Alumno::operator==(Alumno a)
{
    return this->dni == a.getDni();
}

Alumno::Alumno()
{

}

Alumno::Alumno(int dni)
{
    this->dni = dni;
}

bool Alumno::isOk()
{
    return this->contrato->isOk(this);
}
