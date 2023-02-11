/* La setencia if

    if( condicion ){
        Instrucciones 1;
    }else{
        Instrucciones 2;
    }
*/

#include<iostream>

using namespace std;

int main(){

    int numero, dato = 5;

    //pedimos un dato
    cout<<"Digite un numero: "; cin>>numero;

    //verificamos que el numero sea igual
    if( numero == dato ){
        cout<<"El numero es 5";
    } else {
        cout<<"El numero es diferente de 5";
    }

    return 0;
}