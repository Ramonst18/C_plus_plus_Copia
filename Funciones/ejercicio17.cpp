/*17. Suma de numeros complejos

z1 = 5-3i   ,   z2 = -4+2ii

z1 + z2 = (5 - 3i)+(-4 + 2i)
        = 5 - 3i - 4 + 2i
        = 1 -i
*/

#include<iostream>

using namespace std;

struct Complejo{
    float real, imaginaria;
}z1, z2;

//Prototipo de funcion
void pedirDatos();
Complejo suma(Complejo, Complejo);
void muestra(Complejo);

int main(){
    pedirDatos();

    Complejo x = suma(z1, z2);

    muestra(x);

    return 0;
}

//Definicion de funcion
void pedirDatos(){
    //Primer numero
    cout<<"Digite los datos para el primer numero complejo: "<<endl;
    cout<<"Parte Real: ";
    cin>>z1.real;
    cout<<"Parte imaginaria: ";
    cin>>z1.imaginaria;

    //Segundo numero
    cout<<"\nDigite los datos para el segundo numero complejo: "<<endl;
    cout<<"Parte Real: ";
    cin>>z2.real;
    cout<<"Parte imaginaria: ";
    cin>>z2.imaginaria;

}

Complejo suma(Complejo z1, Complejo z2){
    /*FUncion que sumara los numeros complejos*/
    z1.real += z2.real;
    z1.imaginaria += z2.imaginaria;

    return z1;
}

void muestra(Complejo x){
    cout<<endl<<"EL resultado de la suma: "<<x.real<<" , "<<x.imaginaria<<endl;
}