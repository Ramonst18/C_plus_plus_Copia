/*7. Desarrollar un programa que determine si una matriz es simetrica o no.
Una matriz es simetrica si es cuadrada y si es igual a su matriz transpuesta

|8 1 3|     |8 1 3|
|1 7 4| --> |1 7 4|
|3 4 9|     |3 4 9|
*/
#include<iostream>

using namespace std;

int main(){
    //variables a utilizar
    int numeros[100][100], filas, columnas;
    char band = 'F';

    //pedimos los datos
    cout<<"Digite el numero de filas: ";
    cin>>filas;
    cout<<"Digite el numero de columnas: ";
    cin>>columnas;

    //rellenamos la matriz
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
            cin>>numeros[i][j];
        }
        
    }

    //VERIFICAMOS SI ES SIMETRICa
    //verificamos que sean iguales filas y columnas
    if (filas==columnas)
    {
        //verificamos si es transpuesta
        for (int i = 0; i < filas; i++)
        {
            for (int j = 0; j < columnas; j++)
            {
                if(numeros[i][j] == numeros[j][i]){
                    band = 'V';
                }else{
                    band = 'F';
                    break;
                }
            }
            if(band == 'F'){
                break;
            }
        }
        
    }
    
    if (band == 'V')
    {
        cout<<"La matriz es simetrica";
    }else{
        cout<<"La matriz no es simetrica";
    }
    

    return 0;
}
