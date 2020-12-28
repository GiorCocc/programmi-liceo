#include<stdio.h>
#include<stdlib.h>
void stampa(int a[100], int dim)
{
    int i;
    for (i=0;i<dim;i++)
       printf("%d\t",a[i]);
    printf("\n");
}

int main()
{
    int vet[20], vet2[10];
    int i,j,num;
    for (i=0;i<20;i++) vet[i] = 4 * (i+1);
    //for (i=0;i<20;i++) vet2[i/2] = vet[i];
    stampa(vet, 20);
    //stampa(vet2, 10);
    for (i=0;i<10;i++) vet2[i] = vet[i*2+1];
    stampa(vet2, 10);
}
