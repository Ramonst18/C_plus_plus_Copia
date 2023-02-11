/*10. Programa que calcule el valor de: 1!+2!+3!+...+n!*/

#include<iostream>

using namespace std;

int main(){
    //variable a utilizar
    int numero, factorial = 1, suma = 0;

    //pedimos los valores
    cout<<"Digite la cantidad de factoriales a sumar: ";
    cin>>numero;

    //realizamos los calculos
    for (int i = 1; i <= numero; i++)
    {
        //obtenemos el factorial
        factorial *= i;

        suma += factorial;
    }
    
    //imprimimos los resultados
    cout<<"La suma de los factoriales es: "<<suma;

    return 0;
}