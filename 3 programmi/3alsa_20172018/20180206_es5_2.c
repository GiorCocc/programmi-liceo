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

/* restituisce 0 se non ci sono elementi uguali, un valore >=1 se ci sono valori uguali*/
int uguali(int b[100], int a[100])
{
    int i;
    int cont;   //contatore elementi uguali
    cont = i = 0;
    do {
        if (a[i] == b[i]) cont++;
        i++;
    } while (i < 100);
    return cont;
}

int main()
{
    int vet[100], vet2[100], i;
    srand(time(NULL));
    carica(vet, 1);
    carica(vet2, 0);
    stampa(vet, 100);
    stampa(vet2, 100);
    if ((i=uguali(vet,vet2))) printf("Ci sono %d elementi uguali in posizioni uguali!\n", i);
    else printf("non ho trovato elementi uguali\n");
}
