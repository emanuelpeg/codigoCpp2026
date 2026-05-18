#include "vectordinamico.h"

template <class T>
VectorDinamico<T>::VectorDinamico()
{

}

template<class T>
void VectorDinamico<T>::agregar(T dato)
{
    if (this->cant < this->cap) {
        this->datos[this->cant] = dato;
        this->cant++;
    } else {
        this->cap = (this->cap == 0) ? 2 : this->cap * 2;
        T * aux = new T[this->cap];
        for(int i = 0; i< this->cant; i++) {
            aux[i] = this->datos[i];
        }
        aux[this->cant] = dato;
        this->cant++;
        delete [] this->datos;
        this->datos = aux;
    }
}

template<class T>
T VectorDinamico<T>::get(int indice) {
    return this->datos[indice];
}

template<class T>
int VectorDinamico<T>::getCant()
{
    return this->cant;
}

template<class T>
VectorDinamico<T>::~VectorDinamico()
{
    delete [] this->datos;
}
