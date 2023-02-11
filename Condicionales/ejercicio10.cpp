/*10. Mostra los meses del año, pidiendo al usuario un numero
entre 1 - 12 y mostrar el mes al que correpsonde*/

#include<iostream>

using namespace std;

int main(){
    //variables a usar
    int num;

    //pedimos el numero que representa al mes
    cout<<"Digite un numero del mes: ";
    cin>>num;

    //verificamos el numero correpondiente al mes
    switch ( num )
    {
    case 1:
        cout<<"El mes es enero";
        break;
    case 2:
        cout<<"El mes es febrero";
        break;
    case 3:
        cout<<"El mes es marzo";
        break;
    case 4:
        cout<<"El mes es abril";
        break;
    case 5:
        cout<<"El mes es mayo";
        break;
    case 6:
        cout<<"El mes es junio";
        break;
    case 7:
        cout<<"El mes es julio";
        break;
    case 8:
        cout<<"El mes es agosto";
        break;
    case 9:
        cout<<"El mes es septiembre";
        break;
    case 10:
        cout<<"El mes es octubre";
        break;
    case 11:
        cout<<"El mes es noviembre";
        break;
    case 12:
        cout<<"El mes es diciembre";
        break;    
    default:
        cout<<"El numero que digito no pertenece a un mes";
        break;
    }


    return 0;
}