/*22. Escriba una funcion escribeNumeros(int ini, int fin) que devuelva en la salida estandar
los numeros del ini al fin. Escriba una version que escriba los números en orden ascendente*/

#include<iostream>

using namespace std;

int escribeNumerosDescendente(int, int);

int main(){
    cout<<escribeNumerosDescendente(0, 100)<<endl;
    return 0;
}

int escribeNumerosDescendente(int ini, int fin){
    int numero = ini;

    if (ini != fin)
    {
        cout<<escribeNumerosDescendente(ini + 1, fin)<<" ";
    }

    return numero;
    
}

