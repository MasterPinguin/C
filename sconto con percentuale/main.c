/*
Dato il prezzo di un prodotto e la percentuale di sconto, calcolare il prezzo scontato.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int p, ps, s, a;
    printf("inserisci  il prezzo e lo sconto da applicare:\n");
    scanf("%d",&p);
    scanf("%d",&s);
    a=p;
    p=p/100;
    ps=p*s;
    ps=a-ps;
    printf("il prezzo scontato e' di : %d", ps);
    return 0;
}
