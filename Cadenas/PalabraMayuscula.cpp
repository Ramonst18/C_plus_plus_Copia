//pasar una palabra a mayuscula - Función strupr()

#include<iostream>
#include<string.h>

using namespace std;

/*Nota: si ya hay una palabra en mayuscula se mantendra, solo
cambiará los caracteres en minuscula*/

int main(){
    //variables a utilizar
    char palabra[] = "ramon";

    //cambiamos una palabra a mayuscula
    strupr(palabra);

    //imprimimos
    cout<<palabra<<endl;

    return 0;
}