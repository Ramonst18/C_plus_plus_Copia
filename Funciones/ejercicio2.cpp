/*2. Escriba una funcion llamada al_cuadrado() que calcule el
cuadrado del valor que se le transmite y despliegue el resultado.
La función deberá ser capaz de elevar al cuadrado números flotantes.*/

#include<iostream>

using namespace std;

//Prototipos de funcion
void al_cuadrado(float x);

int main(){
    //variables a utilizar
    float num;

    //pedimos el numero
    cout<<"Digite el numero que desea sacar su cuadrado: ";
    cin>>num;

    al_cuadrado(num);

    return 0;
}
void al_cuadrado(float x){
    //realizamos la ecuacion
    float resultado = x * x;


    //Imprimimos los resultados
    cout<<"El numero al cuadrado de "<<x<<" es: "<<resultado<<endl;
}
