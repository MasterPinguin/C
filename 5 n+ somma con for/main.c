/*
Inserire 5 numeri e calcolare la somma di tutti i numeri utilizzando il ciclo FOR.
*/

#include <stdio.h>

int main()
{
    int n,som=0;
    for(int i=0 ;i<5; i++)
    {
        printf("Insericsi un numero");
        scanf("%d",&n);
        som=som+n;
    }

    printf("La somma e': %d", som);

    return 0;
}
