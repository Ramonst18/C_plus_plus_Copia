/*8. Defina una estructura que sirva para representar a una persona.
La estructura debe contener dos campos:  el nombre de la persona
y un valor de tipo logico si la persona tiene algun tipo de discapacidad.
Realice un programa que dado un vector de personas rellene dos nuevos
vectores: uno que contenga las personas que no tienen una discapacidad
y otro que contenga las personas con discapacidad.*/

#include<iostream>
#include<string.h>

using namespace std;

struct Persona
{
    char nombre[20];
    bool discapacidad;
}PND[50], PCD[50];
//PND: personas de ninguna iscapacidad
//PCD: Personas con alguna discapacidad

int main(){
    int cantidadP, posPND = 0, posPCD = 0;
    char discapacidad;

    struct Persona personaTemp;

    //pedimos los datos al usuario
    cout<<"Digite la cantidad de personas a registrar: ";
    cin>>cantidadP;

    //registramos a las personas
    for (int i = 0; i < cantidadP; i++)
    {
        fflush(stdin);
        cout<<i+1<<". Nombre: ";
        cin.getline(personaTemp.nombre, 20, '\n');
        cout<<i+1<<". Discapacidad (s, n): ";
        cin>>discapacidad;

        if (discapacidad == 's')
        {
            personaTemp.discapacidad = true;
            PCD[posPCD] = personaTemp;
            posPCD++;
        }else{
            personaTemp.discapacidad = false;
            PND[posPND] = personaTemp;
            posPND;
        }

        
    }
    
    //Imprimimos los datos
    cout<<"Personas con discapacidad: "<<posPCD;
    cout<<"Personas sin discapacidad: "<<posPND;

    return 0;
}