/*8. Programa que lea de la entrada estandar tres numeros. 
Despues leer un cuarto numero e indicar si el numero coincide con alguno
de los introducidos con anterioridad*/

#include<iostream>

using namespace std;

int main(){
    //variables a utilizar
    float num1, num2, num3, num4;

    //Pedimos los numeros
    cout<<"Digite tres numeros: ";
    cin>>num1>>num2>>num3;
    cout<<"Digite un cuarto numero: ";
    cin>>num4;

    //realizamos la verificacion de los numeros
    if ( ( num1 == num4) || ( num2 == num4 ) || (num3 == num4) )
    {
        cout<<"El cuarto numero coincide con alguno de los tres primeros numeros";
    } else {
        cout<<"El cuarto numero no coincide con alguno de los tres primeros";
    }

    return 0;
}