/*21. Escriba una funcion recursiva que calcule un numero
elevado a una potencia entera mayor o igual que cero: x^y

    potencia(x,y) = x               , y=1
                    x*potencia(x, y-1), y>1
*/

#include<iostream>

using namespace std;

int potencia(int, int);

int main(){
    //variables a utilizar
    int base, exponente;

    //pedimos los datos al usuario
    cout<<"Digite la base: ";
    cin>>base;
    cout<<"Digite el exponente: ";
    cin>>exponente;

    cout<<endl<<"Potencia de "<<base<<" elevado a "<<exponente<<" es: "<<potencia(base,exponente)<<endl;

    return 0;
}

int potencia(int x, int y){
    int pot;


    if (y==1)
    {//caso base
        pot = x;
    }else{//caso general
        pot = x* potencia(x, y-1);
    }
    
    return pot;
}