/*5. Desarrole un programa que lea de la entrada estandar un vector de enteros
y determine el mayor elemento del vector.*/

#include<iostream>

using namespace std;

int main(){
    //variables a utilizar
    int numeros[100], n, mayor = 0;

    //pedimos el numero de elementos del arreglo: 
    cout<<"Digite el numero de elementos del arreglo: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        //pedimos los elementos del arreglo
        cout<<i+1<<". Digite un numero: ";
        cin>>numeros[i];

        //verificamos si el numero que entro es el mayor
        if (numeros[i] > mayor)
        {
            mayor = numeros[i];
        }
        
    }
    
    //imprimimos los resultados
    cout<<"El mayor elemento del vector es: "<<mayor<<endl;

    return 0;
}