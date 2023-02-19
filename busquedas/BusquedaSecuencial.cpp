//Buqueda secuencial

#include<iostream>

using namespace std;

int main(){
    //variables a utilizar
    int a[] = {3, 4, 2, 7, 9};
    int i, dato;
    char band = 'F';

    //pedimos el dato al usuario
    cout<<"Digite el numero a buscar: ";
    cin>>dato;

    //Busqueda secuencial
    i = 0;
    while ((band == 'F') && (i < 5))
    {
        //verificamos si esta el dato en el arreglo
        if (a[i] == dato)
        {
            band = 'V';
        }
        
        i++;
    }
    
    //imprimimos dependiendo si fue encontrado o no
    if (band == 'F')
    {
        cout<<"El numero a buscar no existe en el arreglo"<<endl;
    } else if (band == 'V')
    {
        cout<<"El numero a sido encontrado en la pos: "<<i-1<<endl;
    }
    
    


    return 0;
}