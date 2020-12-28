#include<stdio.h>
#include<stdlib.h>
int main ()
{
int voto; //valutazione
printf("inserisci la valutazione:");
scanf("%d",&voto);
printf("dammi il secondo valore:");
scanf("%d",&b);
if (a%2 == 0 && b%2 == 0)
    m = a+b;
else if(a%2 == 1 && b%2 == 1)
        m = a-b;
if ((a%2 == 0 && b%2 == 1) || (a%2 == 1 && b%2 == 0))
    m = a*b;
printf("il valore e\'%d\n", m);
}
