/*Recursividad

Factorial de un numero  3! = 3*2*1

    factortial(n) = 1       , si n=0
                    n*factorial(n-1), si n>0
*/

#include<iostream>

//NOTA: Recursividad, funciones que se llaman a si mismas

using namespace std;

int factorial(int);

int main(){
    
    cout<<"Factorial: "<<factorial(3)<<endl;

    return 0;
}

int factorial(int n){
    if (n==0)
    {//Caso Base
        n=1;
    }else{//Caso general
        n = n * factorial(n -1);
    }
    
    return n;
}