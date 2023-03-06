/*2. Determinar si un numero es primo o no: con punteros
y ademas indicar en que posicion de memoria se guardo*/

#include<iostream>

using namespace std;

int main(){
    //variables a utilizar
    int num, *dir_num;

    //pedimos el nuermo al usuario
    cout<<"Digite el numero: ";
    cin>>num;

    //mandamos la direccion de memoria
    dir_num = &num;

    //verificamos si el numero es primo
    if (*dir_num == 2 || *dir_num == 3)
    {
        cout<<"El numero "<<*dir_num<<" es primo"<<endl;
        cout<<"Este esta en la posicion de memoria: "<<endl;
    }else if (!(*dir_num%2 == 0) && (!*dir_num%3 == 0))
    {
        cout<<"El numero "<<*dir_num<<" es primo"<<endl;
        cout<<"Este esta en la posicion de memoria: "<<endl;
    }else{

        cout<<"El numero "<<*dir_num<<" no es primo"<<endl;
        cout<<"Este esta en la posicion de memoria: "<<endl;
    }
    
    

    return 0;
}