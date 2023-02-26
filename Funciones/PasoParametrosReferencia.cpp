//Paso de Parametros por Referencia
//No es pasar el valor, es pasar la direccion de memoria donde se aloja el valor
#include<iostream>

using namespace std;

//Modo de hacerlo en el prototipo de funcion
void valNuevo(int&, int&);

//NOTA: al pasar la direccion de memoria, nosotros podremos realizar la modificación
//del valor de la direccion de memoria, o sea, podemos modificar el valor de la variable
//que se pasó por argumentos de una funcion

int main(){
    int num1, num2;

    cout<<"Digite 2 numeros: ";
    cin>>num1>>num2;

    valNuevo(num1, num2);

    //imprimimos los nuevos valores
    cout<<"El nuevo valor del primer numero es: "<<num1<<endl;
    cout<<"El nuevo valor del segundo numero es: "<<num2<<endl;

    return 0;
}

//Ejemplo de en funcion, se tiene que poner el & al lado del tipo de dato
//Para indicar que su valor se pasará por dirección de memoria
void valNuevo(int& xnum, int& ynum){
    cout<<"El valor del primer numero es: "<<xnum<<endl;
    cout<<"El valor del segundo numero es:"<<ynum<<endl;

    //Cambiando los valores
    xnum = 89;
    ynum = 105;
}