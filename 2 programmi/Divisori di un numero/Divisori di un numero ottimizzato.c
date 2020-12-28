#include<stdio.h>
#include<stdlib.h>
int main()
{
int n; //numero naturale
int i; //per il ciclo
printf("dammi il valore ");
scanf("%d", &n);
printf("i divisori del numero %d inserito sono:\n1, ", n);
for(i=2; i<=n/2; i++)
    if(n % i == 0) printf("%d, ", i);
printf("%d\n", n);
}
