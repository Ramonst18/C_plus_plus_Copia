/*19. realice una funcion recursiva que sume los primeros n enteros positivos
Nota: Para plantear la funcion recursiva tenga en cuenta que la suma puede
expresarse mediante la siguiente recurrencia:

    suma(n) = 1         , si n=1
            n+suma(n-1) , si n>1
*/

#include<iostream>

using namespace std;

int sumar(int);

int main(){
    int nElementos;

    //mantenemos al usuario hasta que dijite el numero de elementos mayor a 0
    do{
        cout<<"Digite el numero de elementos: ";
        cin>>nElementos;
    }while(nElementos <= 0);

    cout<<endl<<"La suma es: "<<sumar(nElementos)<<endl;

    return 0;
}

//Funcion recursiva
int sumar(int n){
    int suma = 0;

    if (n==1)
    {//Caso base
        suma = 1;
    }else{//Caso general
        suma = n + sumar(n-1);
    }

    return suma;
}