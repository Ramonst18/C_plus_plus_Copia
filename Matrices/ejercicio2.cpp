/*2. Realiza un programa que defina una matriz de 3x3 y escriba un ciclo
para que muestre la diagonal principal de la matriz*/
#include<iostream>

using namespace std;

int main(){
    //variables
    int numeros[3][3] = {3,3,3 , 2,2,2 , 1,1,1};

    //imprimir valores
    for (int i = 0; i < 3; i++)
    {
        cout<<numeros[i][i];
    }
    
    

    return 0;
}