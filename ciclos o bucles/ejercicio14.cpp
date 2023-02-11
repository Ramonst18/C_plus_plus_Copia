/*14. En una clase de 5 alumnos se han realizado tres examenes y se requiere
determinar el numero de:

a) Alumnos que aprobaron todos los examanes.
b) Alumnos que aprobaron al menos un examen.
c) Alumnos que aprobaron unicamente el ultimo examen.

Realice un programa que permita la lectura de los datos y el calculo
de las estadisticas*/

#include<iostream>

using namespace std;

int main(){
    //variables a utilizar
    int aprovados = 0, calif, alumnosTodosExamenes = 0, alumnosUnExamen = 0, alumnosUltimoExamen = 0;
    int alumnos[3];

    //pedimos los datos
    for (int i = 0; i < 5; i++)
    {
        //primer examen
        cout<<"Digite la calificacion del primer examen: ";
        cin>>calif;
        alumnos[0] = calif;

        //segundo examen
        cout<<"Digite la calificacion del segundo examen: ";
        cin>>calif;
        alumnos[1] = calif;

        //tercer examen
        cout<<"Digite la calificacion del tercer examen: ";
        cin>>calif;
        alumnos[2] = calif;

        //verificamos las calificaciones
        for (int j = 0; j < 3; j++)
        {
            //verificamos que la calificacion sea mayor o igual a 60
            if (alumnos[j] >= 60)
            {
                //verificamos el ultimo examen
                if (j == 2 && aprovados == 0)
                {
                    alumnosUltimoExamen += 1;
                }else{
                    aprovados += 1;
                }
                
            }
        }

        //verificamos la cantidad de aprovados
        if (aprovados == 3) //aprovados todos los examenes
        {
            alumnosTodosExamenes += 1;
        }else if (aprovados == 1)   //aprovados un unico examen
        {
            alumnosUnExamen += 1;
        }
        
        aprovados = 0;
        
    }
    
    //imprimimos los resultados
    cout<<"Alumnos que aprovaron todos los examenes: "<<alumnosTodosExamenes<<endl;
    cout<<"Alumnos que aprovaron al menos un examen: "<<alumnosUnExamen<<endl;
    cout<<"Alumnos que aprovaron unicamente el ultimo examen: "<<alumnosUltimoExamen<<endl;

    return 0;
}