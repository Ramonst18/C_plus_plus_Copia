//Transofmrar una cadena a numeros - Función atoi() y atof()

//atoi, cambia una cadena a valores enteros
//atof, cambia una cadena a valores flotantes

//"123" -> 123

#include<iostream>
#include<string.h>
#include<stdlib.h>  //Se ocupa este para realizar los cambios de cadenas a valores

using namespace std;

int main(){
    //variables a utilizar
    char cad[] = "123";
    char cad2[] = "1234.56";
    int numero1;
    float numero2;

    //realizamos el cambio de cadena a valor
    numero1 = atoi(cad);
    numero2 = atof(cad2);

    //imprimimos el valor
    cout<<numero1<<endl;
    cout<<numero2<<endl;

    return 0;
}