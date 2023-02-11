/*13. Hacer un programa que realice la serie fibonacci 
-> 1 1 2 3 4 8 13 ... n*/

#include<iostream>

using namespace std;

int main(){
    //variables a utilizar
    int n, x = 0, y = 1, z = 1;

    //pedimos los datos
    cout<<"Digite el numero de elementos: ";
    cin>>n;

    cout<<"1 ";
    //realizamos los calculos
    for (int i = 1; i <= n; i++)
    {
        z = x + y;
        cout<<z<<" ";
        x = y;
        y = z;
    }
    


    return 0;
}