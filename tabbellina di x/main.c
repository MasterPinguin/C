/*
Visualizzare la tabellina di x
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, t;
    printf("inserisci il numero del quale vuoi la tabbellina: ");
    scanf("%d", &t);
    printf("\ntabellina del %d", t);
    printf("\n");

    for(int i=0; i<=10; i++)
    {
        x=t*i;
        printf("%d", t);
        printf(" x %d", i);
        printf(" = %d", x);
        printf("\n");
    }

    return 0;
}
