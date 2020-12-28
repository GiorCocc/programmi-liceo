#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define dim 20


void carica (int a[dim]){
    int i;
    for(i=0;i<dim;i++)
        a[i]=rand()%101;

}

void stampa(int a[dim]){
    int i;
    printf("il vettore e\': ");
    for(i=0;i<dim;i++)
        printf("%d\t",a[i]);
    printf("\n");
}

void sommaConta(int a[dim], int b){
    int i;
    int s=0;
    int cont=0;
    for(i=0;i<dim;i++)
        if(a[i]==b)
        {
            s+=a[i];
            cont++;
        }
    printf("La somma degli elementi uguali a %d e\' %d\n",b,s);
    printf("Gli elementi contati sono %d\n",cont);
}

int uguali(int a[dim], int b[dim]){
    int i;
    for (i=0;i<dim;i++)
        if(a[i]==b[i])
            return 1;
    return 0;
}


int main(){
    srand(time(NULL));
    int scelta;
    int vet[dim];
    int vet1[dim];
    int val;
    do{
        system("cls");
        printf("1-Caricamento vettori\n");
        printf("2-Stampa del vettori\n");
        printf("3-Somma e conteggio degli elementi dei vettori uguali a un valore inserito dall'utente\n");
        printf("4-Dire se ci sono elementi uguali in posizione uguale tra i due vettori\n");
        printf("5-Fine\n"),
        scanf("%d", &scelta);
        switch (scelta)
        {
            case 1: {   carica(vet);
                        carica(vet1);
                        break;
                    }
            case 2: {   stampa(vet);
                        stampa(vet1);
                        break;
                    }
            case 3: {   printf("Dammi un valore: ");
                        scanf("%d",&val);
                        printf("Nel vettore 1 ");
                        sommaConta(vet, val);
                        printf("Nel vettore 2 ");
                        sommaConta(vet1, val);
                        break;
                    }
            case 4: {   if(uguali(vet,vet1)==1)
                            printf("Ho trovato almeno un elemento uguale in entrambi i vettori\n");
                        else printf("Non ho trovato nemmeno un elemento uguale in entrambi i vettori\n");
                        break;
                    }
        }
        system("pause");
    } while (scelta != 5);
}

