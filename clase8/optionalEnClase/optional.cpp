#include "optional.h"


template <class T>
T Optional<T>::getNro()
{
    return *nro;
}

template <class T>
bool Optional<T>::esVacio()
{
    return this->nro == nullptr;
}

template <class T>
Optional<T>::~Optional()
{
    //delete this->nro;
}

template <class T>
Optional<T>::Optional()
{

}

template <class T>
Optional<T>::Optional(T nro)
{
    this->nro = new T;
    *(this->nro) = nro;
}
