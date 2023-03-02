/*9. Escriba una funcion nombrada tiempo() que tenga un parametro en numero
entero llamado totalSeg y tres parametros de referencia enteros nombrados
horas, min y seg. La funcion es convertir el numero de segundos transmitido
en un numero equivalente de horas, minutos y segundos.*/

#include<iostream>

using namespace std;

void tiempo(int, int&, int&, int&);

int main(){
    //Variables a utilizar
    int totalSeg, horas, min, seg;

    //Pedimos los segundos al usuario
    cout<<"Digite el numero total de segundos: ";
    cin>>totalSeg;

    tiempo(totalSeg, horas, min, seg);

    cout<<"Tiempo equivalente a la cantidad de segundos digitados:"<<endl;
    cout<<"Horas: "<<horas<<endl;
    cout<<"Minutos: "<<min<<endl;
    cout<<"Segundos: "<<seg<<endl;


    return 0;
}

void tiempo(int totalSeg, int& horas, int& min, int& seg){
    //calculamos las horas
    horas =  totalSeg / 3600;
    totalSeg %= 3600;

    //Sacamos la cantidad de minutos
    min = totalSeg / 60;
    totalSeg %= 60;

    //Sacamos la cantidad de segundos
    seg = totalSeg;
}