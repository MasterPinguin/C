/*
Scrivere un programma che dopo aver caricato un vettore di N componenti, con N<= 10, calcoli il prodotto delle componenti di posto pari e la somma di quelle dispari.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vett[10],i,r,p,s;

    printf("caricamento vettore");

    for(i=0;i<=10;i++)
    {

        scanf("%d", &vett[i]);
    }

    p=1;
    s=0;

    for(i=1;i<=10;i++)
    {
        r=vett[i]%2;

        if(r!=1)
        {
            p=p*vett[i];
        }
        else
        {
            s=s+vett[i];
        }

    }

    printf("il prodotto tra i numeri pari e': %d", p);

    printf("la somma tra i numeri dispari e': %d",s);

    return 0;
}
}
