#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a; // valore della sequenza da stampare
    int i; //per il ciclo
    int b;// valore ultimo
    int c;// valore penultimo
    int d;// valori da stampare
    do{
    printf("dammi il valore da stampare (>2): ");
    scanf("%d", &d);
    } while (d<=2);
    printf("1 1 ");
    b=c=1;
    for(i=3; i<=d; i++)
    {
        a=b+c;
        printf("%d ",a);
        c=b; b=a;
    }
    }
