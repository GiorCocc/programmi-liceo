#include<stdio.h>
#include<stdlib.h>
int sommaric(int a)
{
    int som, i;
    som=0;
    for(i=1;i<=a;i++)
    {
       som= som + i;
    }
    return som;

}
int main ()
{
    int n;
    printf("dammi il numero di valori di cui vuoi fare la somma \n");
    scanf("%d",&n);
    printf("la somma dei primi %d valori e/': %d\n",n,sommaric(n));
}
