#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a;//dividendo
    int b;//divisore
    int rapporto;
    printf("dammi il dividendo ");
    scanf("%d",&a);
    printf("dammi il divisore ");
    scanf("%d",&b);
    rapporto= a/b;
    printf("%d / %d = %d",a,b,rapporto);
}
