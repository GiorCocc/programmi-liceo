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
int main ()
{
    int n;
    printf("dammi il valore \n");
    scanf("%d",&n);
    printf("il fattoriale di %d e\' %d\n",n,fattoriale(n));
    printf("il fattoriale di %d e\' %d\n",3,fattoriale(3));
    printf("il fattoriale di %d e\' %d\n",5,fattoriale(5));
    printf("il fattoriale di %d e\' %d\n",7,fattoriale(7));
    fattoriale(3);
    10;

}
