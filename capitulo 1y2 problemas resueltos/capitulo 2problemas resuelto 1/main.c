#include <stdio.h>
#include <math.h>
/* ELprograma, al resibir como datos tres valores enteros, establece si los
   mismo satisfacen una expresion determinada */

void main(void)
{ float RES ;
int R, T, Q;
printf ("INGRESE LOS VALORES DE R, T Y Q:");
scanf ("%d %d %d", &R, &T, &Q);
RES = pow (R, 4) - pow(T, 3) + 4 * pow(Q, 2);
if ( RES < 820)
    printf("\nR = %d\tT = %d\t Q = %d", R, T, Q);
    return 0;
}
