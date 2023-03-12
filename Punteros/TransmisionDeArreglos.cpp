/*Transmision de arreglos

Ejemplo: Hallar el maximo elemento de un arreglo
*/

#include<iostream>

using namespace std;

//prototipo
int hallarMax(int *, int);  //pasamos la primera posicion del arreglo en memoria y su tamaño

int main(){
    const int nElementos = 5;
    int numeros[nElementos] = {3, 5, 2, 8, 1};

    cout<<"El mayor elemento es: "<<hallarMax(numeros, nElementos);

    return 0;
}

int hallarMax(int *dirVec, int nElementos){
    int max = 0;

    //Nota: estamos usando el dirVec+i ya que no modificaremos el puntero del arreglo,
    //solo estaremos accediendo a un proximo valor dependiendo del valor de i.
    //es como si estuvieramos usando numeros[i] que es igual a *(dirVec+i)

    //recorremos el arreglo
    for (int i = 0; i < nElementos; i++)
    {
        //preguntamos si el valor en la posicion en memoria es mayor al maximo
        if (*(dirVec+i) > max)
        {
            max = *(dirVec+i);
        }
        
    }

    return max;
    
}