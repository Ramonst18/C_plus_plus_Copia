/*4. Crear una cadena que tenga la siguiente frase
"Hola que tal", luego crear otra cadena para preguntarle al usuario
su nombre, por ultimo añadir el nombre al final de la primera cadena
y mostrar el mensaje completo: "Hola que tal (nombreUsuario)"*/

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    //variables a usar
    char cad1[] = "Hola que tal ";
    char nombre[40];

    //pedimos el nombre del usuario
    cout<<"Escriba su nombre: ";
    cin.getline(nombre, 40, '\n');

    //añadimos el nombre a la primera cadena
    strcat(cad1, nombre);

    //imprimimos la cadena concatenada
    cout<<cad1;

    return 0;
}