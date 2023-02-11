/*1. Escriba un programa que lea dos numeros y determine cual de ellos 
es el mayor*/

#include<iostream>

using namespace std;

int main(){
    //variables
    float numero1, numero2;

    //Pedimos los numeros
    cout<<"Digite 2 numeros: ";
    cin>>numero1>>numero2;

    //realizamos la verificacion de cual es mayor
    if ( numero1 > numero2 )
    {
        cout<<"El mayor es: "<<numero1;
    } else if ( numero1 < numero2 )
    {
        cout<<"El mayor es: "<<numero2;
    } else {
        cout<<"Los numeros son iguales";
    }
    
    

    return 0;
}