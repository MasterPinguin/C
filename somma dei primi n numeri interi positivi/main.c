/*
Calcolare la somma dei primi n numeri interi positivi.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, n;
    printf("inserisci fino a quale numero vuoi la somma : ");
    scanf("%d", &n);

    x=0;

    for(int i=0; i<=n; i++)
    {
        x=x+i;

    }

    printf(" la somma dei numeri vale = %d", x);

    return 0;
}
