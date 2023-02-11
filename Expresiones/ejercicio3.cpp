//3. Escribe la siguiente expresion como expresion en c++

#include<iostream>

using namespace std;

int main(){

    //variables de numeros
    float a, b, c, d, e, f, resultado = 0;

    //pedimos numeros al usuario
    cout<<"Digite un numero para a: "; cin>>a;
    cout<<"Digite un numero para b: "; cin>>b;
    cout<<"Digite un numero para c: "; cin>>c;
    cout<<"Digite un numero para d: "; cin>>d;
    cout<<"Digite un numero para e: "; cin>>e;
    cout<<"Digite un numero para f: "; cin>>f;

    //realizamos la operacion
    resultado = ( a + ( b / c) ) / ( d + ( e / f));

    //imprimimos el resultado
    cout<<"\nEl resultado es: "<<resultado<<endl;

    return 0;
}