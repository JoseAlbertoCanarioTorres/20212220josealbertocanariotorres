#include <stdio.h>
#include <stdlib.h>
/* M�ximo com�n divisor.El programa, al recibir como datos dos n�meros enteros, calcula el m�ximo
com�n divisor de dichos n�meros. */
int mcd(int, int );
void main (void)

{
     int NU1, NU2, RES;
     printf ("\nINGRESE LOS NUMEROS ENTEROS:");
     scanf ("%d %d ", &NU1, &NU2);
     RES = mcd (NU1, NU2);
     printf ("\nEL MAXIMO COMUN DIVISOR DE %d y %d es:%d",NU1, NU2, RES);
}
int mcd (int N1, int N2)
/* Esta funci�n calcula el m�ximo com�n divisor de los n�meros NN11
y NN22. */
   {
       int I;
       if (N1 < N2)
        I = N1 / N2 ;
       else
        I = N2 / 2;
        /* II se inicializa con el m�ximo valor posible que puede ser divisor
        de NN11y NN22. */
        while ((N1 % I) || (N2 % I))
        /* El ciclo se mantiene activo mientras ((NN11  %%  II))o ((NN22  %%  II))sean
        distintos de cero. Cuando el resultado de la evaluaci�n sea 0, el
        ciclo se detiene ya que se habr� encontrado el m�ximo com�n divisor. */
        I--;
       return I ;
   }

