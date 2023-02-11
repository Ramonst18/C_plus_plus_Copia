//4. Escribe la siguiente expresion como expresion en c++

#include<iostream>

using namespace std;

int main(){

    //variables que usaremos
    float a, b, c, d, resultado = 0;

    //Pedimos los valores para las variables
    cout<<"Digite el valor para a: "; cin>>a;
    cout<<"Digite el valor para b: "; cin>>b;
    cout<<"Digite el valor para c: "; cin>>c;
    cout<<"Digite el valor para d: "; cin>>d;

    //realizamos la operacion
    resultado = a + ( b / ( c - d ) );

    //imprimimos el resultado
    cout<<"\nEl resultado es: "<<resultado;

    return 0;
}