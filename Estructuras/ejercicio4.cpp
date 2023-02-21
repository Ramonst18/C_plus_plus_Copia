/*4. Hacer un arreglo de estructura llamada atleta para N atletas
que contenga los siguientes campos:
Nombre, pais, numero_medallas.
y devuelva los datos nombre, pais del atleta que ha ganado el mayor
numero de medallas*/

#include<iostream>

using namespace std;

struct Atleta
{
    char nombre[20];
    char pais[20];
    int numero_medallas;
}atletas[30];


int main(){
    //variables a utilizar
    int posMayorMedallas, cantAtletas, numMedallas = 0;

    //pedimos la cantidad de atletas a registrar
    cout<<"Digite la cantidad de atletas a registrar: ";
    cin>>cantAtletas;

    //Registramos a los atletas
    for (int i = 0; i < cantAtletas; i++)
    {
        fflush(stdin);
        cout<<i+1<<". Nombre: ";
        cin.getline(atletas[i].nombre, 20, '\n');
        cout<<i+1<<". Pais: ";
        cin.getline(atletas[i].pais, 20, '\n');
        cout<<i+1<<". Numeros de medallas: ";
        cin>>atletas[i].numero_medallas;

        //verificamos el numero mayor de medallas
        if (atletas[i].numero_medallas > numMedallas)
        {
            numMedallas = atletas[i].numero_medallas;
            posMayorMedallas = i;
        }
        
    }
    
    //imprimimos el atleta con mayor medallas
    cout<<"\n Atleta con mayor numero de medallas \n";
    cout<<"Nombre: "<<atletas[posMayorMedallas].nombre<<endl;
    cout<<"Pais: "<<atletas[posMayorMedallas].pais<<endl;


    return 0;
}