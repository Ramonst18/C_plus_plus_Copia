/*5. Hacer un programa que determine si una palabra
es palindroma*/

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    //variables a utilizar
    char cad1[50] = "patata";
    char cad2[50];
    strcpy(cad2, cad1);
    
    //invertimos la palabra
    strrev(cad1);

    //comprobamos si son iguales
    if (strcmp(cad1, cad2) == 0)
    {
        cout<<"Son iguales"<<endl;
    } else {
        cout<<"No son iguales"<<endl;
    }
    
    //imprimimos las palabras
    cout<<cad1<<endl;
    cout<<cad2<<endl;

    return 0;
}