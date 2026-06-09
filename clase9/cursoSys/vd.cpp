#include "vd.h"

template<class T>
int VD<T>::getCantidad() const
{
    return cantidad;
}

template<class T>
void VD<T>::eliminar(T e)
{
    int acu = 0;
    for (int i = 0; i < this->cantidad; i++) {
        if (this->elementos[i] == e) {
            acu++;
        }
    }

    T * aux = new T[this->cantidad - acu];
    int j = 0;
    for(int i = 0; i < this->cantidad; i++){
        if (!(this->elementos[i] == e)) {
            aux[j] = this->elementos[i];
            j++;
        }
    }
    this->cantidad= this->cantidad - acu;
    delete [] this->elementos;
    this->elementos = aux;
}

template<class T>
VD<T>::VD()
{

}

template<class T>
void VD<T>::add(T e)
{
    T * aux = new T[this->cantidad + 1];
    for(int i = 0; i < this->cantidad; i++){
        aux[i] = this->elementos[i];
    }
    aux[this->cantidad] = e;
    this->cantidad ++;
    delete [] this->elementos;
    this->elementos = aux;
}

template<class T>
T VD<T>::get(int i)
{
    return this->elementos[i];
}

template<class T>
T* VD<T>::getPoint(int i)
{
    return &this->elementos[i];
}
