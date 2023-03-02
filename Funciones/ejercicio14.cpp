/*14. Realiza una funcion que toma como parametros un vector
de enteros y su tamano e imprima un vector con los elementos
impares del vector recibido.*/

#include<iostream>

using namespace std;

void pedirDatos();
void imprimirVector(int[], int);

//variables globales
int vec[100], tam;

int main(){
    pedirDatos();
    imprimirVector(vec, tam);

    return 0;
}

void pedirDatos(){
    cout<<"Digite la cantidad de elementos del vector: ";
    cin>>tam;

    //llenamos el vector
    for (int i = 0; i < tam; i++)
    {
        cout<<i+1<<". Digite un numero: ";
        cin>>vec[i];
    }
    
}

void imprimirVector(int vec[], int tam){
    /*Imprimimos los elementos del vector, pero solo los impares*/
    cout<<"IMprimiendo los elementos impares"<<endl;

    for (int i = 0; i < tam; i++)
    {
        if (vec[i]%2 == 1)
        {
            cout<<vec[i]<<endl;
        }
        
    }
    
}