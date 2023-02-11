/*5. Escriba un programa que lea valores enteros hasta que se introduzca
un valor en el rango [20-30] o se introduzca el valor 0. El programa
debe entregar la suma de los valores mayores a 0 introducidos*/

#include<iostream>
#include<stdlib.h>

using namespace std;


int main(){
    //variable a utilizar
    int numero, suma = 0;

    //pedimos datos
    do{
        cout<<"Digite un numero: ";
        cin>>numero;

        //verificamos que sea mayor a 0 para realizar la suma
        if ( numero>0 )
        {
            suma += numero;
        }
        
    }while( numero<20 || numero>30 && numero !=0 );

    //imprimimos en pantalla
    cout<<"La suma es: "<<suma<<endl;

    system("pause");
    return 0;
}