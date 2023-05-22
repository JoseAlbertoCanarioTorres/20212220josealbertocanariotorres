#include <stdio.h>
/*aplicacion de operadores. */

#include <stdlib.h>

int main(void)
{
    int i = 15, j, k, l;
    j = ( 15 > i-- ) > (14 < ++i);
    printf("\nEL valor de j es: %d ", j);

    k =!( 'b'!='d') > (! i - 1 );
    printf("\nEL valor de k es: %d ", k);

    l =(!( 34 > ( 70 % 2))||0);
    printf("\nEL valor de l es:%d ",l);

}
