/*6. Convertir dos cadenas de minusculas a MAYUSCULAS.
Compararlas, y decir si son iguales o no*/

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    //variables a usar
    char cad1[] = "Jose";
    char cad2[] = "Jose";

    //cambiamos las palabras a mayusculas
    strupr(cad1);
    strupr(cad2);

    //verificamos que sean iguales
    if (strcmp(cad1, cad2) == 0)
    {
        cout<<"Las palabras son iguales";
    } else {
        cout<<"Las palabras no son iguales";
    }
    


    return 0;
}