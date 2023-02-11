/*6. Escriba un programa que calcule x^y, donde tanto x como y son enteros
positivos, sin utilizar la funcion pow*/

#include<iostream>

using namespace std;


int main(){
    //variables de numeros a utilizar
    int x, y, suma = 1;

    //pedimos los valores
    cout<<"Digite el numero x: ";
    cin>>x;
    cout<<"Digite el numero y: ";
    cin>>y;

    //Realizamos el calculo de x
    for (int i = 1; i <= y; i++)
    {
        suma *= x;
    }
    
    //imprimimos los resultados
    cout<<"El resultado es: "<<suma;

    return 0;
}