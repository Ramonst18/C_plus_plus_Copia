/*1. Escribe un programa que lea de la entrada estandar dos numeros y muestre
en la salida estandar su suma, resta, multiplicacion y division.*/

#include<iostream>

using namespace std;

int main(){

    //variables de los dos numeros que usaremos
    int num1;
    int num2;

    //variables de resultados que obtendremos
    int suma = 0, resta = 0, multiplicacion = 0, division = 0;

    cout<<"Digite un numero: "; cin>>num1;
    cout<<"Digite otro numero: "; cin>>num2;

    //realizamos las operaciones para cada variable
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = num1 / num2;

    //imprimimos los resultados
    cout<<"\nLa suma es: "<<suma<<endl;
    cout<<"La resta es: "<<resta<<endl;
    cout<<"La multiplicacion es: "<<multiplicacion<<endl;
    cout<<"La division es: "<<division<<endl;

    return 0;
}
