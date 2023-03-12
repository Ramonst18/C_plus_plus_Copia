/*5. Pedir al usuario N numeros, almacenarlos en un arreglo dinamico
posteriormente ordenar los números en orden ascendente y mostrarlos
en pantalla.
Nota: utilizar cualquier método de ordenamiento.*/

#include<iostream>
#include<stdlib.h>  //new y delete

using namespace std;

//Prototipos de funcion
void pedirDatos();
void ordenarArreglo(int *, int);
void mostrarArreglo(int *, int);

//variables globales
int nElementos, *elemento;

int main(){
    pedirDatos();
    ordenarArreglo(elemento, nElementos);
    mostrarArreglo(elemento, nElementos);

    //liberamos la memoria utilizada para el arreglo dinamico
    delete[] elemento;

    return 0;
}

void pedirDatos(){
    cout<<"Digite el numero de elementos del arreglo: ";
    cin>>nElementos;

    //creamos el arreglo dinamico
    elemento = new int[nElementos];

    //pedimos los datos del arreglo al usuario
    for (int i = 0; i < nElementos; i++)
    {
        cout<<"Digite un numero["<<i<<"]: ";
        cin>>*(elemento+i); //elemento[i]
    }
    
}

void ordenarArreglo(int *elemento, int nElementos){
    int aux;

    //ordenamos el arreglo
    for (int i = 0; i < nElementos; i++)
    {
        for (int j = 0; j < nElementos-1; j++)
        {
            if (*(elemento+j)> *(elemento+j+1)) //elemento[j] > elemento[j+1]
            {
                aux = *(elemento+j);
                *(elemento+j) = *(elemento+j+1);
                *(elemento+j+1) = aux;
            }
            
        }
        
    }
    
}

void mostrarArreglo(int *elemento, int nElementos){
    cout<<endl<<"Mostrando arreglo ordenado: "<<endl;

    for (int i = 0; i < nElementos; i++)
    {
        cout<<*(elemento+i)<<endl;    //elemento[i]
    }
    
}