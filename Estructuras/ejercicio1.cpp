/*1. Hacer una estructura llamada corredor, en la cual se tendrán los siguientes
campos: Nombre, edad, sexo, club, pedir datos al usuario para un corredor, y asi
una categoria de competición: 
- Juvenil <= 18 años
- Señor <= 40 años
- Veterano > 40 años
Posteriormente imprimir todos los datos del corredor, incluida su categoria
de competición
*/

#include<iostream>
#include<string.h>

using namespace std;

struct corredor
{
    char nombre[20];
    int edad;
    char sexo[10];
    char club[20];
}c1;


int main(){
    char categoria[20];

    //pedimos los datos para el corredor
    cout<<"Nombre: ";
    cin.getline(c1.nombre, 20, '\n');
    cout<<"Edad: ";
    cin>>c1.edad;
    fflush(stdin);  //vaciamos el buffer
    cout<<"Sexo: ";
    cin.getline(c1.sexo, 10, '\n');
    cout<<"Club: ";
    cin.getline(c1.club, 20, '\n');
    
    //comparamos la edad para determinar la categoria
    if (c1.edad <= 18)
    {
        strcpy(categoria, "Juvenil");
    }
    else if (c1.edad <= 40)
    {
        strcpy(categoria, "Senior");
    }
    else
    {
        strcpy(categoria, "Veterano");
    }
    
    //imprimimos los datos del corredor
    cout<<"\nDatos del corredor"<<endl;
    cout<<"Nombre: "<<c1.nombre<<endl;
    cout<<"Edad: "<<c1.edad<<endl;
    cout<<"Sexo: "<<c1.sexo<<endl;
    cout<<"Club: "<<c1.club<<endl;
    cout<<"Categoria: "<<categoria<<endl;

    return 0;
}