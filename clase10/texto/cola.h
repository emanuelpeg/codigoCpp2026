#ifndef COLA_H
#define COLA_H
#include <vector>

template <class T>
class Cola
{
private:
    std::vector<T> datos;
public:
    Cola();
    void add(T dato);
    T get(int index);
};

#endif // COLA_H
