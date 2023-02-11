/*5. Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta.
La matriz traspuesta es aquella en la que la columna i era la
fila i de la matriz original

|1 2 3|         |1 4 7|
|4 5 6|  -->    |2 5 8|
|7 8 9|         |3 6 9|

*/

#include<iostream>

using namespace std;

int main(){
    //variables a utilizar
    int numeros[3][3];

    //rellenamos los numeros de la matriz
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
            cin>>numeros[i][j];
        }
        
    }
    
    //imprimimos la matriz original
    cout<<"Matriz original"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<numeros[i][j]<<" ";
        }
        cout<<"\n";
    }

    //hacemos transpuesta a la matriz
    cout<<"Matriz Transpuesta"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            //intercambio de fila a columna y columna a fila
            cout<<numeros[j][i]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}