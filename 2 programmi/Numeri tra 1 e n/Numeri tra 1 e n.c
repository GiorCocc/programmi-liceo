#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a; //valore
    int i; //ciclo
    printf("dammi il valore ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
        printf("%d\t",i);
}
