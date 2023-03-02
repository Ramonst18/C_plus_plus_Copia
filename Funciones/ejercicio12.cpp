/*12. Realice una funcion que tome como parametros un vector 
y su tamano y diga si el vector esta ordenado crecientemente.
Sugerencia: compruebe que para todas las posiciones del vector, salvo
para la 0, el elemento del vector es mayor o igual que el elemento 
que le precede en el vector*/

#include<iostream>

using namespace std;

void pedirDatos(int[], int);
bool comprobarOrdenadoCrecimientemente();

//variables a utilizar
int vec[100], tam;

int main(){
    //pedimos el tamano al usuario
    cout<<"Digite el tamano del vector: ";
    cin>>tam;

    pedirDatos(vec, tam);

    if (comprobarOrdenadoCrecimientemente())
    {
        cout<<"El arreglo esta ordenado crecientemente ";
    }else{
        cout<<"EL arreglo no esta ordenado crecientemente";
    }
    

    return 0;
}

void pedirDatos(int vec[], int tam){
    /*Funcion que guarda los datos en el arreglo*/

    //guardamos los numeros en el arreglo
    for (int i = 0; i < tam; i++)
    {
        cout<<i+1<<". Digite un numero: ";
        cin>>vec[i];
    }
    
}

bool comprobarOrdenadoCrecimientemente(){
    /*Funcion que comprobara si el vector esta ordenado crecientemente*/
    bool ordenado = false;

    for (int i = 1; i < tam; i++)
    {
        //comprobamos si el valor actual es mayor al anterior
        if (vec[i] > vec[i-1])
        {
            ordenado = true;
        }else{
            ordenado = false;
            //si no es asi cerramos el ciclo
            break;
        }
        
    }
    
    return ordenado;
}