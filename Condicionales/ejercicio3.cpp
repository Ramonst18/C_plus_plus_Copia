/*3. Realice un programa que lea un valor entero y determine si se trata de un numero
par o impar.*/

#include<iostream>

using namespace std;

int main(){
    //variable a usar
    int numero;

    //recibimos un valor
    cout<<"Digite un numero: ";
    cin>>numero;

    //verificamos si el numero es par o impar
    if ( numero == 0)
    {
        cout<<"El numero es 0";
    } else if ( numero%2==0 )
    {
        cout<<"El numero es par";
    }else{
        cout<<"El numero es impar";
    }
    
    return 0;
}