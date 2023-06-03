#include <stdio.h>
#include <math.h>
/* par , impar o nulo.
NUM: variable de tipo entero. */
void main(void)
{
    int NUM;
    printf ("INGRESE EL NUMERO: ");
    scanf ("%d", &NUM);
    if (NUM == 0)
    printf("\nNULO");
    else
        if (pow (-1, NUM) > 0)
        printf ("\npar");
    else
        printf("\nIMPAR");

    return 0;
}
