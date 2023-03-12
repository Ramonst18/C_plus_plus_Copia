/*Asignacion dinamica de arreglos

new : Reserva el numero de bytes solicitados por la declaracion.
delete : Libera un bloque de bytes reservado con anterioridad.

Ejemplo: Pedir al usuario n calificaciones y almacenarlos en un arreglo dinamico
*/

#include<iostream>
#include<stdlib.h>  //funciona new y delete

//Nota: debemos de importar el stdlib.h para poder utilizar los arreglos dinamicos

using namespace std;

//Prototipo de funcion
void pedirNotas();
void mostrarNotas();

//variables y punteros globales
int numCalif, *calif;

int main(){
    pedirNotas();
    mostrarNotas();
    
    //NOTA: despues de reservar memoria, nosotros debemos de liberarla cuando termine la app
    delete[] calif; //liberando el espacio en bytes utilizados anteriormente

    return 0;
}

//definicion
void pedirNotas(){
    cout<<"Digitte el numero de calificaciones: ";
    cin>>numCalif;

    //creamos un arreglo dinamico
    calif = new int[numCalif];

    //pedimos las notas
    for (int i = 0; i < numCalif; i++)
    {
        cout<<"Ingrese una nota: ";
        cin>>calif[i];
    }
    
}

void mostrarNotas(){
    cout<<"\nMostrando notas del usuario"<<endl;

    //imprimimos las notas
    for (int i = 0; i < numCalif; i++)
    {
        cout<<calif[i]<<endl;
    }
    
}