#include<stdlib.h>
#include<stdio.h>
int potenza()
{
    int a,b;
    int ris;
    int i;
    printf("dammi la base: ");
    scanf("%d", &a);
    printf("dammi l\'esponente: ");
    scanf("%d", &b);
    ris=a;
    for (i=1; i < b; i++)
        ris=a*ris;
    return ris;
}
/*
void multipli ()
{
    int n, i;
    printf("di che valore vuoi i multipli ");
    scanf("%d", &n);
    for (i=1; i <= 10; i++)
        printf("%d\t", n*i);
    printf("\n");
}
*/
int m ()
{
    int val, i;
    int s;
    int cont;
    cont=0;
    s = 0;
    for (i = 1; i <= 100; i++)
    {
        val=rand() %1000;
        if(val%2 ==0 && val%3 ==0)
        {
         s += val;
         cont++;
        }
    }
    s = s / cont;
    return s;
}


int main()
{
    int val;
    int scelta;
    do {
        system("cls");
        printf("1 - potenza di un numero\n");
        printf("2 - media di valori\n");
        printf("3 - numero primo piu\' vicino\n");
        printf("4 - fine\n");
        scanf("%d", &scelta);
        switch (scelta)
        {
            case 1: {  printf("la potenza del numero e\' %d\n",potenza())  ;
                        break;
                    }
            case 2: { printf("la media dei valori e\' %d\n", m());
                      break;
            }
            case 3: { printf("il numero primo piu\' vicino e\' %d\n", m());
                      break;
                    }
        }
        system("pause");
    } while (scelta != 4);
}

