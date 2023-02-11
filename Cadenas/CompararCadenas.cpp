//Comparar cadenas - Funcion strcmp()

#include<iostream>
#include<string.h>

using namespace std;

/*Nota: la funcion puede diferenciar entre mayusculas y minusculas
tambien puede decir que palabra es mayor o sea cual va despues alfabeticamente*/

int main(){
    //variables a usar
    char palabra1[] = "Becerro";
    char palabra2[] = "Avion";

    //verificamos si las cadenas son iguales
    if (strcmp(palabra1, palabra2) == 0)
    {
        //tenemos que comparar a 0, ya que si son iguales nos regresará un 0
        //nos regresará 1 si son diferentes
        cout<<"Ambas cadenas son iguales";
    }

    //verificamos si es mayot
    if (strcmp(palabra1, palabra2) > 0)
    {
        //nota: con el > indicamos que la primera palabra es mayor alfabeticamente
        // si ponemos < significara que realizamos una comparacion menor alfabeticamente
        cout<<palabra1<<" esta despues alfabeticamente";
    }
    
    

    return 0;
}