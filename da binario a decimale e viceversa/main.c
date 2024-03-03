/*
Esercizio 1
Convertire un numero da base 10 a base 2 (cifre binarie dalla più significativa alla meno significativa)
Esercizio 3
Convertire un numero binario nel corrispondente numero decimale.
*/

#include <stdio.h>

int main()
{
    int scelta, n, nn[100], pot=1, ris=0, i, y, x=0, z=0;
    do
    {

        printf("\n----MENU----\n");
        printf("Scegli:\n");
        printf("1.da decimale a binario\n");
        printf("2.da binario a decimale\n");
        printf("0.esci\n");

        scanf("%d", &scelta);

        switch (scelta)
            {
            case 1:

                printf("Inserisci in numero da convertire:\n");
                scanf("%d", &n);

                for(i=0; n!=0; i++)
                {
                    y=n;
                    nn[i]=y%2;
                    n=n/2;
                    x++;
                }

                printf("il risultato e' di: \n");

                for(i=x-1; i>=0; i--)
                {
                    printf("%d", nn[i]);
                }

                printf("\n");
                x=0;
                y=0;
                i=0;
                break;

            case 2:

                printf("Inserisci in numero da convertire:\n");
                scanf("%d", &n);

                for(i=0; n!=0; i++)
                {
                    y=n;
                    nn[i]=y%10;
                    n=n/10;
                    x++;
                }

                for(i=1 ; i<=x-1; i++)
                {
                    pot=pot*2;
                    ris=(nn[i]*pot)+ris;
                }

                if(nn[0]==1)
                {
                    ris=ris+1;
                }

                printf("il risultato e' di: %d \n", ris);
                z=0;
                x=0;
                i=0;
                pot=1;
                ris=0;

                break;

            case 0:
                printf("Hai scelto di uscire \n");
                break;

            default:
               printf("Attenzione scelta sbagliata!!!!! \n");
            }
    }
    while(scelta!=0);

    return 0;
}
