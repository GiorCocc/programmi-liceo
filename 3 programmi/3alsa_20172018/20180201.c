#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int carica(int b[100])
{
    int i, j, a;
    printf("dammi un valore ");
    scanf("%d", &a);
    b[0] = 1;
    j = 1;
    for (i=2;i<= a/2;i++)
    {
       if (a % i == 0) b[j++] = i;
       if (j == 100) return -1; //gestione dell'errore
    }
    b[j] = a;
    return j+1;
}
void stampa(int a[100], int dim)
{
    int i;
    for (i=0;i<dim;i++)
       printf("%d\t",a[i]);
    printf("\n");
}

int main()
{
    int vet[100];
    int num;
    if ((num=carica(vet)) > 0)
            printf("i divisori del valore sono:\n");
    else {printf("i primi 100 divisori sono: (ne mancano...)\n"); num = 100;}
    stampa(vet, num);
}
