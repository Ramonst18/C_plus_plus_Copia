/*4. Comprobar si un numero digitado por el usuario es positivio
o negativo*/

#include<iostream>

using namespace std;

int main(){

    //variables a utilizar
    int numero;

    //pedimos el numero
    cout<<"Digite un numero: ";
    cin>>numero;

    //verificamos si es positivo o negativo
    if ( numero == 0 )
    {
        cout<<"El numero es 0";
    } else if ( numero < 0)
    {
        cout<<"El numero es negativo";
    }else{
        cout<<"El numero es positivo";
    }

    return 0;
}