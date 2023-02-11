//1. Escribe la siguiente expresion como expresion en C++ (a/b) + 1

#include<iostream>

using namespace std;

int main(){

    //variables
    float num1, num2, resultado = 0;

    //recibimos los valores
    cout<<"Digite el valor de a: "; cin>>num1;
    cout<<"Digite el valor de b: "; cin>>num2;

    //realizamos los calculos
    resultado = ( num1 / num2 ) + 1;

    //para limitar el numero (redondear el numero) a cierta cantidad de digitos
    cout.precision(2);

    //imprimimos el resultado
    cout<<"\nEl resultado es: "<<resultado<<endl;

    return 0;
}