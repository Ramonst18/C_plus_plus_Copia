/*3. Realizar un programa que lea un arreglo de estructuras los datos de
N empleados de la empresa y que imprima los datos del empleado con mayor
y menor salario. */

#include<iostream>

using namespace std;

struct Empleado
{
    char nombre[20];
    float salario;
}emp[100];


int main(){
    //variables a utilizar
    int n_empleados, posMay = 0, posMen = 0;
    float mayor = 0, menor = 999999;

    //pedimos el numero de empleados
    cout<<"Digite el numero de empleados: ";
    cin>>n_empleados;

    //llenamos los datos de los empleados
    for (int i = 0; i < n_empleados; i++)
    {
        fflush(stdin);
        cout<<i+1<<". Digite su nombre: ";
        cin.getline(emp[i].nombre, 20, '\n');
        cout<<i+1<<". Digite su salario: ";
        cin>>emp[i].salario;
        
        //verificamos el salario
        if (emp[i].salario > mayor)
        {
            mayor = emp[i].salario;
            posMay = i;
        }
        if (emp[i].salario < menor)
        {
            menor = emp[i].salario;
            posMen = i;
        }
        
        cout<<'\n';
    }
    
    //Imprimimos los empleados
    cout<<"\n Datos del empleado con mayor salario: \n";
    cout<<"Nombre: "<<emp[posMay].nombre<<endl;
    cout<<"Salario: "<<emp[posMay].salario<<endl;

    cout<<"\n Datos del empleado con menor salario \n";
    cout<<"Nombre: "<<emp[posMen].nombre<<endl;
    cout<<"Salario: "<<emp[posMen].salario<<endl;

    return 0;
}