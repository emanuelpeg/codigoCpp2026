#include "cola.h"

template<class T>
Cola<T>::Cola()
{

}

template<class T>
void Cola<T>::add(T dato)
{
    this->datos.push_back(dato);

}

template<class T>
T Cola<T>::get(int index)
{
    int i = index % this->datos.size();
    return this->datos[i];
}
