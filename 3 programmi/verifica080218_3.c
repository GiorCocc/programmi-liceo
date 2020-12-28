#include<stdlib.h>
#include<stdio.h>
#include<time.h>

void carica(int b[10])
{
    int i;
    for (i=0;i<=9;i++)
    {
       b[i]=rand()%101;
    }
}
void stampa(int a[10], int dim)
{
    int i;
    for (i=0;i<dim;i++)
       printf("%d\t",a[i]);
    printf("\n");
}

void sposta_a_destra(int a[10])
{
    int j, risp;
    risp = a[9];
    j = 8;
    while (j >= 0)
    {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=risp;
}

void sposta_a_destra2(int a[10])
{
    int j, risp;
    risp = a[9];
    for (j = 9; j > 0; j--)
      a[j]=a[j-1];
    a[0]=risp;
}


int main()
{
    int vet[50];
    carica(vet);
    stampa(vet,10);
    sposta_a_destra(vet);
    stampa(vet,10);
    sposta_a_destra2(vet);
    stampa(vet,10);
}
