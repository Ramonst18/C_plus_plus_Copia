/*4. Programa que defina un vector de numeros y muestre en la salida
estandar el vector en orden inverso - del ultimo al primer elemento*/

#include<iostream>

using namespace std;

int main(){
    //variables a utilizar
    int numeros[100], n;

    //pedimos la cantidad de numeros
    cout<<"Digite la cantidad de numeros a almacenar: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        //guardamos los valores en el arreglo de numeros
        cout<<"Digite un numero: ";
        cin>>numeros[i];
    }

    //imprimimos los datos en manera inversa
    for (int i = (n - 1); i >= 0; i--)
    {
        cout<<i<<" -> "<<numeros[i]<<endl;
    }

    return 0;
}