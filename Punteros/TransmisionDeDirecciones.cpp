/*Transmision de direcciones

Ejemplo: Intercambiar el valor de 2 variables.
*/

#include<iostream>

using namespace std;

void intercambio(float *, float *); 
//con el * estamos indicando que pasaremos las direcciones de memoria a los argumentos de la funcion

int main(){
    //variables a utilizar
    float num1 = 20.8, num2 = 6.78;

    //imprimimos los valores iniciales
    cout<<"Primer numero: "<<num1<<endl;
    cout<<"Segundo numero: "<<num2<<endl;

    //manera de pasar la direccion de memoria, no poner directamente las variables ya que se pasaran los valores
    intercambio(&num1, &num2);

    //imprimimos los valores finales
    cout<<endl<<"Despues del intercambio: "<<endl;
    cout<<"Nuevo valor de num1: "<<num1<<endl;
    cout<<"Nuevo valor de num2: "<<num2<<endl;

    return 0;
}


void intercambio(float *dirNm1, float *dirNm2){
    float aux;

    //realizamos el intercambio
    aux = *dirNm1;
    *dirNm1 = *dirNm2;
    *dirNm2 = aux;
}