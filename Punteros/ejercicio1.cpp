/*1. Comprobar si un numero es par o impar, y senalar la posicion de memoria
donde se esta guardando el numero. con punteros*/

#include<iostream>

using namespace std;

int main(){
    //variables a utilizar
    int numero, *dir_numero;

    //pedimos datos al usuario
    cout<<"Digite un numero: ";
    cin>>numero;

    //pasamos la direccion de memoria de la variable
    dir_numero = &numero;

    //comprobamos si es par o impar
    if (*dir_numero%2==0)
    {
        cout<<"El numero "<<*dir_numero<<" es par"<<endl;
        cout<<"Posicion: "<<dir_numero<<endl;
    }else{
        cout<<"El numero "<<*dir_numero<<" es impar"<<endl;
        cout<<"Posicion: "<<dir_numero<<endl;
    }
    
    return 0;
}