/*8. Programa que lea 5 numeros en un arreglo, los copie a otro arreglo
multiplicados por 2 y muestre el segundo arreglo.*/

#include<iostream>

using namespace std;

int main(){
    //variables a utilizar
    int numeros1[5], numeros2[5];

    //pedimos los numeros al usuario
    for (int i = 0; i < 5; i++)
    {
        cout<<i+1<<". Digite un numero: ";
        cin>>numeros1[i];
    }

    //realizamos la multiplicacion y guardado en el arreglo numeros2
    for (int i = 0; i < 5; i++)
    {
        numeros2[i] = numeros1[i] * 2;
    }

    //imprimimos los resultados
    for (int i = 0; i < 5; i++)
    {
        cout<<numeros2[i]<<endl;
    }

    return 0;
}