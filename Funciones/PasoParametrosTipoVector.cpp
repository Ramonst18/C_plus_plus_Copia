/*Paso de parametros de tipo vector
Parametros de la funcion: 
    void nombreDeFuncion(tipo nombreArreglo[], int tamanoArreglo)
    
Llamada a la funcion
    nombreDeFuncion(nombreArreglo, tamanoArreglo)*/

//Cuadrados de los elementos del vector

#include<iostream>

using namespace std;

void cuadrado(int vec[], int);
void muestra(int vec[], int);

//NOTA: es una mala practica de programacion realizar alguna accion no definida en el metodo
//Las funciones solo deben de hacer una sola accion

int main(){
    //variables a utilizar
    const int TAM = 5;  //const, una variable cuyo valor no podra ser cambiado
    int vec[TAM] = {1, 2, 3, 4, 5}; 

    cuadrado(vec, TAM);
    muestra(vec, TAM);

    return 0;
}

void cuadrado(int vec[], int tam){
    /*FUncion que multiplica al cuadrado los valores de un vector*/
    //se recibe el vector y el tamano del vector

    for (int i = 0; i < tam; i++)
    {
        vec[i] = vec[i] * vec[i];
    }
    
}

void muestra(int vec[], int tam){
    /*FUncion que imprime en consola un vector*/

    for (int i = 0; i < tam; i++)
    {
        cout<<vec[i]<<endl;
    }
    
}
