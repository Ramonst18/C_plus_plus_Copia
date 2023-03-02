/*15. Desarrollar una funcion que determine si una matriz es simetrica
o no.

Una matriz es simetrica: A = A^t

- La matriz debe ser cuadrada.
- Aij = Aji

2  5   9        2  5   9
5  8  -1    ->  5  8  -1
9 -1  10        9 -1  10

*/

#include <iostream>

using namespace std;

void pedirDatos();
void comprobarSImetria(int[][100], int, int);

int m[100][100], nfilas, ncol;

int main()
{
    pedirDatos();
    comprobarSImetria(m, nfilas, ncol);

    return 0;
}

void pedirDatos()
{
    // Pedimos las filas y columnas
    cout << "Digite el numero de filas: ";
    cin >> nfilas;
    cout << "Digite el numero de columnas: ";
    cin >> ncol;

    // llenamos la matriz con los numeros
    for (int i = 0; i < nfilas; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            cout << "Digite un numero [" << i << "][" << j << "]: ";
            cin >> m[i][j];
        }
    }
}

void comprobarSImetria(int m[][100], int nfilas, int ncol)
{
    int cont = 0;

    // preguntamos si posee el mismo numero de filas y columnas
    if (nfilas == ncol)
    {

        // Recorremos la matriz
        for (int i = 0; i < nfilas; i++)
        {
            for (int j = 0; j < ncol; j++)
            {
                //verificamos que haya simetria en la matriz
                if (m[i][j] == m[j][i])
                {
                    cont++;
                }
                
            }
        }
    }

    //verificamos si el cont es igual al resultado de la multiplicacion de filas por columnas
    //ya que su multiplicacion nos da la cantidad de elementos que hay en la matriz
    // y con es las veces que hubo simetria en la matriz
    if (cont == nfilas*ncol)
    {
        cout<<"La matriz es simetrica";
    }else{
        cout<<"La matriz NO es simetrica";
    }
    
}