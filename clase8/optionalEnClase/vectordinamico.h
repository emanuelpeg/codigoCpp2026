#ifndef VECTORDINAMICO_H
#define VECTORDINAMICO_H

template <class T>
class VectorDinamico
{
private:
    T * datos = nullptr;
    int cap = 0;
    int cant = 0;
public:
    VectorDinamico();
    void agregar(T dato);
    T get(int indice);
    int getCant();
    ~VectorDinamico();
};

#endif // VECTORDINAMICO_H
