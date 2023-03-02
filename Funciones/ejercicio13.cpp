/*13. Realiza una funcion que tome como parametros un vector
de numeros y su tamano y cambie el signo de los elementos del vector*/

#include<iostream>

using namespace std;

void pedirDatos();
void cambiarSigno(int vec[], int tam);
void mostrarVector(int vec[], int tam);

//variables globales
int vec[100], tam;

int main(){
    pedirDatos();
    cambiarSigno(vec, tam);
    mostrarVector(vec, tam);

    return 0;
}

void pedirDatos(){
    cout<<"Digite el tamano del vector: ";
    cin>>tam;

    for (int i = 0; i < tam; i++)
    {
        cout<<i+1<<". Digite un numero: ";
        cin>>vec[i];
    }
    
}

void cambiarSigno(int vec[], int tam){
    /*FUncion que cambiara el signo a los valores del vector*/
    for (int i = 0; i < tam; i++)
    {
        vec[i] *= -1;
    }
    
}

void mostrarVector(int vec[], int tam){
    /*Funcion que imprimira en consola el vector*/

    cout<<"MOstrando los elementos del vector con signo cambiado"<<endl;

    for (int i = 0; i < tam; i++)
    {
        cout<<vec[i]<<endl;
    }
    
}