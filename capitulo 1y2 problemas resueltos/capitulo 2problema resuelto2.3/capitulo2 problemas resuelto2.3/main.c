#include <stdio.h>
#include <stdlib.h>
/* BILLETE DE FERROCARRIL.
EL PROGRAMA CALCULA EL COSTO DE UN BILLETE DE FERROCARRIL TE NIRNDO EN
CUENTA LA DISTANCIA ENTRE LAS DOS CIUDADES Y EL TIEMPO DE PERMANENCIA
DEL PASAJERO.

DIS Y TIE: VARIABLES DE TIPO ENTERO.
BIL: VARIABLE DE TIPO REAL. */

void main(void)

{
    int DIS, TIE;
    float BIL;
    printf ("INGRESE LA DISTANCIA ENTRE CIUDADES Y EL TIEMPO DE ESTANIA:");
    scanf("%d %d" , &DIS, &TIE);
     if ((DIS*2 > 500) && ( TIE > 10 ))
        BIL = DIS * 2 * 0.19 * 0.8;
     else
        BIL = DIS * 2 * 0.19;
    printf("\n\nCOSTO DEL BILLETE: %7.2f" , BIL);
    return 0;
}
