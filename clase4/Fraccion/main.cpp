#include <iostream>
#include "fraccion.h"

using namespace std;

int main()
{
    Fraccion unaFraccion(2,3);
    Fraccion otraFraccion(1,2);
    Fraccion resultado = unaFraccion.suma(otraFraccion);
    Fraccion fraccionSimplificar(11,22);
    cout << resultado.getN() <<"/" << resultado.getD() << endl;
    cout << fraccionSimplificar.getN() <<"/" << fraccionSimplificar.getD() << endl;
    return 0;
}
