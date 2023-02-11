//9. Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial)

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    //variables a utilizar
    int numero, factorial = 1;

    //pedimos los datos
    cout<<"Digite un numero: ";
    cin>>numero;

    //sacamos el factorial
    for (int i = 1; i <= numero; i++)
    {
        factorial *= i;
    }
    

    //Imprimimos los resultados
    cout<<"El factorial del numero es: "<<factorial<<endl;

    system("pause");
    return 0;
}