/* La sentencia do while

    do{
        conjunto de instrucciones;
    }while( expresion logica);

*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    //variables a usar
    int i = 1;

    do{
        //imprimimos el valor
        cout<<i<<endl;

        //aumentamos el valor
        i++;
    }while(i<=10);

    //otra manera de evitar que se cierre
    system("pause");
    return 0;
}