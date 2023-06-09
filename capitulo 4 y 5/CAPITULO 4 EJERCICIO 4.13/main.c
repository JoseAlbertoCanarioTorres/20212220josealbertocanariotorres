#include <stdio.h>
#include <stdlib.h>
/* Pares e impares.El programa, al recibir como datos N números enteros, calcula cuántos
de ellos son pares y cuántos impares, con la ayuda de una función*/
void parimp (int, int *, int*);         /*prototipo de función.*/
void main(void )
{
    int I, N, NUM, PAR = 0, IMP = 0;
    printf ("INGRESA EL NUMERO DE DATOS:");
    scanf ("%d", &N);
    for (I =1; I <= N; I++)
    {
        printf ("INGRESE EL NUMERO %d:", I);
        scanf ("%d", &NUM);
        parimp(NUM, &PAR, &IMP);
        /* Llamada a la función. Paso de parámetros por valor y por
        referencia. */

    }

    printf("\nNUMERO DE PARES : %d", PAR);
      printf("\nNUMERO DE IMPARES : %d", IMP);

}
void parimp ( int NUM, int *p, int *I )
/* La función incrementa el parámetro **PPo **II, según sea el número par
o impar. */
{
    int RES;
    RES  = pow(-1 , NUM);
    if ( RES > 0)
        *p += 1;
    else
        if ( RES < 0)
        *I += 1;
}
