//Paso de parametros de tipo estructura

#include<iostream>

using namespace std;

struct Persona{
    char nombre[30];
    int edad;
}p1;

//Prototipo
void pedirDatos();
void mostrarDatos(Persona);     
//NOTA: para pasar datos desde parametros, debemos de poner el tipo de parametro de la estructura
//en este caso es una estructura de tipo Persona

int main(){
    pedirDatos();
    mostrarDatos(p1);

    return 0;
}

void pedirDatos(){
    cout<<"Digite su nombre: ";
    cin.getline(p1.nombre, 30, '\n');
    cout<<"Digite su edad: ";
    cin>>p1.edad;
}

void mostrarDatos(Persona p){
    cout<<endl<<"Nombre: "<<p.nombre<<endl;
    cout<<"Edad: "<<p.edad<<endl;
}