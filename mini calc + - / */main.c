/*
Sviluppare un programma che simuli il funzionamento di una calcolatrice che fornisca
esclusivamente le 4 operazioni fondamentali (somma, sottrazione, moltiplicazione e
divisione).
1) Il programma dovr� permettere l�inserimento di due valori numerici a e b
C 4 Menu�-Switch case
2) Il programma dovr� permettere una scelta tra le quattro possibili operazioni (a+b oppure
a-b oppure�)
3) Il programma dovr� stampare il risultato finale
*/

#include <stdio.h>

int main()
{
    int scelta, b, a, ris;
    do
    {
        printf("Inserisci la a e b:\n");
        scanf("%d %d", &a, &b);

        printf("----MENU----\n");
        printf("Scegli:\n");
        printf("1.Somma\n");
        printf("2.Differenza\n");
        printf("3.Divisione\n");
        printf("4.Prodotto\n");
        printf("0.ESCI\n");

        scanf("%d", &scelta);

        switch (scelta)
            {
            case 1:
                printf("Hai scelto di sommare a e b: \n");
                ris=a+b;
                printf("il risultato e' di: %d \n", ris);
                ris=0;
                break;

            case 2:
                printf("Hai scelto di calcolare la differenza tra a e b: \n");
                ris=a-b;
                printf("il risultato e' di: %d \n", ris);
                ris=0;
                break;

            case 3:
                printf("Hai scelto di dividere a per b: \n");
                ris=a/b;
                printf("il risultato e' di: %d \n", ris);
                ris=0;
                break;

            case 4:
                printf("Hai scelto di moltiplicare a per b: \n");
                ris=a*b;
                printf("il risultato e' di: %d \n", ris);
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
