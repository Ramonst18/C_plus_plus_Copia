//11. Escriba un programa que calcule el valor de: 2^1 + 2^2 + 2^3 +...+ 2^n

#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main(){
    //variables a utilizar
    int numero, suma = 0, elevacion = 0;

    //pedimos los datos
    cout<<"Digite el numero de elementos a sumar: ";
    cin>>numero;

    //realizamos los calculos
    for (int i = 1; i <= numero; i++)
    {
        elevacion = pow( 2, i );
        suma += elevacion;
    }
    

    //imprimimos los resultados
    cout<<"La suma total es: "<<suma<<endl;

    system("pause");
    return 0;
}