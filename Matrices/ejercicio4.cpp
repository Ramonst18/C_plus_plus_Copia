/*4. Hacer una matriz preguntando al usuario el numero de filas y columnas,
llenarla de numeros aleatorios, copiar el contenido a otra matriz y
por ultimo mostrarla en pantalla*/
#include<iostream>
#include<math.h>

using namespace std;

int main(){
    //variables
    int filas, columnas;

    //pedimos al usuario las filas y columnas
    cout<<"Digite el numero de filas: ";
    cin>>filas;
    cout<<"Digite el numero de columnas: ";
    cin>>columnas;

    //creamos las matrizes
    int matriz1[filas][columnas];
    int matriz2[filas][columnas];

    //llenamos la matriz de numeros aleatorios
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz1[i][j] = rand()%51;
        }
        
    }

    //copiamos la matriz a la matriz2
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz2[i][j] = matriz1[i][j];
        }
        
    }

    //imprimimos los resultados
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout<<matriz2[i][j]<<" ";
        }
        cout<<"\n";
    }
    

    return 0;
}