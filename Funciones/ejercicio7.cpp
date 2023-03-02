/*7. Intercambiar el valor de 2 variables utilizando el paso de parametros
por referencia.*/

#include<iostream>
using namespace std;

void intercambiar(int&, int&);

int main(){
    //variables a utilizar
    int num1 = 10, num2 = 15;

    //imprimimos los datos
    cout<<"El valor de num1 es: "<<num1<<endl;
    cout<<"El valor de num2 es: "<<num2<<endl;

    intercambiar(num1, num2);

    //imprimimos los resultados
    cout<<"El nuevo valor de num1 es: "<<num1<<endl;
    cout<<"El nuevo valor de num2 es: "<<num2<<endl;

    return 0;
}

void intercambiar(int& num1, int& num2){
    //variable auxiliar
    int aux;

    //realizamos el cambio de numeros
    aux = num1;
    num1 = num2;
    num2 = aux;

}