/*9. Realice un programa que lea una cadena de caracteres de la entrada
estándar y muestre en la salida estándar cuántas ocurrencias de cada
vocal existen en la cadena*/

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    //variables a utilizar
    char frase[30];
    int vocal_a = 0, vocal_e = 0, vocal_i = 0, vocal_o = 0, vocal_u = 0;

    //pedimos una frase al usuario
    cout<<"Digite una frease: ";
    cin.getline(frase, 30, '\n');

    //recorremos la frease
    for (int i = 0; i < 30; i++)
    {
        switch (frase[i])
        {
        case 'a':
            vocal_a ++;
            break;
        case 'e':
            vocal_e++;
            break;
        case 'i':
            vocal_i++;
            break;
        case 'o':
            vocal_o++;
            break;
        case 'u':
            vocal_u++;
            break;
        default:
            break;
        }
    }
    
    //imprimimos las veces que encontramos cada vocal
    cout<<"Vocal a: "<<vocal_a<<endl;
    cout<<"Vocal e: "<<vocal_e<<endl;
    cout<<"Vocal i: "<<vocal_i<<endl;
    cout<<"Vocal o: "<<vocal_o<<endl;
    cout<<"Vocal u: "<<vocal_u<<endl;

    return 0;
}