/*
Scrivere un programma che riempito un vettore di 10 elementi, visualizzi a video gli elementi di posizione pari.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vett[10],i,r;

    printf("caricamento vettore");

    for(i=0;i<=10;i++)
    {

        scanf("%d", &vett[i]);
    }

    printf("elementi pari del vettore");

    for(i=0;i<=10;i++)
    {
        r=vett[i]%2;

        if(r!=1)
        {
            scanf("%d", vett[i]);
        }

    }

    return 0;
}
