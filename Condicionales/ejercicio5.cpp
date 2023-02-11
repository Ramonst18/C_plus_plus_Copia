/*5. Escriba un programa que lea de la entrada estandar un caracter e indique
en la salida estandar si el caracter es una vocal minuscula o no.*/

#include<iostream>

using namespace std;

int main(){
    //variable a usar
    char letra;

    //recibimos el caracter
    cout<<"Digite un caracter: ";
    cin>>letra;

    //verificamos los caracteres en minusculas
    switch ( letra )
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout<<"Es una vocal minuscula";
        break;
    default:
        cout<<"No es una vocal minuscula";
        break;
    }


    return 0;
}