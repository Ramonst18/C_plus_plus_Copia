/*Plantillas de funcion

Ejemplo: Sacar el valor avsoluto de un numero*/

#include<iostream>
using namespace std;

//Nota: La plantilla de funcion nos va a permitir hacer un tipo de dato "General"

//Prototipo de Funcion
template <class TIPOD>
void mostrarAbs(TIPOD numero);

int main(){
    //variables a utilizar
    int num1 = 4;
    float num2 = 56.67;
    double num3 = 123.5678;

    //mostramos los resultados
    mostrarAbs(num1);
    mostrarAbs(num2);
    mostrarAbs(num3);

    return 0;
}

//Definicion de funcion
template <class TIPOD>
void mostrarAbs(TIPOD numero){

    //verificamos si el numero es negativo
    if (numero<0)
    {
        numero = numero * -1;
    }

    //mostramos el valor
    cout<<"El valor absoluto del numero es: "<<numero<<endl;
    
}