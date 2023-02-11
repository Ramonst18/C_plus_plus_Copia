//7. Escriba un programa que calcule el valor de: 1+2+3+...+n

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    //variables a utilizar
    int n, suma = 0;

    //pedimos los datos
    cout<<"Digite el numero de elementos: ";
    cin>>n;

    //realizamos la sumatoria de valors
    for (int i = 1; i <= n; i++)
    {
        suma += i;
    }
    
    //imprimimos resultados
    cout<<"La suma es: "<<suma<<endl;

    getch();

    return 0;
}