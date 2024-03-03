/*
Letti due interi n > 0 e k > 0 stampa il risultato della sommatoria k+k^2+k^3+...+k^n.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int k, n, x, tot;
    printf("inserisci n e k per ottenere la sommatoria k+k^2+k^3+...+k^n : ");
    scanf("%d %d", &n, &k);
    printf("\n la sommatoria k+k^2+k^3+...+k^n vale : \n");

    x=k;
    tot=0;

    for(int i=1; i<=n; i++)
    {
        x=x*k;
        tot=tot+x;
    }
    printf("\n %d", tot);
    return 0;
}
