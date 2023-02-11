/*Programa que lea la entrada estandar el precio de un producto y muestre la salida
estandar el precio del producto al aplicarle el IVA*/

#include<iostream>

using namespace std;

int main(){

    //variables que usaremos
    int precio;
    float precioConIva;

    cout<<"Digite el precio del producto: "; cin>>precio;

    //realizamos el calculo
    precioConIva = (precio * 0.16) + precio;

    cout<<"\nEl precio del producto con IVA es: "<<precioConIva; 

    return 0;
}