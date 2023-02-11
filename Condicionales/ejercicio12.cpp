/*12. Hacer un menu que considere las siguientes opciones:
    Caso1: Cubo de un numero
    Caso2: Numero par o impar
    Caso3: Salir.
    */

#include<iostream>
#include<math.h>

using namespace std;

int main(){
    //variables
    int opcion, numero, resultado = 0;

    //menu
    cout<<"\tBienvenidos"<<endl;
    cout<<"Opcion1: Cubo de un numero"<<endl;
    cout<<"Opcion2: Numero par o impar"<<endl;
    cout<<"Opcion3: salir"<<endl;
    cout<<"Opcion: ";
    cin>>opcion;

    //cargamos la opcion dada
    switch ( opcion )
    {
    case 1:
        //pedimos el numero
        cout<<"Digite el numero a trabajar: ";
        cin>>numero;

        //realizamos el calculo
        resultado = pow( numero, 2);

        //imprimimos el resultado
        cout<<"El resultado es: "<<resultado;
        break;
    case 2:
        //pedimos el numero
        cout<<"Digite el numero a trabajar: ";
        cin>>numero;

        //verificamos si es un numero par o impar
        if ( numero%2==0 )
        {
            cout<<"El numero es par";
        } else {
            cout<<"El numero es impar";
        }
        
        break;
    case 3:
        cout<<"Adiu";
        break;
    default:
        break;
    }

    return 0;
}