/*10. Programa que calcule las soluciones de una ecuacion de segundo grado
de la forma ax^2 + bx + c = 0*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){

    //variables a utilizar
    float a, b, c, resultado = 0;

    //pedimos los datos
    cout<<"Digite el valor de a: "; cin>>a;
    cout<<"Digite el valor de b: "; cin>>b;
    cout<<"Digite el valor de c: "; cin>>c;

    //realizamos el calculo
    resultado = ( -b + ( sqrtl( pow( b, 2 ) - ( 4 * a * c) ) ) ) / ( 2 * a);

    //imprimimos el resultado
    cout<<"El resultado es: "<<resultado;

    return 0;
}