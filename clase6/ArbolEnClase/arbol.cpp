#include "arbol.h"

int Arbol::getDato() const
{
    return dato;
}

Arbol::Arbol(int dato)
{
    this->dato = dato;
}

Arbol* Arbol::add(int d)
{
    if (this->dato > d) {
        if (this->izq == nullptr) {
            this->izq = new Arbol(d);
        } else {
            this->izq->add(d);
        }
    } else {
        if (this->der == nullptr) {
            this->der = new Arbol(d);
        } else {
            this->der->add(d);
        }
    }
    return this;
}

bool Arbol::existe(int d)
{
    if (this->dato == d) {
        return true;
    } else {
        if (this->dato > d) {
            if (this->izq == nullptr) {
                return false;
            } else {
                return this->izq->existe(d);
            }
        } else  {
            if (this->der == nullptr) {
                return false;
            } else {
                return this->der->existe(d);
            }
        }
    }
}

std::ostream& operator<< (std::ostream &os, const Arbol &a) {
    if (a.izq != nullptr)
        os << *(a.izq);
    os << a.getDato();
    if (a.der != nullptr)
        os << *(a.der);
    return os;
}
