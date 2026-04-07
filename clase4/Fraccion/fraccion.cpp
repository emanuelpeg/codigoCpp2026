#include "fraccion.h"

int Fraccion::getN() const
{
    return n;
}

int Fraccion::getD() const
{
    return d;
}

int Fraccion::mcd(int n, int d)
{
    return ((n % d) == 0) ? d : mcd(d,n%d);
}

Fraccion::Fraccion(int n, int d)
{
    int nroMcd = this->mcd(n, d);
    this->d = d/nroMcd;
    this->n = n/nroMcd;
}

Fraccion::Fraccion(int n) : Fraccion(n,1)
{
}

Fraccion Fraccion::suma(Fraccion otra)
{
    int nro = this->n * otra.d + this->d * otra.n;
    int deno = this->d * otra.d;
    return Fraccion(nro, deno);
}


