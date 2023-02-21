//Estructura Básica en C++

#include<iostream>

using namespace std;

//creamos una esctructura
struct Persona
{
    char nombre[20];
    int edad;
}
persona1 = {"Alejandro", 20},
persona2 = {"Fer", 15},
persona3;  //Podemos agregar los datos desde el inicio



int main(){
    //imprimimos los datos de las estructuras
    cout<<"Nombre1: "<<persona1.nombre<<endl;
    cout<<"Edad1: "<<persona1.edad<<endl;

    cout<<"\nNombre2: "<<persona2.nombre<<endl;
    cout<<"Edad2: "<<persona2.edad<<endl;

    //pedimos los datos para la tercera persona
    cout<<"\nNombre: ";
    cin.getline(persona3.nombre,20,'\n');
    cout<<"Edad: ";
    cin>>persona3.edad;

    //imprimimos los datos de la persona 3
    cout<<"\nImprimiendo datos";
    cout<<"Nombre: "<<persona3.nombre<<endl;
    cout<<"Edad: "<<persona3.edad<<endl;


    return 0;
}