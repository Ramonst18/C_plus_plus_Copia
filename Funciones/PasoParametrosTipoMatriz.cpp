//Paso de parametros tipo matriz

//Elevar al cuadrado todos los elementos de una matriz

#include<iostream>

using namespace std;

void mostrarMatriz(int m[][3], int, int); //Se deben de poner el numero de columnas maximos
void calcularCuadrado(int m[][3], int, int);
void mostrarMatrizCuadrado(int m[][3], int, int);

int main(){
    //variables consstantes
    const int NFILAS = 2;
    const int NCOL = 3;

    //Matriz 
    int m[NFILAS][NCOL] = {{1, 2, 3}, {4, 5, 6}};

    mostrarMatriz(m, NFILAS, NCOL);
    calcularCuadrado(m, NFILAS, NCOL);
    mostrarMatrizCuadrado(m, NFILAS, NCOL);


    return 0;
}

void mostrarMatriz(int m[][3], int nFIlas, int nCol){
    /*Funcion que imprimira en consola la matriz*/
    cout<<"Mostrando matriz original"<<endl;

    //IMprimimos la matriz
    for (int i = 0; i < nFIlas; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    

}

void calcularCuadrado(int m[][3], int nfilas, int ncol){
    /*Funcion que sacara el cuadrado de cada numero de la funcion*/
    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            m[i][j] *= m[i][j];
        }
        
    }
    
}

void mostrarMatrizCuadrado(int m[][3], int nFIlas, int nCol){
    /*Funcion que imprimira en consola la matriz*/
    cout<<"Mostrando matriz al cuadrado"<<endl;

    //IMprimimos la matriz
    for (int i = 0; i < nFIlas; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    

}