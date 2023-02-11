/*5. Escriba un fragemnto de programa que intercambie los valores de dos 
variables
*/

#include<iostream>

using namespace std;

int main(){

    //variables que utilizaremos
    int x, y, aux;

    //Registramos los valores
    cout<<"Digite el valor de x: "; cin>>x;
    cout<<"Digite el valor de y: "; cin>>y;

    //realizamos el cambio de los valores de las variables
    aux = x;
    x = y;
    y = aux;

    //imprimimos los valores
    cout<<"Valor de x: "<<x<<endl;
    cout<<"Valor de y: "<<y<<endl;
    
    return 0;
}