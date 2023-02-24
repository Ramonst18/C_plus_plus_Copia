//Ejemplo encontrar el mayor de 2 numeros

#include<iostream>

using namespace std;

//Nota: Se tiene que definir primero el prototipo de la funcion
//despues viene la definicion.
//La funcion se declara de la siguiente forma: valor a regresar, nombre y parametros
//Prototipo de funcion
int encontrarMax(int x, int y);


int main(){
    //variables a utilizar
    int n1, n2;
    int mayor;
    cout<<"Digite 2 numeros: ";
    cin>>n1>>n2;

    //llamamos a la funcion
    mayor = encontrarMax(n1, n2);

    //imprimimos los resultados
    cout<<"El mayor de los 2 numeros es: "<<mayor<<endl;

    return 0;
}

//Definicion de funcion
int encontrarMax(int x, int y){
    /*Funcion que nos sirve para encontrar el numero mayor*/
    int numMax;

    //realizamos la comparacion
    if (x > y)
    {
        numMax = x;
    }else{
        numMax = y;
    }

    //regresamos el valor
    return numMax;
}