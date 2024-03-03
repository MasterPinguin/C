/*
Visualizzare la tabellina del 2
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x;
    printf("tabellina del 2\n");
    for(int i=0; i<=10; i++)
    {
        x=2*i;
        printf("2 x %d", i);
        printf(" = %d", x);
        printf("\n");
    }



    return 0;
}
