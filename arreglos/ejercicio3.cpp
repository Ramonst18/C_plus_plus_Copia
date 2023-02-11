/*3. Escribe un programa que lea de la entrada estandar un vector de numeros
y muestre en la salida estandar los numeros del vector y sus indices
asociados.*/

#include<iostream>

using namespace std;


int main(){
    //variables a utilizar
    int numeros[100], n;

    //pedimos los datos
    cout<<"Digite el numero de elementos que va a tener el arreglo: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        //guardamos cada elemento en el arreglo
        cout<<"Digite un numero: ";
        cin>>numeros[i];
    }
    
    //mostramos los elementos
    for (int i = 0; i < n; i++)
    {
        cout<<i<<" -> "<<numeros[i]<<endl;
    }
    

    return 0;
}