/*1. Escribe un programa que defina un vector de numeros y calcule la suma
de sus elementos.*/

#include<iostream>

using namespace std;

int main(){
    //variables a utilizar
    int numeros[] = {1, 2, 3, 4, 5};
    int suma = 0;

    //realizamos la suma de los numeros
    for (int i = 0; i < 5; i++)
    {
        suma += numeros[i];
    }
    
    //mostramos los resultados
    cout<<"El resultado de la suma es: "<<suma<<endl;

    return 0;
}