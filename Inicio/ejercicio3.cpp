/*3. Realice un programa que lea de la entrada estandar los siguientes datos de 
una persona:
    Edad: dato de tipo entero
    Sexo: dato de tipo caracter
    Altura en metros: dato de tipo real
    
Tras leer los datos, el programa debe mostrarlos en la salida estandar*/

#include<iostream>

using namespace std;

int main(){

    //variables que usaremos
    int edad;
    float altura;
    char sexo[10];      //tenemos que asignar los espacios ya que char solo recibe un caracter

    //pedimos los datos
    cout<<"Digite su edad: "; cin>>edad;
    cout<<"Digite su sexo: "; cin>>sexo;
    cout<<"Digite su altura en metros: "; cin>>altura;

    //realizamos la impresion de los datos
    cout<<"\nEdad: "<<edad<<endl;
    cout<<"Sexo: "<<sexo<<endl;
    cout<<"Altura: "<<altura<<endl;


    return 0;
}