#include<stdlib.h>
#include<stdio.h>

/* funzione restituisce il valore 1 se a è pari 0 altrimenti */
int pari(int a)
{
    if (a % 2 == 0) return 1;
    return 0;
}

/* funzione che permette l'inserimento di 10 valori e restituisce la loro somma */
int somma()
{
    int val, i;
    int s;
    s = 0;
    for (i = 1; i <= 10; i++)
    {
        printf("Dammi il %d^ valore ", i);
        scanf("%d", &val);
        s += val;
    }
    return s;
}

/* funzione che permette l'inserimento di n (n inserito dall'utente>) valori e restituisce la loro media */
int media()
{
    int val, i, n;
    int s;
    s = 0;
    printf("quanti valori vuoi inserire? ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Dammi il %d^ valore ", i);
        scanf("%d", &val);
        s += val;
    }
    s = s / n;
    return s;
}

int main()
{
    int val;
    int scelta;
    do {
        system("cls");
        printf("1 - calcola la somma di 10 valori\n");
        printf("2 - calcola la media di n valori (n inserito dall\'utente)\n");
        printf("3 - dimmi se e\' pari o dispari\n");
        printf("4 - fine\n");
        scanf("%d", &scelta);
        //printf("hai scelto il valore %d\n", scelta);
        switch (scelta)
        {
            case 1: {   printf("il somma calcolata e\' %d\n",somma());
                        break;
                    }
            case 2: {   printf("La media calcolata e\' %d\n",media());
                        break;}
            case 3: {   printf("dammi un valore intero");
                        scanf("%d", &val);
                        if (pari(val) == 1)
                            printf("il valore %d inserito e\' pari\n", val);
                        else  printf("il valore %d inserito e\' dispari\n", val);
                        break;
                    }
        }
        system("pause");
    } while (scelta != 4);
    printf("ciao");
}
