#include <stdio.h>
#include <stdlib.h>
/*medidas
El progamador, al resibir como datos la longuitud y el peso de un objeto
expresado en pies y libra , calcula los datos de este objeto pero en
metros y kilogramos , respectivamente .
PIE, LIB, MET Y KIL : variables de tipo real. */

void main(void)
{float PIE, LIB, MET, KIL;
    printf("ingrese los datos del objeto:");
    scanf ("%f %f",&PIE, &LIB);
    MET = PIE * 0.09290;
    KIL = LIB * 0.45359;
    printf ("\ndatos del objeto \nlogitud:%5.2f", MET, KIL );
    return 0;
}
