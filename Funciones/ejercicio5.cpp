/*5. Escriba una plantilla de funcion llamada despliegue() que despliegue
el valor del argumento unico que se le transimite cuando es invocada
la funcion*/

#include<iostream>

using namespace std;

//plantilla de funcion
template <class TIPOD>
void despliegue(TIPOD dato);

int main(){
    //variables a utilizar
    int dato1 = 4;
    float dato2 = 15.67;
    double dato3 = 567.9876;
    char dato4 = 'a';

    despliegue(dato1);
    despliegue(dato2);
    despliegue(dato3);
    despliegue(dato4);

    return 0;
}

template <class TIPOD>
void despliegue(TIPOD dato){
    cout<<"El dato es: "<<dato<<endl;
}