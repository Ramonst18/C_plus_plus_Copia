/*6. Escriba un programa que defina un vector de numeros y calcule si
existe algun numero en el vector cuyo valor equivale a la suma
del resto de numeros del vector*/

#include<iostream>

using namespace std;

int main(){
    //variables a utilizar
    int numeros[100], n, suma = 0;

    //pedimos la cantidad de numeros
    cout<<"Digite la cantidad de numeros a guardar: ";
    cin>>n;

    //guardamos los datos
    for (int i = 0; i < n; i++)
    {
        //guardamos los numeros
        cout<<i+1<<". Digite un numero: ";
        cin>>numeros[i];
    }
    
    //verificamos que exista un numero cuya suma sea igual a la suma de elementos del arreglo
    for (int i = 0; i < n; i++)
    {
        
        //realizamos la suma de valores
        for (int j = 0; j < n; j++)
        {
            //si no es el numero actual
            if (j != i)
            {
                suma += numeros[j];
            }
            
        }

        //verificamos que el numero sea igual al numero actual
        if (numeros[i] == suma)
        {
            break;
        }else{
            suma = 0;
        }

    }
    
    //imprimimos los resultados
    if (suma != 0)
    {
        cout<<"El numero cuyo valor equivale a la suma del resto de numeros es: "<<suma;
    }else{
        cout<<"Numero no encontrado";
    }
    
    

    return 0;
}