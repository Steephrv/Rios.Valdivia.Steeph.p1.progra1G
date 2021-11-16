#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*1. Dada una estructura ePais cuyos campos son id(int), nombre(20 caracteres), infectados(int), recuperados(int) y muertos(int).
Desarrollar una función llamada actualizarRecuperados que reciba el país y los recuperados del dia y que acumule
estos a los que ya tiene el país. La función no devuelve nada. */

/*2.Crear una función que se llame invertirCadena que reciba una cadena de caracteres como parámetro
y su responsabilidad es invertir los caracteres de la misma. Ejemplo si le pasamos UTN-FRA la deja como ARF-NTU*/

/*3.Crear una función que se llame ordenarCaracteres que reciba una cadena de caracteres como parámetro
y su responsabilidad es ordenarlos caracteres de manera ascendente dentro de la cadena.
Ejemplo si le pasamos "algoritmo" la deja como "agilmoort"*/

typedef struct
{
    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;
}ePais;

void actualizarRecuperados(ePais* pais, int recuperados);  //1

int invertirCadena(char cadena[]); //2

int ordenarCaracteres( char cadena[]); //3

int main()
{
    //EJERCICIO 1

    ePais unPais;
    unPais.recuperados = 5;
    printf("%d\n", unPais.recuperados);
    actualizarRecuperados(&unPais, 50);
    printf("%d\n", unPais.recuperados);
    actualizarRecuperados(&unPais, 200);
    printf("%d\n", unPais.recuperados);



    printf("----------------------------------------------------\n");

    //EJERCICIO 2
    char cadena[20]= "UTN-FRA";

    printf("\nLa cadena introducida es: %s\n\n", cadena);
    invertirCadena(cadena);

    printf("\nLa cadena reverso  es: %s\n\n", cadena);


    printf("----------------------------------------------------\n");

    //EJERCICIO 3

    char cadena2[20]= "algoritmo";
    printf("\nLa cadena introducida es: %s\n", cadena2);

    ordenarCaracteres(cadena2);

    printf("\nLa cadena ordenada ascendente es: %s\n", cadena2);

    return 0;
}


void actualizarRecuperados(ePais* pais, int recuperados)
{
    if ( pais != NULL && recuperados > 0)
    {
        pais->recuperados += recuperados;

    }
}

int invertirCadena(char cadena[])

{
    int todoOk=0;
    int i = 0;
    int j = strlen(cadena) - 1;
    char auxCadena[strlen(cadena)];

    strcpy(auxCadena, cadena);
    if(cadena != NULL)
    {

        while(cadena [i] != '\0')
        {
            cadena[i] = auxCadena[j];
            i++;
            j--;

        }
        todoOk = 1;
    }
    return todoOk;
}

int ordenarCaracteres( char cadena[])
{
    int todoOk=0;
    char auxCadena;

    if (cadena != NULL )
    {
        for (int i = 0; i < strlen(cadena) -1; i++)
        {
            for (int j = i+1; j < strlen(cadena); j++)
            {
                if ( cadena[i] > cadena[j])
                {
                    auxCadena = cadena[i];
                    cadena[i] = cadena[j];
                    cadena[j] = auxCadena;
                }
            }
        }
        todoOk = 1;
    }
    return todoOk;
}
