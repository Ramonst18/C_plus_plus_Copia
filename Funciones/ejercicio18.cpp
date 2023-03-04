/*18. Escriba una funcion en c++ llamada mayor()
que devuelva la fecha mas reciente de cualquier
par de fechas que se le transmitan. Por ejemplo,
si se transmiten las fechas 10/9/2005 y 11/3/2015
a mayor(), sera devuelta la segunda fecha*/

#include<iostream>
#include<string.h>

using namespace std;

struct Fecha{
    int dia;
    int mes;
    int anio;
    
}fechas[2];

Fecha mayor(Fecha, Fecha, bool&);
void pedirDatos();
void imprimirResultados(Fecha, bool&);

int main(){
    bool igual = false;
    pedirDatos();
    Fecha fecha = mayor(fechas[0], fechas[1], igual);
    imprimirResultados(fecha, igual);

    return 0;
}

Fecha mayor(Fecha fecha1, Fecha fecha2, bool& igual){
    //primero comparamos el año
    if (fecha1.anio > fecha2.anio)
    {
        return fecha1;
    }else if (fecha2.anio > fecha1.anio)
    {
        return fecha2;
    }
    
    //comparamos los meses
    if (fecha1.mes > fecha2.mes)
    {
        return fecha1;
    } else if (fecha2.mes > fecha1.mes)
    {
        return fecha2;
    }
    
    //comparamos los dias
    if (fecha1.dia > fecha2.dia)
    {
        return fecha1;
    }else if (fecha2.dia > fecha1.dia)
    {
        return fecha2;
    }else{
        igual = true;
    }

    return fecha1;
}

void pedirDatos(){
    
    //pedimos los datos de las fechas
    for (int i = 0; i < 2; i++)
    {
        cout<<"Digite el dia de la fecha n"<<i+1<<" : ";
        cin>>fechas[i].dia;

        cout<<"Digite el mes de la fecha n"<<i+1<<" : ";
        cin>>fechas[i].mes;

        cout<<"Digite el año de la fecha n"<<i+1<<" : ";
        cin>>fechas[i].anio;
    }
    
}

void imprimirResultados(Fecha fecha, bool& igual){
    if (igual)
    {
        cout<<"Las fechas son iguales"<<endl;
    }else{
        cout<<"La fecha mayor es: "<<fecha.dia<<"/"<<fecha.mes<<"/"<<fecha.anio<<endl;
    }
    
}