/*TRIS*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//FUNZIONE
void out(int m [3][3])
{
    int x,y;
    printf("\n");
    for(x=0; x<3; x++)
    {
        printf(" ");

        for(y=0; y<3; y++)
        {
            printf(" %c %c", m [x][y], y!=2 ? '|' : ' ');
        }
        printf("%s", x!=2 ? "\n -----------\n" : "\n\n");
    }
    return;
}

//FUNZIONE
int Win(int m [3][3])
{
    int x,y;
    int v=0;

    //controllo colonne
    for(x=0; x<3; x++)
    {
        if(m[x][0]!=' ' && m[x][0]==m[x][1] && m[x][1]==m[x][2])
        {
            v=m[x][0];
        }
     }

    //controllo righe
    for(y=0; y<3; y++)
    {
        if (m[0][y]!=' ' && m[0][y]==m[1][y] && m[1][y]==m[2][y])
        {
            v=m[0][y];
        }
    }

    //controllo diagonali
    if(m[0][0]!=' ' && m[0][0]==m[1][1] && m[1][1]==m[2][2])
    {
        v=m[0][0];
    }
    else if (m[0][2]!=' ' && m[0][2]==m[1][1] && m[1][1]==m[2][0])
    {
        v=m[0][2];
    }

    //1 se ha vinto X, 2 se ha vinto O, 0 se ne X ne O
    if (v=='X' || v=='O')
    {
        if (v=='X')
        {
            v=1;
        }
        else
        {
            v=2;
        }
    }

    return v;
}

//FUNZIONE
int W(int v)
{

    switch(v)
                {
                case 2:
                    printf("VINCE IL GIOCATORE O\n");
                    break;
                case 1:
                    printf("VINCE IL GIOCATORE X\n");
                    break;
                case 0:
                    printf("NE VINTI NE VINCITORI PAREGGIO\n ");
                    break;
                }
}

//MAIN
int main()
{
    int scelta, mat[3][3], v=0, i, j, g=0, G, x, y, c=1, t, m=0;

    do
    {
        printf(" ___  __   .   __\n");
        printf("  |   |_)  |  (_\n");
        printf("  |   | \\  |  __)\n \n");
        printf("INSERISCI SCELTA DI GIOCO \n");
        printf("1-DUE GIOCATORI \n");
        printf("2-GIOCATORE SINGOLO-MODALITA' EASY\n");
        printf("3-GIOCATORE SINGOLO-MODALITA' HARD\n");
        printf("4-GIOCATORE SINGOLO-MODALITA' IMPOSSIBILE\n");
        printf("0-ESCI \n");
        scanf("%d", &scelta);

        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                mat[i][j]= ' ';
            }
        }
        v=0;
        g=0;

        switch (scelta)
        {
        case 1:
            printf("INIZIO PARTITA A DUE GIOCATORI \n");
            for(i=1; i<=9 && v==0 ; i++)
            {
                    G=(g)%2;
                    out(mat);

                    do
                    {
                        printf("Giocatore %c:\nInserisci il numero della cella da 1 a 9:\n", G==0 ? 'O':'X');
                        scanf("%d", &x);
                    }
                    while(x>9 && x<1);

                    if(x<=3)
                    {
                        y=x-1;
                        if(mat[0][y]!=' ')
                        {
                            printf("c'e' gia' un elemento nella cella\n inserisci nuove coordinate:");
                            c=0;
                        }
                    }
                    if(x<=6 && x>=4)
                    {
                        y=x-4;
                        if(mat[1][y]!=' ')
                        {
                            printf("c'e' gia' un elemento nella cella\n inserisci nuove coordinate:");
                            c=0;
                        }
                    }
                    if(x<=9 && x>6)
                    {
                        y=x-7;
                        if(mat[2][y]!=' ')
                        {
                            printf("c'e' gia' un elemento nella cella\n inserisci nuove coordinate:");
                            c=0;
                        }
                    }
                    if(c==1)
                    {
                        if(G==0)
                        {
                            if(x<=3)
                            {
                                y=x-1;
                                mat[0][y]='O';
                            }
                            if(x<=6 && x>3)
                            {
                                y=x-4;
                                mat[1][y]='O';
                            }
                            if(x<=9 && x>6)
                            {
                                y=x-7;
                                mat[2][y]='O';
                            }
                            g++;
                        }
                        else
                        {
                            if(x<=3)
                            {
                                y=x-1;
                                mat[0][y]='X';
                            }
                            if(x<=6 && x>=4)
                            {
                                y=x-4;
                                mat[1][y]='X';
                            }
                            if(x<=9 && x>6)
                            {
                                y=x-7;
                                mat[2][y]='X';
                            }
                            g++;
                        }
                    }
                    c=1;

                    if(g>4)
                    {
                        v=Win(mat);
                    }
                }
            out(mat);
            W(v);
            break;

        case 2:
            printf("INIZIO PARTITA A GIOCATORE SINGOLO-MODALITA' EASY\n");
            for(j=0; j<9 && v==0 ; j++)
            {
                    G=(g)%2;

                    srand(time(NULL));

                    if(G==0)
                    {
                        out(mat);
                        do
                        {
                            printf("Giocatore X :\nInserisci il numero della cella da 1 a 9:\n");
                            scanf("%d", &x);
                        }
                        while(x>9 && x<1);

                        if(x<=3)
                        {
                            y=x-1;
                            if(mat[0][y]!=' ')
                            {
                                printf("c'e' gia' un elemento nella cella\n inserisci nuove coordinate:");
                                c=0;
                            }
                        }
                        if(x<=6 && x>=4)
                        {
                            y=x-4;
                            if(mat[1][y]!=' ')
                            {
                                printf("c'e' gia' un elemento nella cella\n inserisci nuove coordinate:");
                                c=0;
                            }
                        }
                        if(x<=9 && x>6)
                        {
                            y=x-7;
                            if(mat[2][y]!=' ')
                            {
                                printf("c'e' gia' un elemento nella cella\n inserisci nuove coordinate:");
                                c=0;
                            }
                        }
                        if(c==1)
                        {
                            if(x<=3)
                            {
                                y=x-1;
                                mat[0][y]='X';
                            }
                            if(x<=6 && x>=4)
                            {
                                y=x-4;
                                mat[1][y]='X';
                            }
                            if(x<=9 && x>6)
                            {
                                y=x-7;
                                mat[2][y]='X';
                            }
                            g++;
                        }
                        c=1;
                    }
                    else
                    {
                        //ALGORITMO INTELIGENTE
                        t=0;
                        srand(time(NULL));

                        if(j==1)
                        {
                           if(mat[1][1]=='X')
                           {
                               do
                                {
                                    x=(rand())%3;
                                    y=(rand())%3;
                                }
                                while(mat[x][y]!=' ' && (mat[x][y]!=mat[0][0] && mat[x][y]!=mat[0][2] && mat[x][y]!=mat[2][0] && mat[x][y]!=mat[2][2]));
                           }
                           else
                           {
                               x=1;
                               y=1;
                           }
                        }
                        else
                        {
                            for(i=0; i<3; i++)
                            {
                                if(mat[i][0]!=' ' && mat[i][0]==mat[i][1] && mat[i][2]==' ')
                                {
                                    x=i;
                                    y=2;
                                }
                                if(mat[i][1]!=' ' && mat[i][1]==mat[i][2] && mat[i][0]==' ')
                                {
                                    x=i;
                                    y=0;
                                }
                                if(mat[i][0]!=' ' && mat[i][0]==mat[i][2] && mat[i][1]==' ')
                                {
                                    x=i;
                                    y=1;
                                }
                            }
                            for(i=0; i<3; i++)
                            {
                                if(mat[0][i]!=' ' && mat[0][i]==mat[1][i] && mat[2][i]==' ')
                                {
                                    x=2;
                                    y=i;
                                }
                                if(mat[1][i]!=' ' && mat[1][i]==mat[2][i] && mat[0][i]==' ')
                                {
                                    x=0;
                                    y=i;
                                }
                                if(mat[0][i]!=' ' && mat[0][i]==mat[2][i] && mat[1][i]==' ')
                                {
                                    x=1;
                                    y=i;
                                }
                            }

                            if(mat[0][0]!=' ' && mat[0][0]==mat[1][1] && mat[2][2]==' ')
                            {
                                x=2;
                                y=2;
                            }
                            if(mat[1][1]!=' ' && mat[1][1]==mat[2][2] && mat[0][0]==' ')
                            {
                                x=0;
                                y=0;
                            }
                            if(mat[2][2]!=' ' && mat[2][2]==mat[0][0] && mat[1][1]==' ')
                            {
                                x=1;
                                y=1;
                            }

                            if(mat[0][2]!=' ' && mat[0][2]==mat[1][1] && mat[2][0]==' ')
                            {
                                x=2;
                                y=0;
                            }
                            if(mat[2][0]!=' ' && mat[1][1]==mat[2][0] && mat[0][2]==' ')
                            {
                                x=0;
                                y=2;
                            }
                            if(mat[0][2]!=' ' && mat[0][2]==mat[2][0] && mat[1][1]==' ')
                            {
                                x=1;
                                y=1;
                            }
                        }
                        if(x==99 && y==99)
                        {
                           do
                            {
                                x=(rand())%3;
                                y=(rand())%3;
                            }
                            while(mat[x][y]!=' ');
                        }

                        mat[x][y]='O';
                        g++;
                        }

                    if(g>4)
                    {
                        v=Win(mat);
                    }
                    x=99;
                    y=99;
            }
            out(mat);
            W(v);
            break;

        case 3:
            printf("INIZIO PARTITA A GIOCATORE SINGOLO-MODALITA' HARD\n");
            for(j=0; j<9 && v==0 ; j++)
            {
                    G=(g)%2;

                    srand(time(NULL));

                    if(G==0)
                    {
                        out(mat);
                        do
                        {
                            printf("Giocatore X :\nInserisci il numero della cella da 1 a 9:\n");
                            scanf("%d", &x);
                        }
                        while(x>9 && x<1);

                        if(x<=3)
                        {
                            y=x-1;
                            if(mat[0][y]!=' ')
                            {
                                printf("c'e' gia' un elemento nella cella\n inserisci nuove coordinate:");
                                c=0;
                            }
                        }
                        if(x<=6 && x>=4)
                        {
                            y=x-4;
                            if(mat[1][y]!=' ')
                            {
                                printf("c'e' gia' un elemento nella cella\n inserisci nuove coordinate:");
                                c=0;
                            }
                        }
                        if(x<=9 && x>6)
                        {
                            y=x-7;
                            if(mat[2][y]!=' ')
                            {
                                printf("c'e' gia' un elemento nella cella\n inserisci nuove coordinate:");
                                c=0;
                            }
                        }
                        if(c==1)
                        {
                            if(x<=3)
                            {
                                y=x-1;
                                mat[0][y]='X';
                            }
                            if(x<=6 && x>=4)
                            {
                                y=x-4;
                                mat[1][y]='X';
                            }
                            if(x<=9 && x>6)
                            {
                                y=x-7;
                                mat[2][y]='X';
                            }
                            g++;
                        }
                        c=1;
                    }
                    else
                    {
                        //ALGORITMO INTELIGENTE
                        t=0;
                        srand(time(NULL));

                        if(j==1)
                        {
                           if(mat[1][1]=='X')
                           {
                               do
                                {
                                    x=(rand())%3;
                                    y=(rand())%3;
                                }
                                while(mat[x][y]!=' ' && (mat[x][y]!=mat[0][1] && mat[x][y]!=mat[1][0] && mat[x][y]!=mat[1][2] && mat[x][y]!=mat[2][1]));
                           }
                           else
                           {
                               x=1;
                               y=1;
                           }
                        }
                        else
                        {
                            for(i=0; i<3; i++)
                            {
                                if(mat[i][0]!=' ' && mat[i][0]==mat[i][1] && mat[i][2]==' ')
                                {
                                    x=i;
                                    y=2;
                                }
                                if(mat[i][1]!=' ' && mat[i][1]==mat[i][2] && mat[i][0]==' ')
                                {
                                    x=i;
                                    y=0;
                                }
                                if(mat[i][0]!=' ' && mat[i][0]==mat[i][2] && mat[i][1]==' ')
                                {
                                    x=i;
                                    y=1;
                                }
                            }
                            for(i=0; i<3; i++)
                            {
                                if(mat[0][i]!=' ' && mat[0][i]==mat[1][i] && mat[2][i]==' ')
                                {
                                    x=2;
                                    y=i;
                                }
                                if(mat[1][i]!=' ' && mat[1][i]==mat[2][i] && mat[0][i]==' ')
                                {
                                    x=0;
                                    y=i;
                                }
                                if(mat[0][i]!=' ' && mat[0][i]==mat[2][i] && mat[1][i]==' ')
                                {
                                    x=1;
                                    y=i;
                                }
                            }

                            if(mat[0][0]!=' ' && mat[0][0]==mat[1][1] && mat[2][2]==' ')
                            {
                                x=2;
                                y=2;
                            }
                            if(mat[1][1]!=' ' && mat[1][1]==mat[2][2] && mat[0][0]==' ')
                            {
                                x=0;
                                y=0;
                            }
                            if(mat[2][2]!=' ' && mat[2][2]==mat[0][0] && mat[1][1]==' ')
                            {
                                x=1;
                                y=1;
                            }

                            if(mat[0][2]!=' ' && mat[0][2]==mat[1][1] && mat[2][0]==' ')
                            {
                                x=2;
                                y=0;
                            }
                            if(mat[2][0]!=' ' && mat[1][1]==mat[2][0] && mat[0][2]==' ')
                            {
                                x=0;
                                y=2;
                            }
                            if(mat[0][2]!=' ' && mat[0][2]==mat[2][0] && mat[1][1]==' ')
                            {
                                x=1;
                                y=1;
                            }
                        }
                        if(x==99 && y==99)
                        {
                           do
                            {
                                x=(rand())%3;
                                y=(rand())%3;
                            }
                            while(mat[x][y]!=' ');
                        }

                        mat[x][y]='O';
                        g++;
                        }

                    if(g>4)
                    {
                        v=Win(mat);
                    }
                    x=99;
                    y=99;
            }
            out(mat);
            W(v);
            break;

        case 4:
            printf("INIZIO PARTITA A GIOCATORE SINGOLO-MODALITA' IMPOSSIBILE\n");
            for(j=0; j<9 && v==0 ; j++)
            {
                    G=(g)%2;

                    srand(time(NULL));

                    if(G==0)
                    {
                        out(mat);
                        do
                        {
                            printf("Giocatore X :\nInserisci il numero della cella da 1 a 9:\n");
                            scanf("%d", &x);
                        }
                        while(x>9 && x<1);

                        if(x<=3)
                        {
                            y=x-1;
                            if(mat[0][y]!=' ')
                            {
                                printf("c'e' gia' un elemento nella cella\n inserisci nuove coordinate:");
                                c=0;
                            }
                        }
                        if(x<=6 && x>=4)
                        {
                            y=x-4;
                            if(mat[1][y]!=' ')
                            {
                                printf("c'e' gia' un elemento nella cella\n inserisci nuove coordinate:");
                                c=0;
                            }
                        }
                        if(x<=9 && x>6)
                        {
                            y=x-7;
                            if(mat[2][y]!=' ')
                            {
                                printf("c'e' gia' un elemento nella cella\n inserisci nuove coordinate:");
                                c=0;
                            }
                        }
                        if(c==1)
                        {
                            if(x<=3)
                            {
                                y=x-1;
                                mat[0][y]='X';
                            }
                            if(x<=6 && x>=4)
                            {
                                y=x-4;
                                mat[1][y]='X';
                            }
                            if(x<=9 && x>6)
                            {
                                y=x-7;
                                mat[2][y]='X';
                            }
                            g++;
                        }
                        c=1;
                    }
                    else
                    {
                        //ALGORITMO INTELIGENTE
                        t=0;
                        srand(time(NULL));

                        if(j==1)
                        {
                           if(mat[1][1]!=' ')
                           {
                               do
                                {
                                    x=(rand())%3;
                                    y=(rand())%3;
                                }
                                while(mat[x][y]!=' ' && (mat[x][y]!=mat[0][1] && mat[x][y]!=mat[1][0] && mat[x][y]!=mat[1][2] && mat[x][y]!=mat[2][1]));
                           }
                           else
                           {
                               x=1;
                               y=1;
                           }
                        }
                        else
                        {
                            for(i=0; i<3; i++)
                            {
                                if(mat[i][0]!=' ' && mat[i][0]==mat[i][1] && mat[i][2]==' ' && m==0)
                                {
                                    x=i;
                                    y=2;
                                    if(x!=99 && y!=99 && mat[x][y]=='O')
                                    {
                                        m=1;
                                    }
                                }
                                if(mat[i][1]!=' ' && mat[i][1]==mat[i][2] && mat[i][0]==' ' && m==0)
                                {
                                    x=i;
                                    y=0;
                                    if(x!=99 && y!=99 && mat[x][y]=='O')
                                    {
                                        m=1;
                                    }
                                }
                                if(mat[i][0]!=' ' && mat[i][0]==mat[i][2] && mat[i][1]==' ' && m==0)
                                {
                                    x=i;
                                    y=1;
                                    if(x!=99 && y!=99 && mat[x][y]=='O')
                                    {
                                        m=1;
                                    }
                                }
                            }
                            for(i=0; i<3; i++)
                            {
                                if(mat[0][i]!=' ' && mat[0][i]==mat[1][i] && mat[2][i]==' ' && m==0)
                                {
                                    x=2;
                                    y=i;
                                    if(x!=99 && y!=99 && mat[x][y]=='O')
                                    {
                                        m=1;
                                    }
                                }
                                if(mat[1][i]!=' ' && mat[1][i]==mat[2][i] && mat[0][i]==' ' && m==0)
                                {
                                    x=0;
                                    y=i;
                                    if(x!=99 && y!=99 && mat[x][y]=='O')
                                    {
                                        m=1;
                                    }
                                }
                                if(mat[0][i]!=' ' && mat[0][i]==mat[2][i] && mat[1][i]==' ' && m==0)
                                {
                                    x=1;
                                    y=i;
                                    if(x!=99 && y!=99 && mat[x][y]=='O')
                                    {
                                        m=1;
                                    }
                                }
                            }

                            if(mat[0][0]!=' ' && mat[0][0]==mat[1][1] && mat[2][2]==' ' && m==0)
                            {
                                x=2;
                                y=2;
                                if(x!=99 && y!=99 && mat[x][y]=='O')
                                {
                                    m=1;
                                }
                            }
                            if(mat[1][1]!=' ' && mat[1][1]==mat[2][2] && mat[0][0]==' ' && m==0)
                            {
                                x=0;
                                y=0;
                                if(x!=99 && y!=99 && mat[x][y]=='O')
                                {
                                    m=1;
                                }
                            }
                            if(mat[2][2]!=' ' && mat[2][2]==mat[0][0] && mat[1][1]==' ' && m==0)
                            {
                                x=1;
                                y=1;
                                if(x!=99 && y!=99 && mat[x][y]=='O')
                                {
                                    m=1;
                                }
                            }

                            if(mat[0][2]!=' ' && mat[0][2]==mat[1][1] && mat[2][0]==' ' && m==0)
                            {
                                x=2;
                                y=0;
                                if(x!=99 && y!=99 && mat[x][y]=='O')
                                {
                                    m=1;
                                }
                            }
                            if(mat[2][0]!=' ' && mat[1][1]==mat[2][0] && mat[0][2]==' ' && m==0)
                            {
                                x=0;
                                y=2;
                                if(x!=99 && y!=99 && mat[x][y]=='O')
                                {
                                    m=1;
                                }
                            }
                            if(mat[0][2]!=' ' && mat[0][2]==mat[2][0] && mat[1][1]==' ' && m==0)
                            {
                                x=1;
                                y=1;
                                if(x!=99 && y!=99 && mat[x][y]=='O')
                                {
                                    m=1;
                                }
                            }
                        }
                        if(x==99 && y==99)
                        {
                           do
                            {
                                x=(rand())%3;
                                y=(rand())%3;
                            }
                            while(mat[x][y]!=' ' && (mat[x][y]!=mat[0][0] && mat[x][y]!=mat[0][2] && mat[x][y]!=mat[2][0] && mat[x][y]!=mat[2][2]));
                        }

                        mat[x][y]='O';
                        g++;
                        m=0;
                        }

                    if(g>4)
                    {
                        v=Win(mat);
                    }
                    x=99;
                    y=99;
            }
            out(mat);
            W(v);
            break;

        default:
            printf("SCELTA INESISTENTE INSERISCI UN OPSIONE VALIDA\n");
        }

        if(scelta==1 || scelta==2)
        {
            printf("5-RIVINCITA\n");
            printf("0-ESCI\n");
            scanf("%d", &scelta);
        }

    }
    while(scelta!=0 || scelta==5);

    return 0;
}
