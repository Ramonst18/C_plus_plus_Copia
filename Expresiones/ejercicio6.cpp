/*6. Programa que lea la nota final de cuatro alumnos y calcule
la nota final media de los cuatro alumnos*/

#include<iostream>

using namespace std;

int main(){

    //variables que utilizaremos
    float alum1, alum2, alum3, alum4, promedio = 0;

    //pedimos los promedios de los alumnos
    cout<<"Promedio del alumno 1: "; cin>>alum1;
    cout<<"Promedio del alumno 2: "; cin>>alum2;
    cout<<"Promedio del alumno 3: "; cin>>alum3;
    cout<<"Promedio del alumno 4: "; cin>>alum4;

    //realizamos el calculo del promedio
    promedio = ( alum1 + alum2 + alum3 + alum4 ) / 4;

    //imprimimos el promedio
    cout<<"\nLa calificacion promedio es: "<<promedio;

    return 0;
}