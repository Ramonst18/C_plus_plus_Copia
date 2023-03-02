/*16. Realice una funcion que dada una matriz y un numero 
de fila de la matriz devuelva el menor de los elementos almacenados
en dicha fila*/

#include<iostream>

using namespace std;

int m[3][3] = {{5, 7, 9}, {2, 9 ,0} ,{3, 1, 7}};

int pedirFila();
int buscarMenorElemento(int [][3],int);
void imprimirResultado(int[][3]);

int main(){
    imprimirResultado(m);


    return 0;
}

int pedirFila(){
    /*Metodo que pedira la fila al usuario*/
    int fila;

    cout<<"Digite la fila: ";
    cin>>fila;

    return fila;
}

int buscarMenorElemento(int m[][3],int fila){
    /*Funcion que nos regresasra el numero menor de una fila*/
    int menor = m[fila][0];

    //buscamos el menor en la matriz en su fila seleccionada
    for (int i = 0; i < 3; i++)
    {
        //comprobamos que el elemento actual ssea menor 
        if(m[fila][i] < menor){
            menor = m[fila][i];
        }
    }

    return menor;
    
}

void imprimirResultado(int m[][3]){
    int fila = pedirFila();
    cout<<"EL numero menor de la fila "<<fila<<" es: "<<buscarMenorElemento(m, fila);
}