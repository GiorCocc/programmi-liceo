#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a; //costo articolo
    int i; //quantità articolo
    int s;// spesa totale
    printf("dammi il costo: ");
    scanf("%d", &a);
    printf("dammi la quantita\': ");
    scanf("%d", &i);
    s=a*i;
    printf("la spesa totale e\' %d\n",s);
}

