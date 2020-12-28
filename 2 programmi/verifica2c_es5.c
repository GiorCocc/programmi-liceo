#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a; //primo valore
    int i; //per il ciclo
    printf("dammi il valore: ");
    scanf("%d", &a);
    for(i=1;i<=a;i++)
    printf("%d\n", i);
}
