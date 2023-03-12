/*6. Hacer una función para almacenar N números en un arreglo
dinámico, posteriormente en otra función buscar un número en particular

NOTA: Puede utilizar cualquier método de búsqueda(secuencial o binaria)*/

#include <iostream>
#include <stdlib.h>

void pedirDatos();
void buscarNumero(int *, int);

using namespace std;

// variables globales
int *numeros, nElementos;

int main()
{
    pedirDatos();
    buscarNumero(numeros, nElementos);

    //liberamos la memoria
    delete[] numeros;

    return 0;
}

void pedirDatos()
{
    cout << "Digite la cantidad de elementos del arreglo: ";
    cin >> nElementos;

    // creamos el arreglo dinamico
    numeros = new int[nElementos];

    // llenamos el arreglo
    for (int i = 0; i < nElementos; i++)
    {
        cout << "Digite un numero para [" << i + 1 << "]: ";
        cin >> *(numeros + i);
    }
}

void buscarNumero(int *elementos, int nElementos)
{
    /// variables a utilizar
    int dato, inf = 0, sup = nElementos, mitad;
    char band = 'F';

    //pedimos el dato a buscar
    cout<<"Digite el numero a buscar: ";
    cin>>dato;

    // Algoritmo de la busqueda binaria

    while (inf <= sup)
    {
        // sacamos la mitad
        mitad = (inf + sup) / 2;

        // verificamos si llegamos al dato
        if (*(elementos+mitad) == dato)
        {
            band = 'V';

            // salidos del while
            break;
        }

        // verificamos si el valor en la mitad es mayor al dato
        if (*(elementos+mitad) > dato)
        {
            sup = mitad;
            mitad = (inf + sup) / 2;
        }

        // verificamos si el valor en la mitad es menor al dato
        if (*(elementos+mitad) < dato)
        {
            inf = mitad;
            mitad = (inf + sup) / 2;
        }
    }

    // imprimimos los resultados
    if (band == 'V')
    {
        cout << "El numero a sido encontrado en la posicion: " << mitad + 1 << endl;
    }
    else
    {
        cout << "El numero no fue encontrado en el arreglo" << endl;
    }
    
}
