/*
Scrivere il programma per scambiare il contenuto di due variabili (occorre usare una terza variabile temporanea).
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0, b=0, c=0;
    scanf("%d",&a);
    scanf("%d",&b);
    c = a;
    a = b;
    b = c;
    printf("a vale: %d", a);
    printf("\nb vale: %d", b);
    return 0;
}
