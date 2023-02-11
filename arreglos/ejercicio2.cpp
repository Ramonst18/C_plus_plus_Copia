/*2. Escribe un programa que defina un vector de numeros y calcule la
multiplicacion acumulada de sus elementos.*/

#include<iostream>

using namespace std;


int main(){
    //variables a utilizar
    int numeros[] = {1, 2, 3, 4, 5};
    int producto = 1;

    //realizamos la multiplicacion acumulada
    for (int i = 0; i < 5; i++)
    {
        producto *= numeros[i];
    }
    
    //mostramos los resultados
    cout<<"El producto de las multiplicaciones es: "<<producto;

    return 0;
}