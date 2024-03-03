/*
Scrivere un programma che riempia un vettore di 10 elementi di tipo int.
Alla fine, visualizzare a video i dati memorizzati nel vettore.
*/

#include <stdio.h>

int main()
{
    int vett[10], i;
    printf("Caricamento vettore:\n");

    for(i=0 ; i<=10 ; i++)
    {
    	scanf("%d", &vett[i]);
    }

    printf("stampa vettore");

    for(i=0 ; i<=10 ; i++)
    {
        printf("%d \t", vett[i]);
    }


    return 0;
}

