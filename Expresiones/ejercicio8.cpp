/*8. Programa que lea de la entrada estandar los dos catertos de un triangulo
rectangulo y escriba en la salida su hipotenusa*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){

    //variables a utilizar
    float cateto1, cateto2, hipotenusa = 0;

    //pedimos los datos
    cout<<"Digite el primer cateto: "; cin>>cateto1;
    cout<<"Digite el segundo cateto: "; cin>>cateto2;

    //realizamos los calculos
    hipotenusa = sqrt( pow( cateto1 , 2 ) + pow( cateto2 , 2) );

    //imprimimos resultados
    cout<<"La hipotenusa es: "<<hipotenusa;

    return 0;
}