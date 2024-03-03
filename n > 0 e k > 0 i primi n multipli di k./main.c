/*
Letti due interi n > 0 e k > 0 stampa i primi n multipli di k.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int k, n, x;
    printf("inserisci n e k, n saraˆ il valore dei primi n multipli di k: ");
    scanf("%d %d", &n, &k);
    printf("\n i primi n multipli di k sono: \n");

    for(int i=1; i<=n; i++)
    {
        x=i*k;
        printf("\n %d", x);
    }

    return 0;
}
