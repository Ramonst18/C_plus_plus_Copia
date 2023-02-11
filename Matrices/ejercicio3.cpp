/*3. Hacer una matriz de tipo entera de 2 * 2, llenarla de numeros y luego
copar todo su contenido hacia otra matriz.*/

#include<iostream>

using namespace std;

int main(){
    //variables a usar
    int numeros[2][2] = {{1,2},{3,4}};
    int matriz2[2][2];

    //pasamos los datos de la matriz 1 a la matriz 2
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matriz2[i][j] = numeros[i][j];
        }
        
    }
    

    //mostramos resultados
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<matriz2[i][j];
        }
        cout<<"\n";
    }

    return 0;
}