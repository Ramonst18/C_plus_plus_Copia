/*7. Pedir su nombre al usuario y devolver el número de vocales
que hay.
NOTA: Recuerda que debes utilizar punteros.*/

#include<iostream>
#include<string.h>

using namespace std;

void pedirDatos();
int contandoVocales(char *);

//variables globales
char nombreUsuario[30];

int main(){
    pedirDatos();

    cout<<"El numero de vocales es: "<<contandoVocales(nombreUsuario)<<endl;
    return 0;
}

void pedirDatos(){
    cout<<"Digite su nombre: ";
    cin.getline(nombreUsuario, 30, '\n');

    //cambiamos a mayusculas el nombre
    strupr(nombreUsuario);


}

int contandoVocales(char *nombre){
    /*Pasamos la posicion inicial del arreglo*/
    int cont = 0;

    //Empezamos a analizar el nombre
    while (*nombre) //mientras nombre no sea nulo '\0'
    {
        switch (*nombre)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cont++;
            break;
        default:
            break;
        }
        nombre++;   //incrementamos la posicion en memoria del nombre
    }
    
    return cont;
}