/*
Calcolare la misura dell’ipotenusa di un triangolo rettangolo, noti i cateti.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, C, c , C2,c2,n;
    printf("inserire i due cateti:");
    scanf("%d",&c);
    scanf("%d",&C);
    C2=(C*C);
    c2=(c*c);
    n=C2+c2;
    i=sqrt(n);
    printf("l'ipotenusa vale: %d", i);
    return 0;
}
