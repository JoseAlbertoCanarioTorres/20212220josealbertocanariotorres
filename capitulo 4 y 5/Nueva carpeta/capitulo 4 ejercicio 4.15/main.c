#include <stdio.h>
#include <stdlib.h>
/* Productoria.
El programa calcula la productoria de los N primeros números naturales. */
int PRODUCTORIA(int);           /* prototipo de funcion. */

void main(void)
{
    int NUM;
    {
       printf ("ingrese el numero del cual quieres calcular la productoria: ");
       scanf ("%d",&NUM);

    }
    while ( NUM > 100 || NUM < 1);
    printf("\nLA productoria  DE %d es: %d", NUM,PRODUCTORIA(NUM));

}
int PRODUCTERIA  (int N )
{
   int I, PRO =1 ;
   for (I = 1; I <= N; I++)
    PRO *=I;
   return (PRO);

}
