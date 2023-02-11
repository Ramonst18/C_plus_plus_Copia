/*4. Programa que tome cada 4 horas la temperatura exterior,
Leyendola durante un periodo de 24 horas. Es decir, debe leer
6 temperaturas. Calcule la temperatura media del dia,
La temperatura mas alta y la mas baja*/

#include<iostream>

using namespace std;

int main(){
    //variables a utilizar
    int temperatura, tempAlta = 0, tempBaja = 99, tempSuma = 0, tempMedia;

    //for para representar las 24 horas del dia
    for (int i = 1; i <= 24; i++)
    {
        //cada 4 horas pedimos la temperatura
        if ( i%4==0 )
        {
            cout<<"Digite la temperatura: ";
            cin>>temperatura;

            //Verificamos la temperatura alta
            if ( temperatura>tempAlta )
            {
                tempAlta = temperatura;
            }
            
            //verificamos la temperatura baja
            if ( temperatura<tempBaja )
            {
                tempBaja = temperatura;
            }
            
            //realizamos la suma de la temperatura
            tempSuma += temperatura;
        }
        
    }

    //Realizamos los calculos e imprimimos los resultados
    tempMedia = tempSuma / 6;

    cout<<"La temperatura alta registrada es: "<<tempAlta<<endl;
    cout<<"La temperatura baja registrada es: "<<tempBaja<<endl;
    cout<<"La temperatura media es: "<<tempMedia;

    return 0;
}