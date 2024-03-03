/*
Continuo esercizio 1. Visualizzare a video gli elementi del vettore partendo dall’ultima posizione.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vett[10], i;
    printf("Caricamento vettore:\n");

    for(i=0 ; i<=10 ; i++)
    {
    	scanf("%d", &vett[i]);
    }

    printf("stampa vettore");

    for(i=10 ; i>=0 ; i--)
    {
        printf("%d \t", vett[i]);
    }


    return 0;
}

