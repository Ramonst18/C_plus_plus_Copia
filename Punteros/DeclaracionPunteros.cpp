/*Punteros - Declaracion de punteros

&n = la direccion de n
*n = La variable cuya direccion esta almacenada en en

//El puntero sirve para acceder a la direccion de memoria de una variable
*/
#include<iostream>

using namespace std;

//NOTA: un puntero es una variable que almacena la direccion een memoria de un dato

int main(){
    //variables a utilizar
    int num, *dir_num;  //dir_num es una variable que almacenara la direccion en memoria
    //debemos de poner el * al inicio del nombre para indicarlo


    num = 20;
    dir_num = &num; //Almacenamos la direccion de memoria del numero

    //imprimimos el numero almacenado en la posicion en memoria, se debe de poner el * al inicio
    cout<<"Numero: "<<*dir_num<<endl;
    //con el * indicamos que queremos el dato que esta almacenado en memoria

    //imprimimos la direccion en memoria del numero;
    cout<<"Direccion de mem: "<<dir_num<<endl;

    return 0;
}