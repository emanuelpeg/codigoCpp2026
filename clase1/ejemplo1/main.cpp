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

int fibo(int n) {
    auto faa = 0;
    auto fa = 1;
    auto aux = faa;
    for (int i = 0; i < n; i++) {
        aux = faa;
        faa = fa;
        fa = aux + fa;
    }
    return faa;
}

int main()
{
    //char palabra [] = {'a', 'n', 'h', 'a'};
    //cout << esPalindromo(palabra,4) << endl;
    for (int i = 0; i < 20; i++)
        cout << fibo(i) << endl;
    return 0;
}
