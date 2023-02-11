/*7. Pedir su nombre al usuario en mayuscula, si su nombre comienza
por la letra A, convertir su nombre a minusculas, caso contrario
no convertirlo*/

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    //variables a utilizar
    char nombre[30];

    //pedimos el nombre al usuario
    cout<<"Digite su nombre en MAYUSCULAS: ";
    cin.getline(nombre, 30, '\n');

    //verificamos si la primera letra es A para hacer el cambio
    if (nombre[0] == 'A')
    {
        strlwr(nombre);
    }

    //imprimimos el nombre
    cout<<"Nombre: "<<nombre;
    

    return 0;
}
