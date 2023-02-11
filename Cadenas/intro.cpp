//Cadenas de caracteres

#include<iostream>
#include<string.h>

using namespace std;

//Notas: cin guarda hasta donde haya un espacio
//Notas: gets te almacenará toda la cadena completa sin importar los espacios establecidos
//Nota: cin.getline() te almacenará la palabra indicando en sus parametros el espacio y su terminacion

int main(){
    //manera de poner una cadena de caracteres
    char palabra[] = "Ramon";
    char palabra2[] = {'R','A','M','O','N'};
    char nombre[30];

    //pedimos un nombre
    cout<<"Digite su nombre: ";
    //gets(nombre);
    cin.getline(nombre,20,'\n');

    //imprimimos las palabras
    cout<<palabra<<endl;
    cout<<palabra2<<endl;
    cout<<nombre<<endl;

    return 0;
}