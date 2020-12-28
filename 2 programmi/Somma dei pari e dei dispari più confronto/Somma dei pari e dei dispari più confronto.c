#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int val; //valore
    int s; //somma valori pari
    int ss; //somma valori dispari
    int i; //variabile per il ciclo
    s=0; ss=0;
    for(i=1;i<=10;i++)
    {
        printf("dammi il %d^ valore ",i);
        scanf("%d",&val);
        if(val%2==0)s=s+val;
        else ss=ss+val;
    }
    printf("la somma dei numeri pari e\' %d\n", s);
    printf("la somma dei numeri dispari e\' %d\n", ss);
    if(s>ss) printf("la somma dei numeri pari e\' maggiore della somma dei numeri dispari\n");
        else printf("la somma dei numeri dispari e\' maggiore della somma dei numeri pari\n");
}
