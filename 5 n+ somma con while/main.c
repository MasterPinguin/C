/*
Inserire 5 numeri e calcolare la somma di tutti i numeri utilizzando il ciclo While.
*/

#include <stdio.h>

int main()
{
    int i=0, n, som=0;

    while(i<5)
    {
        printf("Insericsi un numero");
        scanf("%d",&n);
        som=som+n;
        i++;
    }

    printf("La somma e': %d", som);

    return 0;
}
