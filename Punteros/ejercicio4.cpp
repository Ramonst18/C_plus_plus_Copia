/*4. Rellenar un arreglo con n nuemeros, posteriormente utilizando punteros
determinar el menor elemento del arreglo*/

#include<iostream>

using namespace std;

int main(){
    //variables y punteros a utilizar
    int numeros[10], menor, *dir_numeros, *dir_numeroMenor;

    //llenamos el arreglo de numeros
    for (int i = 0; i < 10; i++)
    {
        cout<<"Digite el numero ["<<i+1<<"]: ";
        cin>>numeros[i];
    }
    
    //declaramos el menor el primer numero
    menor = numeros[0];

    //damos la posicion en memoria donde comienza numeros
    dir_numeros = numeros;

    //buscamos el numero menor
    for (int i = 0; i < 10; i++)
    {
        //verificamos si el numero actual es menor al menor
        if (*dir_numeros < menor)
        {
            //damos el numero
            menor = *dir_numeros;

            //damos la posicion en memoria
            dir_numeroMenor = dir_numeros;
        }

        dir_numeros++;

    }
    
    //imprimimos el menor valor junto a su posicion en memoria
    cout<<"El numero menor es: "<<*dir_numeroMenor<<" cuya posicion es: "<<dir_numeroMenor;

    return 0;
}
