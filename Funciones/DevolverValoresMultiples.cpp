//Devolver valores múltiples

//Sumar y multiplicar 2 numeros

#include<iostream>

using namespace std;

//Ejemplo de pasar valores por valor y valores por referencia
void calcular(int, int, int&, int&);

int main(){
    //variables a utilizar
    int num1, num2, suma = 0, producto = 0;

    cout<<"Digite 2 numeros: ";
    cin>>num1>>num2;

    calcular(num1, num2, suma, producto);

    cout<<"El valor de la suma es: "<<suma<<endl;
    cout<<"El valor de la multiplicacion es: "<<producto<<endl;
    
    return 0;
}

void calcular(int num1, int num2, int& suma, int& producto){
    suma = num1 + num2;
    producto = num1 * num2;
}