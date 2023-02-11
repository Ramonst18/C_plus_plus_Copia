/*2. Programa que lea tres numeros y determine cual de ellos
es el mayor*/

#include<iostream>

using namespace std;

int main(){
    //variables a utilizar
    float num1, num2, num3;

    //pedimos los numeros
    cout<<"Digite 3 numeros: ";
    cin>>num1>>num2>>num3;

    //Comprobamos cual es mayor 
    if ( num1 > num2 && num1 > num3 )
    {
        cout<<"El mayor es: "<<num1;
    } else if ( num2 > num1 && num2 > num3 )
    {
        cout<<"El mayor es: "<<num2;
    } else if ( num3 > num1 && num3 > num2 )
    {
        cout<<"El mayor es: "<<num3;
    }else{
        cout<<"Hay algunos numeros iguales";
    }
    
    return 0;
}