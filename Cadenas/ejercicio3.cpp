/*3. Pedir al usuario que digite 2 cadenas de caracteres, e indicar si ambas cadenas
son iguales, en caso de no serlo, indicar cual es mayor alfabeticamente.*/

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    //variables a utilizar
    char cadena1[40];
    char cadena2[40];

    //pedimos las cadenas de caracteres
    cout<<"Escriba la primera cadena: ";
    cin.getline(cadena1, 40, '\n');
    cout<<"Escriba la segunda cadena: ";
    cin.getline(cadena2, 40, '\n');

    //veficiamos las cadenas
    if (strcmp(cadena1, cadena2) == 0)//en el caso que sea igual
    {
        cout<<"Las palabras son iguales";
    } else {
        //verificamos cual cadena es mayor alfabeticamente
        if (strcmp(cadena1, cadena2) > 0) //Si la cadena1 es mayor alfabeticamente
        {
            cout<<"La cadena "<<cadena1<<" es mayor alfabeticamente a "<<cadena2;
        } else {
            cout<<"La cadena "<<cadena2<<" es mayor alfabeticamente a "<<cadena1;
        }
        
    }
    

    return 0;
}