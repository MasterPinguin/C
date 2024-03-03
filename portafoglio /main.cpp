/*
Sviluppare un programma che fornisca le funzionalitˆ di base di un potafoglio elettronico.
Il portafoglio puo contenere (solo) molteplici monete da:
1cent, 5cent, 10cent, 50cent, 1Euro, 2Euro

Fornire le seguenti funzionalitˆ:

1. Inserimento di una moneta nel portafoglio
2. Calcolo della somma totale contenuta nel portafoglio
3. prelievo di una somma del portafoglio
4. Azzeramento del portafoglio
Rendere accessibili le varie funzionalitˆ predisponendo un menu di scelta
*/

#include <stdio.h>

int main()
{
    int scelta, n;
    float p;
    do
    {
        n=0;

        printf("||||||| BENVENUTO NEL TUO PORTAFOGLIO ELETTRONICO||||||| SEI POVERO E BASTA |||||\n");
        printf("1 - inserisci moneta da 1 cent\n");
        printf("2 - inserisci moneta da 2 cent\n");
        printf("3 - inserisci moneta da 5 cent\n");
        printf("4 - inserisci moneta da 10 cent\n");
        printf("5 - inserisci moneta da 20 cent\n");
        printf("6 - inserisci moneta da 50 cent\n");
        printf("7 - inserisci moneta da 1 Euro\n");
        printf("8 - inserisci moneta da 2 Euro\n");
        printf("9 - Stampa valore del portafoglio\n");
        printf("10- Preleva dal portafoglio\n");
        printf("11- Azzera il portafoglio\n");
        printf("0 - Esci\n");
        printf(">>");
        scanf("%d", &scelta);

        switch (scelta)
            {
            case 1:
                printf("inserisci il quantitativo di monete da 1 cent che vuoi inserire \n");
                scanf("%d", &n);
                p=p+(0,01*n);
                break;

            case 2:
                printf("inserisci il quantitativo di monete da 2 cent che vuoi inserire \n");
                scanf(">>\n %d", &n);
                p=p+(0,02*n);
                break;

            case 3:
                printf("inserisci il quantitativo di monete da 5 cent che vuoi inserire \n");
                scanf("%d", &n);
                p=p+(0,05*n);
                break;

            case 4:
                printf("inserisci il quantitativo di monete da 10 cent che vuoi inserire \n");
                scanf("%d", &n);
                p=p+(0,1*n);
                break;

            case 5:
                printf("inserisci il quantitativo di monete da 20 cent che vuoi inserire \n");
                scanf("%d", &n);
                p=p+(0,2*n);
                break;

            case 6:
                printf("inserisci il quantitativo di monete da 50 cent che vuoi inserire \n");
                scanf("%d", &n);
                p=p+(0,5*n);
                break;

            case 7:
                printf("inserisci il quantitativo di monete da 1 Euro che vuoi inserire \n");
                scanf("%d", &n);
                p=p+(1*n);
                break;

            case 8:
                printf("inserisci il quantitativo di monete da 2 Euro che vuoi inserire \n");
                scanf("%d", &n);
                p=p+(2*n);
                break;

            case 9:
                printf("Hai scelto di stampare il valore del portafoglio: \n %f0.2f", p);
                break;

            case 10:
                printf("Quanto desideri prelevare dal portafoglio: \n");
                scanf("%d", &n);

                while(p<n)
                {
                    printf("Reinserisci il valore da prelevare dal portafoglio SEI TROPPO POVERO NON HAI QUEI SOLDI: \n");
                    scanf("%d", &n);
                }

                p=p-n;
                printf("Nel tuo portafoglio sono rimasti: %f0.2f", p);
                printf("Euro\n");
                break;

            case 11:
                printf("HAI AZZERATO IL PORTAFOGLIO \n");
                p=0;
                break;

            default:
               printf("Attenzione scelta sbagliata!!!!! \n");
            }
    }
    while(scelta!=0);

    printf("Hai scelto di uscire\n");

    printf("||||||| NON TORNANE PIU ||||||| POVERO |||||\n");

    return 0;
}
