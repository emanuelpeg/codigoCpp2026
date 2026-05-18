#ifndef OPTIONAL_H
#define OPTIONAL_H

template <class T>
class Optional
{
private:
    T * nro = nullptr;
public:
    Optional();
    Optional(T nro);
    T getNro();
    bool esVacio();
    ~Optional();
};

#endif // OPTIONAL_H
