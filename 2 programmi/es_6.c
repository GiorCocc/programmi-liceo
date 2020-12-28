#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a; //valore massimo
    int i; //variabile per il ciclo
    int s;// somma
    s=0;
    printf("dammi il valore: ");
    scanf("%d", &a);
    for(i=1;i<=a;i++)
    s=s+i;
    printf("la somma e\' %d\n",s);
}

