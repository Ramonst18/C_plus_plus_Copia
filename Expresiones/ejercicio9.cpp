/*9. Realice un programa que calcule el valor que toma la siguiente funcion
para unos valores dados de x e y*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){

    //variables a usar
    float x, y, resultado = 0;

    //pedimos los datos
    cout<<"Digite el valor de x: "; cin>>x;
    cout<<"Digite el valor de y: "; cin>>y;

    //realizamos las operaciones
    resultado = ( sqrt(x) ) / ( pow( y, 2 ) - 1 ) ;

    //imprimimos los resultados
    cout<<"El resultado es: "<<resultado<<endl;

    return 0;
}