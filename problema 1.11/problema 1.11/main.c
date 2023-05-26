#include <stdio.h>
#include <math.h>
/* PERIMETRO DEL TRIANGULO.
EL programa , al recibir las coordenadas de los puntos P1, P2 y P3 que
el programador , corresponde a los vertices de un triangulo, calcula su perimetro.
X1, Y1, X2, Y2, X3, Y3, LA1, LA2, LA3 Y PER: VARIABLES DE TIPO REAL. */


 void  main(void)
{
    float X1,Y1,X2,Y2,X3,Y3,LA1,LA2,LA3, PER;
    printf("INGRESE LA COORDENADA DEL PUNTO P1: ");
    scanf (" %f %f ,%X1 , &Y1");
    printf("INGRESE LA COORDENADA DEL PUNTO P2: ");
    scanf (" %f %f ,%X2 , &Y2");
    printf("INGRESE LA COORDENADA DEL PUNTO P3: ");
    scanf (" %f %f ,%X3 , &Y3");
    LA1 = sqrt(pow(X1-X2, 2) + pow( Y1-Y2, 2));
    LA2 = sqrt(pow(X2-X3, 2) + pow( Y2-Y3, 2));
    LA3 = sqrt(pow(X1-X3, 2) + pow( Y1-Y3, 2));
    PER = LA1 + LA2 + LA3 ;
    printf("\nEL perimetro del angulo es: %6.3f" , PER );

    return 0;
}
