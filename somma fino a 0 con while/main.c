/*
Svolgere l’esercizio 1 utilizzando il ciclo WHILE.
*/

#include <stdio.h>

int main()
{
    int n, som=0, max=0;

    printf("per uscire dal loop dovrai inserire il numero 0\n");

    while(n!=0)
    {
        printf("inserisci il numero");
        scanf("%d",&n);

        som=som+n;
        if(n>max)
        {
            max=n;
        }
    }


    printf("la somma e' di: %d", som);
    printf("\nil valore massimo e': %d", max);

    return 0;
}
