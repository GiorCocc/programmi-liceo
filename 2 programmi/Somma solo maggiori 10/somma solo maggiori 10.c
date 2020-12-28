#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a; //valore
    int s; //somma
    int i; //variabile ciclo
    s=0;
    for(i=1;i<=10;i++)
        {
        printf("dammi il valore: ");
        scanf("%d",&a);
        if (a>10)
            s=s+a;
        }
    printf("la somma trovata e\': %d",s);
}
