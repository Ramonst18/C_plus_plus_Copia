//Ordenamiento por Insercion

#include<iostream>

using namespace std;

int main(){
    //variables
    int numeros[] = {5, 2, 1, 3, 4};
    int i, pos, aux;

    //empezamos el recorrimiento y el ordenamiento
    for ( i = 0; i < 5; i++)
    {
        //Ordenamiento por insercion
        pos = i;    //Guardamos la posicion actual
        aux = numeros[i];   //guardamos el valor actual

        //comparamos la posicion de la izquierda
        while ( (pos>0) && (numeros[pos-1] > aux) )
        {
            //Realizamos el cambio
            numeros[pos] = numeros[pos-1];

            //nos vamos una posicion a la izquierda
            pos--; 
        }
        
        //refrescamos el numero en la posicion sea la auxiliar
        numeros[pos] = aux;
    }
    
    //imprimimos los resultados
    cout<<"Orden Ascendente: ";
    for ( i = 0; i < 5; i++ )
    {
        cout<<numeros[i]<<" ";
    }
    

    return 0;
}