/*2. Programa que lea de la entrada estandar numeros hasta que se introduzca
un cero. En ese momento el programa debe terminar y mostrar en la salida
estandar el numero de valores mayores de cero leidos*/

#include<iostream>

using namespace std;

int main(){
    //variables a utilizar
    int numero, repeticiones = 0;

    //Realizamos la pedida del numero
    do{
        //pedimos un dato
        cout<<"Digite un numero: ";
        cin>>numero;

        //verificamos que sea distinto de 0 para aumentar la repeticiones
        if ( numero != 0)
        {
            repeticiones++;
        }
        

    }while(numero!=0);

    //imprimimos la cantidad de repeticiones
    cout<<"La cantidad de numeros diferentes de 0 fueron: "<<repeticiones;


    return 0;
}