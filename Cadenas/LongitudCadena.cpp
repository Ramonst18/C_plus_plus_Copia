//Longitud de una cadena de caracteres - Función strien()

#include<iostream>
#include<string.h>

using namespace std;

//Nota: la funcion strlen nos regresa la longitud de una cadena de caracteres, contando los espacios

int main(){
    char palabra[] = "Hola";
    int longitud=0;

    //optenemos la longitud de la palabra
    longitud = strlen(palabra);

    //imprimimos
    cout<<"Numero de elementos de la cadena es: "<<longitud<<endl;

    return 0;
}