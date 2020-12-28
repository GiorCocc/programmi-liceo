#include<stdlib.h>
#include<stdio.h>

/*procedura che stampa i primi N interi, con N inserito dall'utente*/
void successione()
{
    int n, i;
    printf("quanti valori vuoi stampare ");
    scanf("%d", &n);
    for (i=1; i <= n; i++)
        printf("%d\t", i);
    printf("\n");
}

/* programma che, dato un numero val, restituisce i suoi fattori primi */
void scomposizione()
{
    int val, i;
    int temp;
    printf("inserisci il valore ");
    scanf("%d", &val);
    temp = val;
    i = 2;
    printf("il valore inserito %d, ha i seguenti fattori primi: ", val);
    while ( temp != 1)
    {
        if (temp % i == 0)
        {
            printf("%d\t", i);
            while (temp % i == 0) temp = temp / i;
        }
        i++;
        //printf("***%d***", i);
    }
    printf("\n");
}

/* funzione che permette l'inserimento di 10 valori e restituisce la loro media */
int media()
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
    s = s / 10;
    return s;
}

int main()
{
    int val;
    int scelta;
    do {
        system("cls");
        printf("1 - SUCCESSIONE DEI PRIMI N INTERI\n");
        printf("2 - SCOMPOSIZIONE IN FATTORI PRIMI\n");
        printf("3 - MEDIA DI 10 VALORI\n");
        printf("4 - fine\n");
        scanf("%d", &scelta);
        //printf("hai scelto il valore %d\n", scelta);
        switch (scelta)
        {
            case 1: {   successione();
                        break;
                    }
            case 2: {   scomposizione();
                        break;}
            case 3: {   printf("la media calcolata e\' %d\n", media());
                        break;
                    }
        }
        system("pause");
    } while (scelta != 4);
    printf("ciao");
}
