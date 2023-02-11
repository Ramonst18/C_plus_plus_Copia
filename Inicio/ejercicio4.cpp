/*4. Ejecutar el programa del ejercicio anterior con entradas erroneas y observe los resultados
Por ejemplo, introduzca un dato de tipo caracter cuando se espera un dato de tipo entero*/

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