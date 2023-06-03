#include <stdio.h>
#include <stdlib.h>
//VARIABLES CONFIGURABLES
#define SUELDO_NO_DEFINIDO 0
#define SUELDO_LUJO 1
#define SUELDO_PRO  2
#define SUELDO_BAJO 3
#define SUELDO_MIN  4
#define VALOR_SUL_DE_LUJO 150000
#define VALOR_SUL-DE-PROMEDIO 50000
#define VALOR_SUL_DE_BAJO 25000
#define VALOR_SUL_DE_MIN 0
#define IMP_DE_LUJO 0.25
int main()
{ float SUL = 0.0;
 int sw = 0;
    printf ("CALCULOS DE IMPUESTOS SOBRE SUELDO!\n ");
    printf("ingrese el sueldo: ");
    scanf ("%f" , &SUL);

    if (SUL >= VALOR_SUL_DE_LUJO)
    {
     sw = SUELDO_LUJO;
    } else if (SUL >= SUELDO_PRO)
       {
           sw = SUELDO_PRO;

       } else if (SUL>=  SUELDO_BAJO  )
       {
           sw = SUELDO_BAJO ;
       } else if (SUL>  VALOR_SUL_DE_MIN)
       {
           sw = SUELDO_MIN ;

       }else
       {
          sw = SUELDO_NO_DEFINIDO;
       }

       switch (sw)
       {
       case  SUELDO_LUJO:
        printf("EL impuesto a pagar sobre su sueldo de %7.2f pesos es: %f",SUL,SUL*IMP_DE_LUJO);
        break;
         case  SUELDO_PRO:
        printf("EL impuesto a pagar sobre su sueldo de %7.2f pesos es: %f", SUL,SUL*0.1 );
        break;
         case  SUELDO_BAJO:
        printf("EL impuesto a pagar sobre su sueldo de %7.2f pesos es: %f",SUL,SUL*0.05   );
        break;
         case  SUELDO_MIN:
        printf("EL impuesto a pagar sobre su sueldo de %7.2f pesos es: %f",SUL,SUL*0.02 );
        break;
         default:
            printf("error de sueldo , no puede ser menor o igual a 0 ");
            break;
       }

      }


