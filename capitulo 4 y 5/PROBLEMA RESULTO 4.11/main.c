#include <stdio.h>
#include <stdlib.h>
/* Mayor divisor. El programa, al recibir como dato un número entero positivo, calcula
su mayor divisor. */
int mad(int)        /* rototipo de función. */
void main(void)
{


int NUM, RES;
printf("\nINGRESE EL NUMERO:");
scanf("%d", &NUM);
RES  mad(NUM);
printf ("\nEL MAYOR DIVISOR DE %d es: %d", NUM , RES );
}
    int mad(int N1 );
    /* Esta función calcula el mayor divisor del número NN11.*/

{
    int = ( N1 / 2);
    /* IIse inicializa con el máximo valor posible que puede ser divisor
    de NN11. */
    while (N1 % I)
    /* El ciclo se mantiene activo mientras((NN11  %%  II))sea distinto de cero.
    Cuando el resultado sea 0, se detiene, ya que se habrá encontrado
    el mayor divisor de NN11. */
    I--;
    return I;
}
