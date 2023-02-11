//2. Escribe la siguiente expresion matematica como exprecion en c++ ( a + b )/( c + d)

#include<iostream>

using namespace std;

int main(){

    //variables a utilizar
    int num1, num2, num3, num4, resultado = 0;

    //pedimos los numeros al usuario
    cout<<"Digite el numero a: "; cin>>num1;
    cout<<"Digite el numero b: "; cin>>num2;
    cout<<"Digite el numero c: "; cin>>num3;
    cout<<"Digite el numero d: "; cin>>num4;

    //realizamos la operacion
    resultado = ( num1 + num2 ) / ( num3 + num4 );

    //imprimimos el resultado
    cout<<"\nEl resultado es: "<<resultado;

    return 0;
}