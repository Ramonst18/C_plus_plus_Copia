/*20. Realice una funcion recursiva para la serie fibonacci
Nota: La serie de Fibonacci esta formada por la secuencia de numeros:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34*/

#include<iostream>

using namespace std;

int fibonacci(int, int);

int main(){
    cout<<fibonacci(0, 1);

    return 0;
}

int fibonacci(int n1, int n2){
    //n1    0 1 1 2 3
    //n2    1 1 2 3 5
    int numero = n1 + n2;   // 1 2 3 5
    n1 = n2;                // 
    n2 = numero;            //

    if (n2 == 144)
    {
        cout<<"LIMITE"<<endl;
    }else{
        return fibonacci(n1, n2);
    }

    return numero;
}