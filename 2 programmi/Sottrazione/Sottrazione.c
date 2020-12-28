#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a;//minuendo
    int b;//sottraendo
    int differenza;
    printf("dammi il minuendo ");
    scanf("%d",&a);
    printf("dammi il sottraendo ");
    scanf("%d",&b);
    differenza= a-b;
    printf("%d - %d = %d",a,b,differenza);
}
