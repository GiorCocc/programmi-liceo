#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a; //valore
    int i; //ciclo
    int b; //valore
    b=0;
    printf("dammi il valore ");
    scanf("%d",&a);
    for(i=1;i<a/2;i++)
    {
        b=i*i;
        printf("%d\t",b);
        if(b==a) break;
    }
}
