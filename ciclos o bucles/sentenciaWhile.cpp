/*La sentencia while:

    while (){
        conjunto de instrucciones;
    }
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    //variable a usar
    int i = 1;

    //imprimimos mientras el numero sea menor a tal
    while(i<=10){
        //imprimimos el valor
        cout<<i<<endl;

        //aumentamos el valor
        i++;
    }

    //para evitar que se cierre solo
    getch();
    return 0;
}