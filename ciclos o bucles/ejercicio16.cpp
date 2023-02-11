/*16. Programa que calcule la descomposicion en factores primos de un 
numero entero
Por ejemplo: 20 = 2*2*5*/

#include<iostream>
#include<math.h>

using namespace std;


int main(){
    //variables a utilizar
    int numero;

    //pedimos un numero
    cout<<"Digite un numero: ";
    cin>>numero;

    //descomponemos en factores primos
    for (int i = 2; numero > 1; i++)
    {
        //mientras el residuo del numero sea igual a 0
        while(numero%i==0){
            cout<<i<<" ";
            numero /= i;
        }
    }

    return 0;
}
