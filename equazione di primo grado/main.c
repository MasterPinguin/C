/*
Risolvere un’equazione di primo grado
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, x;
    printf(" ax+b=0 inserisci il valore di a e in seguito di b: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf(" %d", a );
    printf("x+%d", b );
    printf("=0 \n");
    x=b/a;
    printf("x vale : %d", x);
    return 0;
}
