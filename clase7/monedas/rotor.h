#ifndef ROTOR_H
#define ROTOR_H


class Rotor
{
private:
    int * nros=nullptr;
    int cant=0;
    int indice=0;
public:
    Rotor();
    void add(int i);
    int next();
    Rotor* copy();
};

#endif // ROTOR_H
