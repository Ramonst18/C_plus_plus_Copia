/*12. Programa que calcule el resultado de la siguiente expresion:
1 - 2 + 3 - 4 + 5 - 6 ... n*/

#include<iostream>

using namespace std;


int main(){
    //variables
    int numero, suma = 0;

    //pedimos los valores
    cout<<"Digite la cantidad de numeros a utilizar: ";
    cin>>numero;

    //realizamos los calculos
    for (int i = 1; i <= numero; i++)
    {
        
        if ( i%2==0 )
        {
            suma -= i;
        }else{
            suma += i;
        }
        
    }
    
    //imprimimos los resultados
    cout<<"El resultado de la suma es: "<<suma<<endl;


    return 0;
}