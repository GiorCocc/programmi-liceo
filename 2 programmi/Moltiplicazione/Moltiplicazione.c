#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a;//fattore
    int b;//fattore
    int prodotto;
    printf("dammi il fattore ");
    scanf("%d",&a);
    printf("dammi il fattore ");
    scanf("%d",&b);
    prodotto= a*b;
    printf("%d * %d = %d",a,b,prodotto);
}
