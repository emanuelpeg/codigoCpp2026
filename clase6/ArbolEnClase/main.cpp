#include <iostream>
#include "arbol.h"

using namespace std;

int main()
{
    Arbol a(8);
    a.add(3)
    ->add(5)
    ->add(2)
    ->add(10)
    ->add(9)
    ->add(7);
    cout << a << endl;
    return 0;
}
