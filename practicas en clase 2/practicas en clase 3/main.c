#include <stdio.h>
#include <stdlib.h>



#define PRE_CAL     0
#define PROG        1
#define SYS_CONT    2
#define CNC         3
#define CIRCUITO2   4
#define CANT_MAT    5



double prom(void);
double add(double n1,double n2);
void addf(double *n1,double *n2,double *result);



double MAT[CANT_MAT];//variable global



int main()
{



    double b = 0.0;
    double n1 = 5.0;
    double n2 = 10.0;
    double rs = 0.0;



    MAT[PRE_CAL]    = 100.0;
    MAT[PROG]       = 70.5;
    MAT[SYS_CONT]   = 85.0;
    MAT[CNC]        = 90.0;
    MAT[CIRCUITO2]  = 60.0;



    b = prom();



    addf(&n1,&n2,&rs);



    printf("\nPromedio calclado de %d materias = %7.2f",CANT_MAT,b);



    printf("\nSuma de los numeros 5 + 10 = %f",rs);



    return 0;
}



//pasado por referencia
void addf(double *n1,double *n2,double *result)
{



    *result = *n1 + *n2;
}
//pasando por valor
double add(double n1,double n2)
{
    return n1+ n2;
}



double prom(void)
{
    double b = 0.0;



    for(int i = 0;i<CANT_MAT;i++)
    {
        b += MAT[i];
    }
    b = b/(double)CANT_MAT;



    return b;
}
