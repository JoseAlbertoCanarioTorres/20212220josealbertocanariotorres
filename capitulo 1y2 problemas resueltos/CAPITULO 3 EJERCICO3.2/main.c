#include <stdio.h>
#include <stdlib.h>
/* Factorial.
El programa calcula el factorial de un n�mero entero.

 FAC, I, NUM: variables de tipo entero. */
void main(void)
{
    int I , NUM;
    long FAC;
    printf ("\nINGRESE EL NUMERO:");
    scanf ("%d", &NUM);
    if (NUM >= 0)
    {
        FAC = 1;
        for (I=1; I <= NUM; I++)
            FAC *=I;
            printf("\EL FACTORIAL DE %d es: %ld",NUM , FAC);
    }
    else
    printf("\nError en el dato ingresado ");
    return 0;
}
