#include <stdio.h>
#include <stdlib.h>
/* Mayor divisor. El programa, al recibir como dato un n�mero entero positivo, calcula
su mayor divisor. */
int mad(int)        /* rototipo de funci�n. */
void main(void)
{


int NUM, RES;
printf("\nINGRESE EL NUMERO:");
scanf("%d", &NUM);
RES  mad(NUM);
printf ("\nEL MAYOR DIVISOR DE %d es: %d", NUM , RES );
}
    int mad(int N1 );
    /* Esta funci�n calcula el mayor divisor del n�mero NN11.*/

{
    int = ( N1 / 2);
    /* IIse inicializa con el m�ximo valor posible que puede ser divisor
    de NN11. */
    while (N1 % I)
    /* El ciclo se mantiene activo mientras((NN11  %%  II))sea distinto de cero.
    Cuando el resultado sea 0, se detiene, ya que se habr� encontrado
    el mayor divisor de NN11. */
    I--;
    return I;
}
