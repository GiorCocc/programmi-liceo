#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a; //valore generico
    int b; //somma
    int i; //variabile per il ciclo
    b=0;
    for (i=1; i<=10;i++)
    {
        printf("dammi il valore: ");
        scanf("%d",&a);
        b=b+a;
    }
    printf("la somma calcolata e\': %d",b);

}
