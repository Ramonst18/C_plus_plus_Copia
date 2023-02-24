/*Ejercicio 1: Escriba una funcion llamada mult() que acepte dos numeros
en punto flotante como parametros, multiplique estos dos numeros y despliegue el
resultado*/

#include<iostream>

using namespace std;

//Prototipos de Funciones
void pedirDatos();
void mult(float x, float y);

int main(){

    pedirDatos();

    return 0;
}


//Definiciones de funciones
void pedirDatos(){
    //variables a utilizar
    float num1, num2;

    //pedimos los numeros
    cout<<"Digite 2 numeros: ";
    cin>>num1>>num2;

    mult(num1, num2);
}

void mult(float x, float y){
    //variables a utilizar
    float resultado = x * y;

    //imprimimos los resultados
    cout<<"El resultado de la multiplicacion es: "<<resultado;
}