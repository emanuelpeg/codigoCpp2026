#ifndef VD_H
#define VD_H

template <class T>
class VD
{
private:
    T * elementos = nullptr;
    int cantidad = 0;
public:
    VD();
    void add(T e);
    T get(int i);
    T* getPoint(int i);
    int getCantidad() const;
    void eliminar(T e);
};

#endif // VD_H
