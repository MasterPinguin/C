/*
Dopo aver caricato in memoria un array di numeri interi con 20 componenti,
contare le componenti che hanno valore superiore a 5.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vett[20],i,n;

    printf("caricamento vettore");

    for(i=0;i<=10;i++)
    {

        scanf("%d", &vett[i]);
    }

    n=0;

    for(i=1;i<=20;i++)
    {

        if(vett[i]<5)
        {
            n++;
        }

    }

    printf("i numeri contenuti nell array superiori a 5 sono: %d",n);

    return 0;
}
