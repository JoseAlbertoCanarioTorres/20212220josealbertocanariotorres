#include <stdio.h>
#include <stdlib.h>
/* Pares e impares.El programa, al recibir como datos N n�meros enteros, calcula cu�ntos
de ellos son pares y cu�ntos impares, con la ayuda de una funci�n*/
void parimp (int, int *, int*);         /*prototipo de funci�n.*/
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
        /* Llamada a la funci�n. Paso de par�metros por valor y por
        referencia. */

    }

    printf("\nNUMERO DE PARES : %d", PAR);
      printf("\nNUMERO DE IMPARES : %d", IMP);

}
void parimp ( int NUM, int *p, int *I )
/* La funci�n incrementa el par�metro **PPo **II, seg�n sea el n�mero par
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
