/*8. Programa que calcule el valor de: 1+3+5+...+2n-1*/

#include<iostream>

using namespace std;

int main(){
    //variables
    int n, suma = 0;

    //pedimos los valores
    cout<<"Digite la cantidad de valores a sumar: ";
    cin>>n;

    //realizamos la suma de los valores
    for (int i = 1; i <= n; i++)
    {
        suma += ( i * 2 ) - 1;
    }
    
    //imprimimos los resultados
    cout<<"El resultado de la sumatoria es: "<<suma<<endl;


    return 0;
}