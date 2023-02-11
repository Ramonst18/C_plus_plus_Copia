//Pasar una palabra a minusculas - Función strlwr()

#include<iostream>
#include<string.h>

using namespace std;

/*Nota: solo cambiara las letras mayusculas a minusculas*/

int main(){
    //variables a utilizar
    char palabra[] = "CHORIZO";

    //hacemos minusculas a todas las letras
    strlwr(palabra);

    //imprimimos la palabra
    cout<<palabra;

    return 0;
}