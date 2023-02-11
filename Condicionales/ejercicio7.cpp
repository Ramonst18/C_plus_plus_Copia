/*7. Escriba un preograma que solicite una edad (un entero) e indique en la
salida estandar si la edad introducida esta en el rango [18-25].*/

#include<iostream>

using namespace std;

int main(){
    //variables a utilizar
    int edad;

    //pedimos la edad
    cout<<"Digite su edad: ";
    cin>>edad;

    //verificamos que este entre los dos valores solicitados
    if ( edad >= 18 && edad <= 25 )
    {
        cout<<"Su edad esta en el rango de 18 a 25";
    } else {
        cout<<"Su edad no esta en el rango de 18 a 25";
    }
    
    return 0;
}