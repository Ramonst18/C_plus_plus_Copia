/*Programa que pida al usuario que digite una cadena de caracteres, luego
verificar la longitud de la cadena, y si esta supera a 10 caracteres
mostrarla en pantalla, caso contrario no mostrarla*/

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    //variable a utilizar
    char cadena[30];

    //pedimos la cadena
    cout<<"Digite una cadena: "<<endl;
    cin.getline(cadena, 30, '\n');

    //verificamos la longitud
    if(strlen(cadena) > 10){
        //imprimos la cadena
        cout<<cadena;
    }

    return 0;
}
