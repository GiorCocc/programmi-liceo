#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void carica (int a[],int c){
    int i;
    for(i=0;i<c;i++)
        a[i]=rand()%101;

}

void stampa(int a[],int c){
    int i;
    printf("il vettore e\': ");
    for(i=0;i<c;i++)
        printf("%d\t",a[i]);
    printf("\n");
}

void somma(int a[],int b[],int d[],int c){
    int i;
    for(i=0;i<c;i++)
        d[i]=a[i]+b[i];
}

void add(int a[],int c, int d){
    int i;
    for(i=0;i<c;i++)
        a[i]+=d;
}


int main(){
    int scelta;
    int vet[100];
    int vet1[100];
    int vet2[100];
    int dim,a;
    int b;
    do{
        system("cls");
        printf("1-Caricamento vettori\n");
        printf("2-Stampa del vettori\n");
        printf("3-Somma elementi dei vettori in un terzo\n");
        printf("4-Sommo un valore a ogni elemento del vettore\n");
        printf("5-Fine\n"),
        scanf("%d", &scelta);
        switch (scelta)
        {
            case 1: {   printf("Dammi la dimensione dei vettori (<100): ");
                        scanf("%d",&dim);
                        carica(vet,dim);
                        carica(vet1,dim);
                        break;
                    }
            case 2: {   stampa(vet,dim);
                        stampa(vet1,dim);
                        break;
                    }
            case 3: {   somma(vet,vet1,vet2,dim);
                        stampa(vet2,dim);
                        stampa(vet,dim);
                        stampa(vet1,dim);
                        break;
                    }
            case 4: {   printf("Che valore vuoi aggiungere al vettore? ");
                        scanf("%d",&a);
                        add(vet,dim,a);
                        printf("Lo vuoi aggiungere anche al secondo vettore? (si=1 o no=0) ");
                        scanf("%d",&b);
                        if(b=1)
                            add(vet1,dim,a);
                        stampa(vet,dim);
                        stampa(vet1,dim);
                        break;
                    }
        }
        system("pause");
    } while (scelta != 5);
}
