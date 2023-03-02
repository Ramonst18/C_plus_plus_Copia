/*11. Realice una funcion que tome como parametros
un vector de numeros enteros y devuelva la suma de
sus elementos*/

#include<iostream>

using namespace std;

//variables globales
int vec[100], tam;

void pedirDatos();
int calcularSuma(int vec[], int);

int main(){
    pedirDatos();

    cout<<endl<<"La suma de los elementos del vector es: "<<calcularSuma(vec, tam)<<endl;

    return 0;
}

void pedirDatos(){
    /*FUncion que pedira datos al usuario que seran almacenados
    dentro de un vector*/
    cout<<"Digite el numero de elementos del vector: ";
    cin>>tam;

    //tomamos los datos del vector
    for (int i = 0; i < tam; i++)
    {
        cout<<i+1<<". Digite un numero: ";
        cin>>vec[i];
    }
    
}

int calcularSuma(int vec[], int tam){
    /*Funcion que realizara la suma de los numeros contenidos en el arreglo*/
    int suma;

    //realizamos la suma de los valores del arreglo
    for (int i = 0; i < tam; i++)
    {
        suma += vec[i];
    }
    
    return suma;
}