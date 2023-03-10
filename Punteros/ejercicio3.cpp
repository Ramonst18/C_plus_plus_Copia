/*3. Rellenar un array de 10 numeros, opsteriormente utilizando
punteros indicar cuales son numeros pares y su posicion en 
memoria*/

#include<iostream>

using namespace std;

int main(){
    //variables y punteros
    int numeros[10], *dir_numeros;

    //llenamos el arreglo
    for (int i = 0; i < 10; i++)
    {
        cout<<"Digite un numero["<<i<<"]: ";
        cin>>numeros[i];
    }

    dir_numeros = numeros;  //posicion de memoria donde comienza numeros

    //recorremos el arreglo
    for (int i = 0; i < 10; i++)
    {
        //preguntamos si el numero es par
        if (*dir_numeros%2 == 0)
        {
            cout<<"El numero "<<*dir_numeros<<" es par"<<endl;
            cout<<"Posicion: "<<dir_numeros<<endl;
        }

        //incrementamos el puntero
        dir_numeros++;
    }
    
    return 0;
}