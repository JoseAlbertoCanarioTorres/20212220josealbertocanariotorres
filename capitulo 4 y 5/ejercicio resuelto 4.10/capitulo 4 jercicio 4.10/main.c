#include <stdio.h>
#include <stdlib.h>
/* Múltiplo.El programa, al recibir como datos dos números enteros, determina si
el segundo es múltiplo del primero. */
iinnttmultiplo(iinntt, iinntt);  /* Prototipo de función. */
void main(void)
{
    int NU1, NU2, RES;
    printf ("\n ingrese los dos numeros:");
    scanf("%d %d", &NU1 , &NU2);
    RES = MULTIPLO ( NU1 , NU2 );
     if ( RES )
        printf ("\nEL SEGUNDO NUMERO ES MULTIPLO DEL PRIMERO:");
     else
        printf ("\nEL SEGUNDO NUMERO NO ES MULTIPLO DEL PRIMERO ");
}
     int MULTIPLO ( int N1, int N2)
     /* Esta función determina si NN22es múltiplo de NN11. */
     {
         int RES;
         if  ((N2 % N1 ) == 0)
            RES = 1;
         else
            RES = 0;
         return (RES);

     }



