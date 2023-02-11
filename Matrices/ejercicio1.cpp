/*1. Hacer un programa para rellenar una matriz pidiendo al usuario el numero de filas
y columnas, Posteriormente mostrar la matriz en pantalla*/

#include<iostream>

using namespace std;

int main(){
    //variables a utilizar
    int numeros[100][100], filas, columnas;

    //pedimos los datos
    cout<<"Digite el numero de filas: ";
    cin>>filas;
    cout<<"Digite el numero de columnas: ";
    cin>>columnas;

    //llenamos la matriz
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            //pedimos los datos a llenar en la matriz
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
            cin>>numeros[i][j];
        }
        
    }
    
    //imprimimos los datos
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout<<numeros[i][j];
        }
        cout<<"\n";
        
    }
    

    return 0;
}