/*8. Escriba una funcion nombrada cambio() que tenga un parametro en numero
y seis parametros de referencia en numero entero nombrados, cien, cincuenta,
veinte, diez, cinco y uno, respectivamente.
La funcion tiene que considerar el valor entero transmitido como una 
cantidad en dolares y convertir el valor en el numero menor de billetes
equivalentes*/

#include<iostream>

using namespace std;

void cambio(int, int&, int&, int&, int&, int&, int&);

int main(){
    //variabltes a utilizar
    int dolares, cien, cincuenta, veinte, diez, cinco, uno;

    //Pedimos la cantidad de dolares
    cout<<"Digite la cantidad de dolares: ";
    cin>>dolares;

    cambio(dolares, cien, cincuenta, veinte, diez, cinco, uno);

    //imprimimos los resultados
    cout<<"Billetes de 100 "<<cien<<endl;
    cout<<"Billetes de 50 "<<cincuenta<<endl;
    cout<<"Billetes de 20 "<<veinte<<endl;
    cout<<"Billetes de 10 "<<diez<<endl;
    cout<<"Billetes de 5 "<<cinco<<endl;
    cout<<"Billetes de 1 "<<uno<<endl;

    return 0;
}

void cambio(int dolares, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno){
    //funcion que nos darta cuanto billetes de cierta cantidad hay

    //Calculamos la cantidad de billetes de 100
    cien = (int)(dolares / 100);
    dolares = dolares - (cien * 100);

    //calculamos la cantidad de billetes de 50
    cincuenta = (int)(dolares / 50);
    dolares = dolares - (cincuenta * 50);

    //calculamos la cantidad de billetes de veinte
    veinte = (int)(dolares / 20);
    dolares = dolares - (veinte * 20);

    //calculamos la cantidad de billetes de 10
    diez = (int)(dolares / 10);
    dolares = dolares - (diez * 10);

    //calculamos la cantidad de billetes de 5
    cinco = (int)(dolares / 5);
    dolares = dolares - (cinco * 5);

    //Calculamos la cantidad de billetes de 1
    uno = (int)(dolares / 1);
    dolares = dolares - uno;

}