#include <iostream>

using namespace std;

bool esPalindromo(char palabra[], int cantidad) {
    for(int i = 0; i < (cantidad/2); i++) {
        if (palabra[i] != palabra[cantidad - i - 1]){
            return false;
        }
    }
    return true;
}

long fibo(int n) {
    long faa = 0;
    long fa = 1;
    long aux = faa;
    for (int i = 0; i < n; i++) {
        aux = faa;
        faa = fa;
        fa = aux + fa;
    }
    return faa;
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

long fibo2(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibo2(n-1) + fibo2(n-2);
}

long fiboAux(int n, long fa, long faa) {
    if (n == 0) {
        return faa;
    }
    if (n == 1) {
        return fa;
    }
    return fiboAux(n - 1, fa + faa, fa);
}

long fibo3(int n) {
    return fiboAux(n,1,0);
}

int mayor(int m[], int cantidad) {
    if(cantidad == 1) {
        return m[0];
    }
    int ma = mayor(m, cantidad - 1);
    if (m[cantidad - 1] > ma) {
        return m[cantidad - 1];
    }
    return ma;
}
int mcd(int a, int b) {
    /* if (a % b == 0) return b;
     * else return mcd(b, a % b);*/
    return (a % b == 0) ? b : mcd(b, a % b);
}

int mayorAux(int m[], int cantidad, int ma) {
    if(cantidad == 1) {
        return ma;
    }
    if (m[cantidad - 1] > ma) {
        return mayorAux(m, cantidad -1, m[cantidad - 1]);
    }
    return mayorAux(m, cantidad -1, ma);
}

int mayor2(int m[], int cantidad) {
    return mayorAux(m, cantidad, m[0]);
}

bool palindromoAux(int m[], int cant, int indice) {
    if (indice >= cant) {
        return true;
    }
    if (m[indice] == m[cant - 1]) {
        return palindromoAux(m, cant - 1, indice + 1);
    }
    return false;
}

bool palindromo(int m[], int cant) {
    return palindromoAux(m, cant, 0);
}

int main()
{
    //char palabra [] = {'a', 'n', 'h', 'a'};
    //cout << esPalindromo(palabra,4) << endl;
    //for (int i = 0; i < 50; i++) {
    //    cout << fibo(i) << endl;
    //    cout << fibo3(i) << endl;
    //}
    int m[] = { 2, 3,4 ,5,6,0,24,9};
    int m2[] = { 1 };
    int m3[] = {  };
    int m4[] = { 1, 2, 3, 2, 1 };
    int m5[] = { 1, 2, 3, 1 };
    //cout << mayor2(m, 8) << endl;
    // cout << mcd(12,82) << endl;
    cout << palindromo(m, 8) << endl;
    cout << palindromo(m2, 1) << endl;
    cout << palindromo(m3, 0) << endl;
    cout << palindromo(m4, 5) << endl;
    cout << palindromo(m5, 4) << endl;
    return 0;
}
