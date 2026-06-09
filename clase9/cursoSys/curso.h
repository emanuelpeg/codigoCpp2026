#ifndef CURSO_H
#define CURSO_H
#include "alumno.h"
#include "vd.cpp"


class Curso
{
private:
    VD<Alumno> alumnos;
public:
    Curso();
    void add(Alumno * a);
    void listar();
    void pasarMedium(int i);
    void pasarPremium(int i);
    void eliminar(Alumno a);
};

#endif // CURSO_H
