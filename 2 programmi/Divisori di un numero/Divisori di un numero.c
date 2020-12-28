#include<stdio.h>
#include<stdlib.h>
int main()
{
int n; //numero naturale
int i; //per il ciclo
printf("dammi il valore ");
scanf("%d", &n);
printf("i divisori del numero %d inserito sono:\n", n);
for(i=1; i<=n; i++)
    if(n % i == 0) printf("%d, ", i);
}
