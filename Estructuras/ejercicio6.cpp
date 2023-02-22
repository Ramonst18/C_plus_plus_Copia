/*6. Utiliza las 2 estrucutras del problema 5, pero ahora pedir los datos
para N alumnos, y calcular cual de todos tiene el mejor promedio
, e imprimir sus datos*/

#include<iostream>

using namespace std;

struct Promedio
{
    float nota1;
    float nota2;
    float nota3;
    float promedio;
};

struct Alumno
{
    char nombre[20];
    char sexo[10];
    int edad;
    struct Promedio prom;
}alumnos[50];



int main(){
    int numAlumnos, posMayorPromedio;
    float promMayor = 0;

    //Pedimos la cantidad de alumnos
    cout<<"Digite la cantidad de alumnos: ";
    cin>>numAlumnos;

    //pedimos los datos de los alumnos y sus calificaciones
    for (int i = 0; i < numAlumnos; i++)
    {
        fflush(stdin);
        //pedimos los datos del alumno
        cout<<i+1<<". Nombre: ";
        cin.getline(alumnos[i].nombre, 20, '\n');
        cout<<i+1<<". Sexo: ";
        cin.getline(alumnos[i].sexo, 10, '\n');
        cout<<i+1<<". Edad: ";
        cin>>alumnos[i].edad;

        //pedimos las notas
        cout<<i+1<<". Nota1: ";
        cin>>alumnos[i].prom.nota1;
        cout<<i+1<<". Nota2: ";
        cin>>alumnos[i].prom.nota2;
        cout<<i+1<<". Nota3: ";
        cin>>alumnos[i].prom.nota3;

        //calculamos el promedio
        alumnos[i].prom.promedio = (alumnos[i].prom.nota1 + alumnos[i].prom.nota2 + alumnos[i].prom.nota3) / 3;

        //verificamos si es el mayor promedio
        if (alumnos[i].prom.promedio > promMayor)
        {
            promMayor = alumnos[i].prom.promedio;
            posMayorPromedio = i;
        }
        
    }

    //imprimimos los datos de la persona con mayor promedio
    cout<<"Nombre: "<<alumnos[posMayorPromedio].nombre<<endl;
    cout<<"Sexo: "<<alumnos[posMayorPromedio].sexo<<endl;
    cout<<"Edad: "<<alumnos[posMayorPromedio].edad<<endl;
    cout<<"Promedio: "<<alumnos[posMayorPromedio].prom.promedio<<endl;
    
    return 0;
}