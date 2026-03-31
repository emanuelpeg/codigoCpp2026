#include <iostream>

using namespace std;

int* add(int vec[], int cant, int dato) {
    int* aux = new int[cant + 1];
    for(int i = 0; i < cant; i++) {
        aux[i] = vec[i];
    }
    aux[cant] = dato;
    delete [] vec;
    return aux;
}

int* remove(int vec[], int cant, int indice) {
    int* aux = new int[cant - 1];
    int j = 0;
    for(int i = 0; i < cant; i++) {
        if (i != indice) {
            aux[j] = vec[i];
            j++;
        }
    }
    delete [] vec;
    return aux;
}

int largo(char * palabra){
    int cantidad = 0;
    while (palabra[cantidad] != '\0') {
        cantidad++;
    }
    return cantidad;
}

char * concatenar(char * p1, char * p2) {
    int largop1 = largo(p1);
    int largop2 = largo(p2);
    char* aux = new char[largop1 +largop2 + 1];
    for(int i = 0; i < largop1; i++) {
        aux[i] = p1[i];
    }
    for(int i = 0; i < largop2 ; i++) {
        aux[i + largop1] = p2[i];
    }
    aux[largop2 + largop1] = '\0';
    return aux;

}

char * pasarMayuscula(char * palabra) {
    int cant = largo(palabra);
    char * newPalabra = new char[cant];
    for (int i = 0; i < cant; i++) {
        if (palabra[i] >= 'a' && palabra[i] <= 'z') {
            newPalabra[i] = palabra[i] -32;
        } else {
            newPalabra[i] = palabra[i];
        }
    }
    return newPalabra;
}

char* add(char *vec, char dato) {
    int cant = largo(vec) + 1;
    char* aux = new char[cant + 1];
    for(int i = 0; i < cant; i++) {
        aux[i+1] = vec[i];
    }
    aux[0] = dato;
    //delete [] vec;
    return aux;
}


int main()
{
    /*int * vec = new int [4];
    vec[0] = 1;
    vec[1] = 2;
    vec[2] = 3;
    vec[3] = 4;
    int * vec2 = add(vec, 4, 8);
    for (int i = 0; i < 5; i++) {
        cout << vec2[i] << ", " ;
    }


    int * vec3 = remove(vec2, 5, 2);
    for (int i = 0; i < 4; i++) {
        cout << vec3[i] << ", ";
    }*/
    char * palabra = "ola 456 !!";
    /*char * palabra2 = " Gabriel";
    cout << concatenar(palabra, palabra2) << endl;*/
    //cout<< pasarMayuscula(palabra);
    cout<< add(palabra, 'H');
    return 0;
}
