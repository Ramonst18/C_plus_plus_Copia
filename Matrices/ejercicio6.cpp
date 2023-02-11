/*6. Programa que calcule la suma de dos matrices cuadradas de 3x3*/
#include<iostream>
#include<math.h>

using namespace std;

int main(){
    //variables a utilizar
    int matriz1[3][3], matriz2[3][3], matrizR[3][3];

    //llenamos las matrizes
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz1[i][j] = rand()%10;
            matriz2[i][j] = rand()%10;
        }
        
    }

    //realizamos la suma de matrices
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrizR[i][j] = matriz1[i][j] + matriz2[i][j];
        }
        
    }

    //imprimimos las matrices
    cout<<"Matriz 1"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<matriz1[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"Matriz 2"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<matriz2[i][j]<<" ";
        }
        cout<<"\n";
        
    }

    cout<<"Matriz R"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<matrizR[i][j]<<" ";
        }
        cout<<"\n";
    }
}