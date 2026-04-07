#include <iostream>
#include "alumno.h"

using namespace std;

int main()
{
    Alumno unAlumno(47066767);

    unAlumno.setNota1(60);
    unAlumno.setNota2(80);
    unAlumno.setNota3(75);

    cout << unAlumno.getDni() << "  tiene promedio:  "
         << unAlumno.promedio() << endl;
    cout << unAlumno.getNota1();
    return 0;
}
