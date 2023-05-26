#include <stdio.h>
#include <math.h>
/* AREA DEL TRIANGULO
 EL PROGRAMA , AL RECIBIR LOS TRES LADOS DE UN TRIANGULO , CALCULA SU AREA.
 */


     void main(void)
{
    float LA1, LA2, LA3, AUX, ARE;
    printf("INGRESE LOS LADOS DEL TRIANGULO:  ");
    scanf ("%f %f %f" , &LA1, &LA2, &LA3 );
    AUX =  (LA1 + LA2 + LA3 ) / 2;
    ARE =  sqrt ( AUX * (AUX-LA1) * ( AUX-LA2) * (AUX-LA3));
    printf ("\nEL area del triangulo es: %6.2f" , ARE);
    return 0;
}
