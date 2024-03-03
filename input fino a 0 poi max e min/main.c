/*
Programma che legge una serie di numeri da tastiera, e quando viene inserito lo 0
indica il maggiore e il minore tra i numeri inseriti.
*/

#include <stdio.h>

int main()
{
    int n, min, max=0;
    printf("inserisci i numeri e per smettere di inserirli inserisci 0\n");
    do
    {
        scanf("%d", &n);

        if(n!=0)
        {
            if(min>n)
            {
                min=n;
            }
        }

        if(max<n)
        {
            max=n;
        }
    }
    while(n!=0);

    printf("il numero piu' grande e': %d",max);
    printf("\n il numero piu' piccolo e': %d",min);

    return 0;
}
