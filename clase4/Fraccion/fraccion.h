#ifndef FRACCION_H
#define FRACCION_H


class Fraccion
{
private:
    int n;
    int d;
    int mcd(int n, int d);
public:
    Fraccion(int n, int d);
    Fraccion(int n);
    Fraccion suma(Fraccion otra);
    int getN() const;
    int getD() const;

};

#endif // FRACCION_H
