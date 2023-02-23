/*7. Defina una estrucutra que indique el tiempo empleado por un ciclista en 
una etapa. La estructura debe tener tres campos: horas, minutos y segundos.
Escriba un programa que dado n etapas calcule el tiempo total empleado en 
correr todas las etapas*/

#include<iostream>

using namespace std;

struct Etapas
{
    int horas;
    int minutos;
    int segundos;
}et[100];


int main(){
    //variables a utilizar
    int n_etapas, horasT = 0, minutosT = 0, segundosT = 0;

    //pedimos las etapas
    cout<<"Digite el numero de etapas: ";
    cin>>n_etapas;

    //pasamos el tiempo empleado por cada etapa
    for (int i = 0; i < n_etapas; i++)
    {
        //pedimos los datos al usuario
        cout<<"Horas: ";
        cin>>et[i].horas;
        cout<<"Minutos: ";
        cin>>et[i].minutos;
        cout<<"Segundos: ";
        cin>>et[i].segundos;

        //Realizamos la suma de los tiempos
        horasT = horasT + et[i].horas;
        minutosT = minutosT + et[i].minutos;

        //si llega a ser 60 minutos, incrementamos las horas
        if (minutosT >= 60)
        {
            minutosT = minutosT - 60;
            horasT++;
        }
        
        segundosT = segundosT + et[i].segundos;

        //si llega a ser 60 segundos, incrementamos los minutos
        if (segundosT >= 60)
        {
            segundosT = segundosT - 60;
            minutosT++;
        }

        cout<<"\n";
        
    }
    
    //imprimimos los resultados
    cout<<'\nTiempo total empleado\n';
    cout<<"Horas: "<<horasT<<endl;
    cout<<"Minutos: "<<minutosT<<endl;
    cout<<"Segundos: "<<segundosT<<endl;

    return 0;
}