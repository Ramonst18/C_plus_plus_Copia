/*1. Realice un programa que solicite de la entrada estandar un entero del 1 al
10 y muestre en la salida estandar su tabla de multiplicar*/

#include<iostream>

using namespace std;
#include<stdlib.h>

int main(){
    //variables a utilizar
    int numero;

    //Dejamos que no pase si el numero no esta entre 1 a 10
    do{

        //pedimos los datos
        cout<<"Digite un numero: ";
        cin>>numero;
    }while( numero<1 || numero>10 );

    //Sacamos su tabla de multiplicar
    for (int i = 1; i <= 20; i++)
    {
        //Mostramos en pantalla
        cout<<numero<<" * "<<i<<" = "<<(numero*i)<<endl;
    }
    
    //pausamos el sistema
    system("pause");

    return 0;
}