#include <iostream>
#include "optional.cpp"
#include "vectordinamico.cpp"

using namespace std;

int main()
{
    Optional<int> o(5);
    if (o.esVacio()) {
        cout << "Es Vacio" << endl;
    } else {
        cout << "Es " << o.getNro() << endl;
    }

    Optional o2(5.5);
    if (o2.esVacio()) {
        cout << "Es Vacio" << endl;
    } else {
        cout << "Es " << o2.getNro() << endl;
    }

    VectorDinamico<int> v;

    for(int i = 0; i < 20; i++){
        v.agregar(i);
    }

    for(int i = 0; i < v.getCant(); i++){
        cout << v.get(i) << " ";
    }


    return 0;
}
