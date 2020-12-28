#include<stdlib.h>
#include<stdio.h>
void successione ()
{
    int n, i;
    printf("quanti valori vuoi stampare ");
    scanf("%d", &n);
    for (i=1; i <= n; i++)
        printf("%d\t", i*i);
    printf("\n");
}

void multipli ()
{
    int n, i;
    printf("di che valore vuoi i multipli ");
    scanf("%d", &n);
    for (i=1; i <= 10; i++)
        printf("%d\t", n*i);
    printf("\n");
}

int m ()
{
    int val, i;
    int s;
    int cont;
    cont=0;
    s = 0;
    for (i = 1; i <= 10; i++)
    {
        printf("Dammi il %d^ valore ", i);
        scanf("%d", &val);
        if(val%2 !=0)
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
        printf("1 - successione dei quadrati degli interi fino a n (n inserito dall\'utente)\n");
        printf("2 - inserito un valore stampare i suoi primi 10 multipli\n");
        printf("3 - calcolare la media di 10 valori inseriti dall\'utente (solo dispari)\n");
        printf("4 - fine\n");
        scanf("%d", &scelta);
        switch (scelta)
        {
            case 1: {  successione()  ;
                        break;
                    }
            case 2: {  multipli() ;
                        break;}
            case 3: { printf("la media dei 10 valori e\' %d\n", m());
                      break;
                    }
        }
        system("pause");
    } while (scelta != 4);
}
