/*
Dato il lato, trovare il perimetro e lÕarea di un quadrato
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l, area, p ;
    scanf("%d",&l);
    area=l*l;
    p=l*4;
    printf("l'area e': %d", area );
    printf("\nil perimetro e': %d", p );
    return 0;
}
