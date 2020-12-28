#include<stdlib.h>
#include<stdio.h>
#include<time.h>


/* tipo = 1 se si carica random; = 0 se si caricano valori da 101 a 200 */
void carica(int b[100], int tipo)
{
    int i;
    if (tipo)
        for(i=0; i < 100; i++)
            b[i] = rand() % 100 + 101;
    else
        for(i=0; i < 100; i++)
            b[i] = 101 + i;
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
    int vet[100], vet2[100], i;
    srand(time(NULL));
    carica(vet, 1);
    carica(vet2, 0);
    stampa(vet, 100);
    stampa(vet2, 100);
    i=-1;
    do {
        i++;
    } while (i < 100 && vet2[i] != vet[i]);
    if (i == 100) printf("non ci sono elementi uguali in posizioni uguali!\n");
    else printf("ho trovato in posizione %d, elementi uguali %d", i, vet[i]);
}
