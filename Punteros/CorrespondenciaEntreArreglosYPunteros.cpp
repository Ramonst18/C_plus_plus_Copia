//Correspondencia entre arrays y punteros

#include<iostream>

using namespace std;

int main(){
    //variables a utilizar
    int numeros[] = {1, 2, 3, 4, 5};

    //variables puntero
    int *dir_numeros;

    //pasamos la direccion de memoria del primer elemento del arreglo
    dir_numeros = numeros;     //Lo de la izquierda es igual a esto &numeros[0];

    //imprimimos los numeros con su posicion de memoria
    for (int i = 0; i < 5; i++)
    {
        cout<<"Posiciones de memoria "<<numeros[i]<<" es: "<<dir_numeros++<<endl;
        //cout<<"Elemento del vector ["<<i<<"]: "<<*dir_numeros++<<endl;
        //lo que hacemos al aumentar el dir_numeros, es aumentar en 4 bytes para pasar a la siguiente
        //posicion de memoria en donde se encuentra el siguiente valor del arreglo
        
    }
    

    return 0;
}