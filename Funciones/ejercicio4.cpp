/*4. Porgrama que devuelva la parte fraccionaria de cualquier numero
introducido por el usuario.
Por ejemplo, si se introduce el numero 256.879, deberia desplegarse
el numero 0.879*/
#include<iostream>

using namespace std;

//Prototipo de funciones
void pedirDatos();
void regresarDecimal(double numero);

int main(){
    pedirDatos();


    return 0;
}


//Definicion de funciones
void pedirDatos(){
    //variables a utilizar
    double numero;

    //pedimos el numero
    cout<<"Digite un numero: ";
    cin>>numero;

    regresarDecimal(numero);
}

void regresarDecimal(double numero){
    //variables a utilizar
    double resultado;
    int entero;

    entero = (int)numero;
    resultado = numero - entero;

    //imprimimos los resultados
    cout<<"La parte fraccionaria es: "<<resultado;
}