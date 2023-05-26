#include <stdio.h>
#include <stdlib.h>
/* ESTANCIA
EL PROGRAMA , AL RECIBR  COMO DATA LA SUPERFICIE DE UNA ESTAMCIA EXPRESADA
EN ACRES, LA CONVIERTE A HECTAREAS .

ECA: VARIABLE DE TIPO REAL. */

void main(viod)
{
    float ECA;
    printf("INGRESE LA EXTENCION DE LA ESTANCIA: ");
    scanf ("%f , &ECA ");
    ECA = ECA * 4047 / 10000;
    printf ("\nEXTENCION  de la estancia en hectareas: %5.2f" , ECA ) ;
       return 0;
}
