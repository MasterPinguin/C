/*
Scrivere un programma che legga da terminale una sequenza di interi positivi e negativi
terminati dal valore 0 (un intero su ogni linea) e stampi la media degli interi positivi.
*/

#include <stdio.h>

int main()
{
    int n, som=0, med, x=0;
    printf("inserisci i numeri e per smettere di inserirli inserisci 0\n");
    do
    {
        scanf("%d", &n);

        if(n>0)
        {
            som=som+n;
            x++;
        }
    }
    while(n!=0);

    med=som/x;

    printf("\n la media dei numeri interi positivi e': %d",med);

    return 0;
}
