#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUno;
    int numeroDos;
    int numeroTres;

   printf("Ingrese el primer numero: ");
   scanf("%d", &numeroUno);

   printf("Ingrese el segundo numero: ");
   scanf("%d", &numeroDos);

   printf("Ingrese el tercer numero: ");
   scanf("%d", &numeroDos);


    if(numeroUno > numeroDos && numeroUno < numeroTres)
    {
        printf("El numero del medio es el numero: %d", numeroUno);
    }
    else
    {
        if (numeroDos > numeroTres && numeroDos < numeroTres)
        {
            printf("El numero del medio es el numero: %d", numeroDos);
        }
        else
        {
            printf("El numero del medio es el numero: %d", numeroTres);
        }
    }
    else
    {
        printf("El numero del medio no existe.");
    }

}
