/*8. Pedir una cadena de caracteres al usuario, e indicar
cuantas veces aparece la vocal a, e, i, o ,u: en la cadena
de caracteres

NOTA: Usar punteros
*/

#include<iostream>
#include<string.h>

using namespace std;

void pedirDatos();
void contarVocales(char *, int *);
void imprimirmosContadorVocales(int *);

//variables globales
char caracteres[100];
int vocales[5]; //0 = a, 1 = e, 2 = i, 3 = o, 4 = u

int main(){
    pedirDatos();
    contarVocales(caracteres, vocales);
    imprimirmosContadorVocales(vocales);

    return 0;
}

void pedirDatos(){
    cout<<"Digite una cadena: ";
    cin.getline(caracteres, 100, '\n');

    //pondemos la cadena a minusculas
    strlwr(caracteres);

    //iniciamos el arreglo contador de vocales
    vocales[0] = 0;
    vocales[1] = 0;
    vocales[2] = 0;
    vocales[3] = 0;
    vocales[4] = 0;
}

void contarVocales(char *characters, int *vocal){

    //recorremos la cadena de caracteres
    while (*characters)
    {
        switch (*characters)
        {
        case 'a':
            *(vocal+0) += 1;
            break;
        case 'e':
            *(vocal+1) += 1;
            break;
        case 'i':
            *(vocal+2) += 1;
            break;
        case 'o':
            *(vocal+3) += 1;
            break;
        case 'u':
            *(vocal+4) += 1;
            break;
        default:
            break;
        }

        //incrementamos la posicion 
        characters++;
    }
    
}

void imprimirmosContadorVocales(int *vocals){
    cout<<"Cantidad de a:"<<*(vocals+0)<<endl;
    cout<<"Cantidad de e:"<<*(vocals+1)<<endl;
    cout<<"Cantidad de i:"<<*(vocals+2)<<endl;
    cout<<"Cantidad de o:"<<*(vocals+3)<<endl;
    cout<<"Cantidad de u:"<<*(vocals+4)<<endl;
}