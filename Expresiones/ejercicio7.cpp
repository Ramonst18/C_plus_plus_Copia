/*7. La calificacion final de un estudiante es la media ponderada de tres notas:
La nota de practicas que cuenta un 30% del total, la nota teorica que cuenta un 
60% y la nota de participacion que cuenta el 10% restante. Escriba un programa 
que lea de la entrada estandar las tres notas de un alumno y escriba en la 
salida estandar su nota final*/

#include<iostream>

using namespace std;

int main(){

    //variables a utilizar
    float practicas, teorica, participacion, nota_final = 0;

    //pedimos las notas
    cout<<"Digite la nota de practica: "; cin>>practicas;
    cout<<"Digite la nota teorica: "; cin>>teorica;
    cout<<"Digite la nota de participacion: "; cin>>participacion;

    //realizamos los calculos
    practicas = practicas * 0.30;   //Manera 1
    teorica *= 0.60;                //Manera 2
    participacion *= 0.10;

    nota_final = practicas + teorica + participacion;

    cout<<"La nota final es: "<<nota_final;

    return 0;
}