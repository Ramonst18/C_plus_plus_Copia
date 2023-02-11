//Invertir una cadena - Función strrev()

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    //variables a usar
    char cad[] = "Alejandro";

    //invertimos la cadena
    strrev(cad);

    //imprimimos la cadena
    cout<<cad<<endl;

    return 0;
}