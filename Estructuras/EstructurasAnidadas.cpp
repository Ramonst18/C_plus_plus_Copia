//Estructuras Anidadas en C++

#include<iostream>

using namespace std;

struct info_direccion{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

struct empleado
{
    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;
}empleados[2];  //asi creamos un arreglo de una estructura de tipo empleado

/*Nota: Cuando se pide cadena de caracteres, vamos a llegar a un punto en donde
el buffer se llena, entonces nosotros debemos de 'vaciarlo'*/

int main(){
    //pedimos los datos de los empleados
    for (int i = 0; i < 2; i++)
    {
        fflush(stdin);  //vaciar el buffer y permitir digitar los valores
        cout<<"Digite su nombre: ";
        cin.getline(empleados[i].nombre,20,'\n');
        cout<<"Digite su direccion: ";
        cin.getline(empleados[i].dir_empleado.direccion, 30, '\n');
        cout<<"Digite su ciudad: ";
        cin.getline(empleados[i].dir_empleado.ciudad, 20, '\n');
        cout<<"Digite su provincia: ";
        cin.getline(empleados[i].dir_empleado.provincia, 20, '\n');
        cout<<"Digite su salario: ";
        cin>>empleados[i].salario;
        cout<<'\n';
    }
    
    //imprimimos los datos
    for (int i = 0; i < 2; i++)
    {
        cout<<"Nombre: "<<empleados[i].nombre;
        cout<<"Direccion: "<<empleados[i].dir_empleado.direccion;
        cout<<"Ciudad: "<<empleados[i].dir_empleado.ciudad;
        cout<<"Provincia: "<<empleados[i].dir_empleado.provincia;
        cout<<"Salario: "<<empleados[i].salario;
    }
    

    return 0;
}