#include<stdio.h>
#include<stdlib.h>
int main()
{
int l; //numero generico
int i;//variabile che governa il ciclo
int n; //quantità dei valori da inserire
int som; //somma dei valori
printf("dimmi quanti valori vuoi inserire ");
scanf("%d", &n);
som = 0;
for(i=1;i<=n;i++)
{
    printf("dammi il %d^ valore ", i);
    scanf("%d", &l);
    som += l;
}
    printf("la somma trovata e\' %d\n", som);
}
