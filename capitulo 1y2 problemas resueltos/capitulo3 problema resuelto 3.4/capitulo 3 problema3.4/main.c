#include <stdio.h>
#include <math.h>
/* Pares e impares.
 El programa, al recibir como datos N n�meros enteros, obtiene la suma de los
 n�meros pares y calcula el promedio de los impares.

 I, N, NUM, SPA, SIM, CIM: variables de tipo entero. */

void main(void)
{
    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0;
    printf(" INGRESE EL NUMERO DE DATOS QUE SE VAN A PROCESAR:\t");
    scanf("%d",&N);
    if(N > 0)
    {
        for (I=1; I <=N; I++);
        {

        printf("\nINGRESE EL NUMERO %d:", I);
       scanf("%d",&NUM);
         if (NUM)
         if (pow(-1, NUM) > 0)
         SPA = SPA + NUM;
         else
         {
             SIM = SIM + NUM;
             CIM++;
         }
        }
        printf ("\n La suma de los numeros pares es: %d ",SPA );
         printf ("\n EL premedio de los numeros impares es:%5.2f ",(float)(SIM / CIM));
    }
    else
    printf("\n EL valor de N es incorrecto");
    return 0;
}
