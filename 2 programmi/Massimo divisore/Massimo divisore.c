#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a; //valore
    int i; //per il ciclo
    int max; //per il perimetro
    max=0;
    printf("dammi il valore: ");
    scanf("%d", &a);
    for(i=1; i<=a/2; i++)
    {
        if(a%i==0)
        max=i;
    }
    printf("il divisore maggiore e\': %d", max);
}
