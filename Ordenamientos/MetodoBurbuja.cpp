//Método Burbuja

#include<iostream>

using namespace std;


int main(){
    //variables a utilizar
    int numeros[] = {5, 4, 3, 1, 2};
    int i, j, aux;

    //for anidados para hacer la comprobación de los valores
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            //verificamos que el numero actual sea mayor al numero siguiente
            if (numeros[j] > numeros[j+1])
            {
                //Ordenamiento burbuja
                aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;
            }
            
        }
        
    }

    //imprimimos los valores
    cout<<"Orden Ascendente: ";
    for ( i = 0; i < 5; i++)
    {
        cout<<numeros[i]<<" ";
    }
    
    cout<<"\nOrden Descendente: ";
    for ( i = 4; i >= 0; i--)
    {
        cout<<numeros[i]<<" ";
    }
    

    return 0;
}
