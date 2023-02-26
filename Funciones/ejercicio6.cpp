/*6. Escriba una plantilla de funcion llamada maximo() que devuelva el valor
maximo de tres arugmentos que se transmitan a la funcion cuando sea llamada.
Suponga que los tres argumentos seran del mismo tipo de datos*/
#include<iostream>

using namespace std;

template <class TIPOD>
TIPOD maximo(TIPOD dato1, TIPOD dato2, TIPOD dato3);
void pedirDatos();

int main(){
    pedirDatos();

    return 0;
}


template <class TIPOD>
TIPOD maximo(TIPOD dato1, TIPOD dato2, TIPOD dato3){
    //comprobamos cual es el dato maximo
    if (dato1 > dato2 && dato1 > dato3)
    {
        return dato1;
    } else if (dato2 > dato1 && dato2 > dato3)
    {
        return dato3;
    } else if (dato3 > dato1 && dato3 > dato2)
    {
        return dato3;
    } 
}

void pedirDatos(){
    //variables a utilizar
    int dato1, dato2, dato3;

    //pedimos los datos
    cout<<"Digite el dato1: ";
    cin>>dato1;
    cout<<"Digite el dato2: ";
    cin>>dato2;
    cout<<"Digite el dato3: ";
    cin>>dato3;

    cout<<"El valor maximo de los 3 es: "<<maximo(dato1, dato2, dato3);
}