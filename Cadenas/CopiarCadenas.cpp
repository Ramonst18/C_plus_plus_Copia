//copiar el contenido de una cadena a otra - Funcion strcpy()

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    //variables a utilizar
    char nombre[] = "Jose Maria";
    char nombre2[20];

    //copiamos la cadena a otra variable, primero va 
    strcpy(nombre2,nombre);

    cout<<nombre2;

    return 0;
}