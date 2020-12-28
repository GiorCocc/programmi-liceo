#include<stdio.h>
#include<stdlib.h>

int fattoriale(int a)
{
    int fat, i;
    fat=1;
    for (i=2;i<=a;i++)
    {
       fat=fat * i;
    }
    return fat;
}

int fattoric(int a)
{
    int fat, i;
    fat=1;
    if (a == 1)
        return 1;
    return a * fattoric(a-1);
}

int main ()
{
    int n, pippo;
    printf("dammi il valore \n");
    scanf("%d",&n);
    printf("il fattoriale di %d e\' %d\n",n,fattoric(n));
}
