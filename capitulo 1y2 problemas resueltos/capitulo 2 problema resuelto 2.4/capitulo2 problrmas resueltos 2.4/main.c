#include <stdio.h>
#include <math.h>
/* IGUALDAD DE ESPRESIONES.
EL PROGRAMA, AL RECIBIR COMO DATO T , P Y N, COMPRUEVA LA IGUALDAD DE UNA
EXPRESION DETERMINADA.
T ,P Y N: VARIABLE DE TIPO ENTERO. */
void main (void)
{
    int T, P, N;
    printf("INGRESE LOS VALORES DE T, P Y N: ");
    scanf ("%d %d %d" ,&T, &P, &N);
    if (P != 0)
    {
        if (pow(T / P, N) == (pow(T, N) / pow(P, N)))
            printf ("\nSE COMPRUEBA LA IGUALDAD ");
        else
            printf("\nNO SE COMPRUEBA LA IGUALDAD ");

    }
    else
    printf("\nP tiene  que ser diferente de cero");
    return 0;
}
