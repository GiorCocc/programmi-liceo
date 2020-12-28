#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void carica (int a[100]){
    int i;

    for(i=0; i<100; i++)
    a[i]=rand()%101;
}

void stampa(int a[100]){
    int i;

    for(i=0; i<100; i++)
    printf("%d\t", a[i]);
}

void ordine(int a[100]){
    int i;
    int j;
    int k;
    int scambia;

    do{
        printf("quanti valori vuoi ordinare (<=100) ");
        scanf("%d",&k);
    }while (k>100);
    for(i=0;i<k-1;i++)
        for(j=i+1;j<k;j++)
            if(a[i]>a[j])
            {
                scambia=a[i];
                a[i]=a[j];
                a[j]=scambia;
            }
}

/*funzione che controlla quanti elementi del vettore
sono ordinati e ne restituisce il valore */

int controlla (int a[100]){
    int i;
    i=0;
    while(i<99 && a[i]<=a[i+1]) i++;
    return i+1;
}


int main (){
    int vet[100];
    srand(time(NULL));

    carica (vet);
    stampa(vet);
    ordine (vet);
    stampa(vet);
    printf("il vettore non e\' ordinato da %d\n", controlla(vet));
}
