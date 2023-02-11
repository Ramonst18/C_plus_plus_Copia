/*3. Realice un programa que calcule y muestre en la salida estandar la suma
de los cuadrados de los 10 primeros enteros mayores que cero.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    //variables a utilizar
    int suma = 0, cuadrado;

    //sacamos los cuadrados de los numeros
    for (int i = 1; i <= 10; i++)
    {
        cuadrado = i * i;
        suma += cuadrado;
    }
    
    //imprimimos los resultados
    cout<<"La suma de los cuadrados es: "<<suma;

    getch();

    return 0;
}