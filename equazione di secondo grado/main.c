/*
Risolvere un’equazione di secondo grado, considerando gli opportuni controlli su delta.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c, d, x1, x2;
    printf(" ax^2+bx+c=0 inserisci il valore di a e in seguito di b e di c: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf(" %d", a );
    printf("x^2+%d", b );
    printf("x+%d", c );
    printf("=0 \n");
    d=(b*b)+((-4*a)*c);
    if(d>=0)
    {
        x1=(-b-sqrt(d))/(2*a);
        x2=(-b+sqrt(d))/(2*a);
        printf("x1 vale : %d", x1);
        printf(" e x2 vale : %d", x2);
    }
    else
    {
        printf("IMPOSSIBILE");
    }
    return 0;
}
