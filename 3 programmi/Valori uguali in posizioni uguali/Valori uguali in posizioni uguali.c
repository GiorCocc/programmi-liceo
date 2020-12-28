#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main ()
{
    srand(time(NULL));
    int vet[100],vet1[100];
    carica(vet);
    carica(vet1);
    printf("Il vettore 1 e\':\t");
    stampa(vet);
    printf("Il vettore 2 e\':\t");
    stampa(vet1);
    comuni(vet,vet1);
}
void carica (int a[100])
{
    int i;
    for(i=0;i<100;i++)  a[i]=rand()%101;
}

void stampa (int a[100])
{
    int i;
    for(i=0;i<100;i++)
        printf("%d\t",a[i]);
    printf("\n");
}
void comuni (int a[100],int b[100])
{
    int i=0;
    int k=0;
    do{
        if(a[i]==b[i])
            {printf("Il valore comune e\' %d nella posizione %d\n",a[i],i+1); k=1;}
        i++;
    }while(i<100);
    if(k==0)
        printf("Non ci sono elementi comuni\n");
}
