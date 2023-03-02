/*10. Escriba una funcion nombrada calc_anios() que tenga un parametro
entero que represente el numero total de dias desde la fecha 1/1/2000
y parametros de referencia nombrados anio, mes y dia. La funcion es calcular
año, mes y dia actual, para el numero dado de dias que se le transmitan.
Para este problema suponga que cada año tiene 365 dias y cada mes
tiene 30 dias*/

#include<iostream>

using namespace std;

void calc_anios(int, int&, int&, int&);

int main(){
    //variables a utilizar
    int diasTotal, anios, meses, dias;

    //pedimos los dias
    cout<<"Digite la cantidad de dias totales: ";
    cin>>diasTotal;

    calc_anios(diasTotal, anios, meses, dias);

    //imprimimos los resultados
    cout<<"Años: "<<anios<<endl;
    cout<<"Meses: "<<meses<<endl;
    cout<<"Dias: "<<dias<<endl;
}

void calc_anios(int diasTotal, int& anios, int& meses, int& dias){
    //calculamos los años
    anios = diasTotal / 365;
    diasTotal %= 365;

    //calculamos los meses
    meses = diasTotal / 30;
    diasTotal %= 30;

    //calculamos los dias
    dias = diasTotal;
}