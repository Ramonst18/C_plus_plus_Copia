/*8. Pedir al usuario 2 cadenas de caracteres de numeros
uno entero y el otro real, convertirlos a sus respectivos valores
y por ultimo sumarlos*/

#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

int main(){
    //variables a utilizar
    char numero1[50];
    char numero2[50];
    int numero1I;
    float numero2F, resultado = 0;

    //pedimos los valores al usuario
    cout<<"Digite el valor entero para el primer numero: ";
    cin>>numero1;
    cout<<"Digite el valor real par el segundo numero: ";
    cin>>numero2;

    //realizamos el cambio de las cadenas a valores
    numero1I = atoi(numero1);
    numero2F = atof(numero2);

    //realizamos la suma de los valores
    resultado = numero1I + numero2F;

    //imprimimos el resultado
    cout<<"El resultado es: "<<resultado;


    return 0;
}