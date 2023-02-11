//Añadir o concatenar una cadena con otra - funcion strcat)=

#include<iostream>
#include<string.h>

using namespace std;

/*Notas: Esta función añade la otra cadena al final de la primera cadena*/

int main(){
    //variables a usar
    char cad1[] = "Esto es una cadena";
    char cad2[] = " de ejemplo";
    char cad3[30];

    //copiamos las cadenas
    strcpy(cad3, cad1); //cad3 = "Esto es una cadena"

    //concatenamos
    strcat(cad3, cad2); //cad3 = "Esto es una cadena de ejemplo"

    //imprimimos 
    cout<<cad3<<endl;

    return 0;
}