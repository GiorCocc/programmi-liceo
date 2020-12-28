#include<stdlib.h>
#include<stdio.h>

int eprimo(int a)
{
    int i;
    int risp;
    risp = 1;   //la variabile risp dice se il numero è primo
    i = 2;
    while ((i <= a/2) && (a % i != 0)) i++;
    if (a % i == 0) risp = 0;
    return risp;
}
void trasforma()
{
    int val;
    printf("inserisci una cifra (0-9) ");
    scanf("%d", &val);
    switch (val)
    {
        case 0: {printf("zero\n"); break;}
        case 1: {printf("uno\n"); break;}
        case 2: {printf("due\n"); break;}
        case 3: {printf("tre\n"); break;}
        case 4: {printf("quattro\n"); break;}
        case 5: {printf("cinque\n"); break;}
        case 6: {printf("sei\n"); break;}
        case 7: {printf("sette\n"); break;}
        case 8: {printf("otto\n"); break;}
        case 9: {printf("nove\n"); break;}
    }
}

void stampa(int a)
{
    int i;
    printf("i divisori  del numero %d sono:\n1\t", a);
    i = 2;
    while (i <= a/2){
        if (a % i == 0) printf("%d\t", i);
        i++;
    }
    printf("%d\n", a);
}

/*restituisce il valore 1 se a è un quadrato perfetto, 0 altrimenti */
int quadratoperfetto(int a)
{
    int s, i;
    s = 0;
    i = 1;
    while (s < a)
    {
        s = s + i;
        i += 2;
    }
    if (s == a) return 1;
    return 0;
}

int main()
{
    int val, val2;
    int divisore;
    int scelta;
    do {
        system("cls");
        printf("1 - dimmi se il valore e\' primo\n");
        printf("2 - stampa i divisori di un numero\n");
        printf("3 - dimmi se e\' un quadrato perfetto\n");
        printf("4 - fine\n");
        scanf("%d", &scelta);
        //printf("hai scelto il valore %d\n", scelta);
        switch (scelta)
        {
            case 1: {do {
                            printf("dammi un valore >= 2: ");
                            scanf("%d",&val);
                     } while(val < 2);
                     if (eprimo(val)==1)
                        printf("il numero %d e\' primo\n",val);
                     else printf("il numero %d non e\' primo\n",val);
                     break;
                    }
            case 2: { do {
                            printf("dammi un valore >= 2: ");
                            scanf("%d",&val);
                     } while(val < 2);
                     stampa(val);
                     break;
                     }
            case 3: { do {
                            printf("dammi un valore >= 2: ");
                            scanf("%d",&val);
                     } while(val < 2);
                     if (quadratoperfetto(val))
                        printf("%d e\' un quadrato perfetto\n",val);
                    else printf("%d non e\' un quadrato perfetto\n",val);
                     break;}
        }
        system("pause");
    } while (scelta != 4);
}
