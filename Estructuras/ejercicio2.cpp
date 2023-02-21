/*2. Hacer una estructura llamada alumno
en la cual se tendran los siguientes campos:
Nombre, edad, promedio,
pedir los datos al usuario para 3 alumnos,
comprobar cual de los 3 tiene el mejor promedio y
posteriormente imprimir los datos del alumno*/

#include<iostream>
#include<string.h>

using namespace std;

struct alumno
{
    char nombre[30];
    int edad;
    double promedio;
}alumnos[3];



int main(){
    //variables a utilizar
    int promedioAlto = 0, posicion;

    //pedimos los datos de los alumnos
    for (int i = 0; i < 3; i++)
    {
        fflush(stdin);  //vacioamos el buffer
        cout<<"Nombre: ";
        cin.getline(alumnos[i].nombre, 30, '\n');
        cout<<"Edad: ";
        cin>>alumnos[i].edad;
        cout<<"Promedio: ";
        cin>>alumnos[i].promedio;
    }
    
    //comprobamos quien tiene el mejor promedio
    for (int i = 0; i < 3; i++)
    {
        //comprobamos si el promedio es el mas alto
        if (promedioAlto < alumnos[i].promedio)
        {
            promedioAlto = alumnos[i].promedio;
            posicion = i;
        }
        
    }
    
    //Imprimimos los datos del alumno con mejor promedio
    cout<<"\nAlumno con mejor promedio\n";
    cout<<"Nombre: "<<alumnos[posicion].nombre<<endl;
    cout<<"Promedio: "<<alumnos[posicion].promedio<<endl;
    cout<<"Edad: "<<alumnos[posicion].edad<<endl;

    return 0;
}