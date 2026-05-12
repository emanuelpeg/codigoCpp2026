#include "rotor.h"

Rotor::Rotor()
{

}

void Rotor::add(int a)
{
    int * aux = new int[this->cant + 1];
    for(int i = 0; i < this->cant; i++) {
        aux[i] = this->nros[i];
    }
    aux[this->cant] = a;
    this->cant++;
    delete [] this->nros;
    this->nros = aux;
}

int Rotor::next()
{
    int valor = this->nros[this->indice];
    this->indice = (this->indice + 1) % this->cant;
    /*if (this->indice + 1 >= this->cant) {
        this->indice = 0;
    } else {
        this->indice++;
    }*/
    return valor;
}

Rotor* Rotor::copy()
{
    Rotor* c = new Rotor();
    for(int i = 0; i < this->cant; i++) {
        c->add(this->nros[i]);
    }
    return c;
}
