#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define dim 50

void carica (int a[dim])
{
    int i;
    for(i=0; i<dim; i++)
    {
        a[i] = rand () %101;
    }
}

void stampa (int a[dim*2], int d)
{
    int i;
    for(i=0; i<d; i++)
    {
            printf("%d\t", a[i]);
    }
    printf("\n");
}


void minimo (int a[dim], int b[dim], int c[dim])
{
    int i;
    for (i=0; i<dim; i++)
    {
        if (a[i] < b[i])    c[i] = a[i];
        else c[i] = b[i];
    }
}

void indici(int a[dim])
{
        int i;
        int m;
        int v;
        do{
            printf("inserisci i 2 valori (il secondo maggiore del primo):");
            scanf("%d %d", &v, &m);
        }while(m<v);
        printf("gli indici dei valori compresi sono:\n");
        for (i=0; i<dim; i++)
        {
            if (a[i] > v && a[i] < m)
                printf("%d\t", i);
        }
        printf("\n");
}

int massimo (int a[dim])
{
    int i;
    int k;
    k=0;
    for (i=1; i<dim; i++)
        if (a[i] > a[k])
            k = i;
    return k;
}




int unione(int a[dim], int b[dim], int c[2*dim])
{
    int k; //indice vettore unione
    int i; //indice del primo vettore
    int j; //indice del secondo vettore
    for(i=0; i<dim; i++)
        c[i] = a[i];
    k=i;
    for(j=0; j<dim; j++)
    {
        i=0;
        while(i<dim && a[i] != b[j])  i++;
        if(i==dim) c[k++] = b[j];
    }
    return k;
}

int main()
{
    int vet[dim], vet1[dim], vet2[dim*2], i;
    srand(time(NULL));
    carica(vet);
    stampa(vet, dim);
    carica(vet1);
    stampa(vet1, dim);
    minimo(vet, vet1, vet2);
    stampa(vet2, dim);
    indici(vet);
    printf("il massimo dei valori contenuti nel vettore e\': %d in posizione %d\n", vet[(i=massimo(vet))], i);
    printf("nel vettore unione sono contenuti %d valori\n", (i=unione(vet, vet1, vet2)));
    printf("e sono: ");
    stampa(vet2, i);
}
