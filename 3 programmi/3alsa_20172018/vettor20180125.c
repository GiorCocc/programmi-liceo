#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void carica(int a[10])
{
    int i, risp;
    do {
    printf("vuoi caricare i valori tu (1) o random (0)? ");
    scanf("%d", &risp);
    } while (risp != 1 && risp != 0);
    if (risp == 1)
    for (i=0;i<10;i++)
    {
       printf("elemento %d^: ",i+1);
       scanf("%d", &a[i]);
    }
    else for (i=0;i<10;i++) a[i] = rand() %201;
}

void somma(int a[10],int b[10], int s[10])
{
    int i;
    for(i=0; i < 10; i++)
        s[i] = a[i]+b[i];

}

void stampa(int a[10])
{
    int i;
    printf("il vettore e\':\n");
    for (i=0;i<10;i++)
       printf("%d\t",a[i]);
    printf("\n");
}

int main()
{
    int vet[10]={0,0,0,0,0,0,0,0,0,0};
    int vet2[10],vet3 [10];
    int scelta;
    srand(time(NULL));
    do {
        system("cls");
        printf("1 - carica i vettori\n");
        printf("2 - stampa il vettore\n");
        printf("3 - somma elementi del vettore\n");

        printf("4 - fine\n");
        scanf("%d", &scelta);
        //printf("hai scelto il valore %d\n", scelta);
        switch (scelta)
        {
            case 1: {   carica(vet);
                        carica(vet2);
                        break;
                    }
            case 2: { stampa(vet);stampa(vet2);stampa(vet3);
                           break; }
            case 3: { somma(vet,vet2,vet3); break; }
        }
        system("pause");
    } while (scelta != 4);
}
