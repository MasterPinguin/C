/*
Visualizzare un menù che consenta all'utente di scegliere un poligono
e calcolarne l'area.
In base alla scelta (triangolo, rettangolo, quadrato), il programma deve richiedere
i dati necessari al calcolo (base, altezza o lato).
Il programma finisce quando l'utente digita 0.
*/

#include <stdio.h>

int main()
{
    int scelta, b, h, l, area;
    do
    {
        printf("-----MENU-----\n");
        printf("Scegli:\n");
        printf("1-Triangolo\n");
        printf("2-Rettangolo\n");
        printf("3-Quadrato\n");
        printf("0-ESCI\n");

        scanf("%d", &scelta);

        switch (scelta)
            {
            case 1:
                printf("Hai scelto di calcolare l'area del Triangolo \n");
                printf("Inserisci la base e l'altezza:\n");
                scanf("%d %d", &b, &h);
                area=(b*h)/2;
                printf("l'area e' di: %d \n", area);
                area=0;
                break;

            case 2:
                printf("Hai scelto di calcolare l'area del Rettangolo \n");
                printf("Inserisci la base e l'altezza:\n");
                scanf("%d %d", &b, &h);
                area=b*h;
                printf("l'area e' di: %d \n", area);
                area=0;
                break;

            case 3:
                printf("Hai scelto di calcolare l'area del Quadrato \n");
                printf("Inserisci il lato del quadrato:\n");
                scanf("%d", &l);
                area=l*l;
                printf("l'area e' di: %d \n", area);
                area=0;
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
