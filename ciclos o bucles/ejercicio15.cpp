/*15. Realice un programa que solicite al usuario que piense un numero
entero el 1 y el 100. El programa debe generar un numero aleatorio en ese
mismo rango[1-100], e indicarle al usuario si el numero que digito es nenor
o mayor al numero aleatorio, asi hasta que lo adivine, y por ultimo
mostrarle el numero de intentos que el llevo

variable = limite_inferior + rand() % (limite_superior + 1 - limite_inferior);
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
    //variables a utilizar
    int numero, dato, contador = 0;

    //creamos el numero aleatorio
    srand(time(NULL));
    dato = (1 + rand() % (100) );

    do
    {
        //pedimos el numero
        cout<<"Digite un numero: ";
        cin>>numero;

        //verificamos el numero
        if (numero>dato)
        {
            cout<<"Digite un numero menor"<<endl;
        }
        if (numero<dato)
        {
            cout<<"Digite un numero mayor"<<endl;
        }
        contador++;
        
    } while (numero != dato);
    

    //imprimimos los intentos
    cout<<"Felicidades adivinaste el numero"<<endl;
    cout<<"Numero de intentos: "<<contador;
    return 0;
}