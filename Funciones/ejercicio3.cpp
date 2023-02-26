/*Ejercicio 3: Escriba una funcion nombrada funpot() que eleve un numero
entero que se le transmita a una potencia en numero entero positivo y
despliegue el resultado. El numero entero positivo debera ser el segundo
valor transmitido a la funcion*/

#include<iostream>

using namespace std;

//Prototipos de Funciones
void pedirDatos();
void funpot(int x, int y);

int main(){
    pedirDatos();

    return 0;
}

//Definicion de funciones
void pedirDatos(){
    //variables a utilizar
    int numero, exponente;

    //pedimos los datos
    cout<<"Digite un numero: ";
    cin>>numero;
    cout<<"Digite el exponente de elevacion: ";
    cin>>exponente;

    funpot(numero, exponente);
}

void funpot(int x, int y){
    //variables
    long resultado = 1;

    //realizamos la elevacion
    for (int i = 1; i <= y; i++)
    {
        resultado = resultado * x;
    }

    //imprimimos los resultados
    cout<<"El resultado es: "<<resultado;
    
}