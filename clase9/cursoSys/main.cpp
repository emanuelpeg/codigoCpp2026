#include <iostream>
#include "alumno.h"
#include "contrato.h"
#include "invitado.h"
#include "medium.h"
#include "curso.h"

using namespace std;

int main()
{
    Alumno a(56546);
    a.setNombre("Juan");
    a.setContrato(new Medium());
    a.addNota(59);
    a.addNota(89);
    a.addNota(99);

    Alumno * b = new Alumno(56546);
    b->setNombre("Pedro");
    b->setContrato(new Invitado());
    b->addNota(59);
    b->addNota(100);
    b->addNota(100);

    Curso c;
    c.add(&a);
    c.add(b);
    c.listar();
    c.pasarMedium(1);
    c.listar();
    c.eliminar(a);

    return 0;
}
