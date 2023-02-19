//Busqueda binaria
//Debe de estar el arreglo ordenado en orden ascendente

#include<iostream>

using namespace std;

int main(){
    //variables a utilizar
    int numeros[] = {1, 2, 3, 4, 5};
    int inf, sup, mitad, dato;
    char band = 'F';

    dato = 4;

    //Algoritmo de la busqueda binaria
    inf = 0;    //posicion de inicio
    sup = 5;    //Numero de elementos del arreglo

    while(inf <= sup){
        //sacamos la mitad
        mitad = (inf+sup)/2;

        //verificamos si llegamos al dato
        if (numeros[mitad] == dato)
        {
            band = 'V';

            //salidos del while
            break;
        }

        //verificamos si el valor en la mitad es mayor al dato
        if (numeros[mitad] > dato)
        {
            sup = mitad;
            mitad = (inf + sup) / 2;
        }

        //verificamos si el valor en la mitad es menor al dato
        if (numeros[mitad] < dato)
        {
            inf = mitad;
            mitad = (inf + sup) / 2;
        }
        
        //imprimimos los resultados
        if(band == 'V'){
            cout<<"El numero a sido encontrado en la posicion: "<<mitad<<endl;
        }else{
            cout<<"El numero no fue encontrado en el arreglo"<<endl;
        }
    }

    return 0;
}