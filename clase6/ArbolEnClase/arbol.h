#ifndef ARBOL_H
#define ARBOL_H
#include <iostream>

class Arbol
{
private:
    int dato;
    Arbol * izq = nullptr;
    Arbol * der = nullptr;
public:
    Arbol(int dato);
    Arbol* add(int d);
    bool existe(int d);

    friend std::ostream& operator<< (std::ostream &os,
                                      const Arbol &a);
    int getDato() const;
};

#endif // ARBOL_H
