#include <stdio.h>
#include <stdlib.h>
/* Serie de ULAM.
El programa, al recibir como dato un entero positivo, obtiene y escribe
la serie de ULAM.NUM: variable de tipo entero. */
void main(viod)
{
    int NUM;
    printf ("INGRESE EL NUMERO PARA CALCULAR LA SERIE:");
    scanf ("%d", &NUM);
    if (NUM > 0)
    {
       printf("\nSERIE DE ULAM\n");
       printf ("%d \t",NUM );
       while ( NUM != 1)
       {
           if (pow(-1, NUM)>0)
            NUM = NUM / 2;
            else
            NUM = NUM * 3 + 1 ;
           printf ("%d /t",NUM);

       }
    }
    printf(" \n NUM DEBE SERUN ENTERO POSITIVO ");
    return 0;
}
