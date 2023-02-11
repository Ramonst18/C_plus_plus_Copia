/*11. Hacer un programa que simule un cajero automatico con un saldo
inicial de 1000 Dolares.*/

#include<iostream>

using namespace std;

int main(){
    //variables a utilizar
    int saldo_inicial = 1000, opc;
    float extra, saldo = 0, retiro = 0;

    //pedimos una opcion
    cout<<"\tBienvenido a su Cajero Virtual"<<endl;
    cout<<"1. Ingresar dinero en cuenta"<<endl;
    cout<<"2. Retirar dinero de la cuenta"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Opcion: ";
    cin>>opc;

    //realizamos la operacion de la opcion elegida
    switch ( opc )
    {
    case 1:
        cout<<"Digite la cantidad de dinero a ingresar: ";
        cin>>extra;

        //Realizamos la operacion
        saldo = saldo_inicial + extra;

        cout<<"Dinero en cuenta: "<<saldo;
        break;
    case 2:
        cout<<"Digite la cantidad de dinero a retirar: ";
        cin>>retiro;

        //verificamos que tengamos el saldo suficiente
        if ( retiro > saldo_inicial)
        {
            cout<<"No tiene esa cantidad de dinero";
        } else {
            //realizamos la operacion
            saldo = saldo_inicial - retiro;
            cout<<"Dinero en cuenta: "<<saldo;
        }
        
        break;
    case 3:
        cout<<"Adios e.e";
        break;
    default:
        break;
    }

    return 0;
}