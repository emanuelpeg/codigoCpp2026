#include "curso.h"
#include "medium.h"
#include "premium.h"
#include <iostream>

Curso::Curso()
{

}

void Curso::add(Alumno * a)
{
    this->alumnos.add(*a);
}

void Curso::listar()
{
    for(int i = 0; i < this->alumnos.getCantidad(); i++){
        std::cout << this->alumnos.get(i).getNombre() << " "
                  << this->alumnos.get(i).isOk()<< std::endl;
    }

}

void Curso::pasarMedium(int i)
{
    this->alumnos.getPoint(i)->setContrato(new Medium());
}

void Curso::pasarPremium(int i)
{
    this->alumnos.getPoint(i)->setContrato(new Premium());
}

void Curso::eliminar(Alumno a)
{
    this->alumnos.eliminar(a);
}
