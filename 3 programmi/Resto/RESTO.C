#include<stdio.h>
#include<stdlib.h>
int fresto(int a, int b)
{
    while(a>=b)
    a-=b;
    return a;
}
int main()
{
    int dividendo;
    int divisore;
    char risp;
    do{
        printf("Dammi il dividendo: ");
        scanf("%d",&dividendo);
        printf("Dammi il divisore: ");
        scanf("%d",&divisore);
        printf("Il resto ta %d e %d e\' %d\n",dividendo,divisore,fresto(dividendo,divisore));
        fflush(stdin);
        printf("Vuoi altri valori? (S/N)");
        scanf("%c",&risp);
    } while(risp=='s'||risp=='S');
}
