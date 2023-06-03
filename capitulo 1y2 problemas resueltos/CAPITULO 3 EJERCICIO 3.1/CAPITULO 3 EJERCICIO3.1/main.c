#include <stdio.h>
#include <stdlib.h>
/* Lanzamiento de martillo.
El programa, al recibir como dato N lanzamientos de martillo, calcula el promedio
de los lanzamientos de la atleta cubana.
 I, N: variables de tipo entero.
  LAN, SLA: variables de tipo real. */
void main(void)
{
    int I, N;
    float LAN, SLA = 0;
    do
    {
      printf ("ingrese el numero de lanzamiento: \t");
      scanf ("%d", &N);
    }
    while(N < 1||N > 11);
    for (I=1; I<=N; I++)
    {
        printf ("\nINGRESE EL LANZAMIENTO %d: " , I );
        scanf ("%f", &LAN);
        SLA = SLA + LAN;
    }
    SLA = SLA / N;
    printf("\nEL PROMEDIO DE LANZAMIENTOS ES %.2f", SLA);
    return 0;
}
