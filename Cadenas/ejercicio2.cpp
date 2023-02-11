/*2. Pedir al usuario una cadena de caracteres, almacenarla en un arreglo
y copiar todo su contenido hacia otro arreglo de caracteres.*/

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    //variables a utilizar
    char cadena[40];
    char cadena2[40];

    //pedimos la cadena al usuario
    cout<<"Escrite una cadena de caracteres: ";
    cin.getline(cadena, 40, '\n');

    //copiamos la cadena a cadena2
    strcpy(cadena2, cadena);

    //imprimimos la cadena2
    cout<<cadena2;

    return 0;
}