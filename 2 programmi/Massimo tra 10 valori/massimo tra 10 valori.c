#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a; //valore generico
    int massimo; //massimo valore
    int i; //ciclo
    printf("dammi il valore: ");
    scanf("%d",&massimo);
    for(i=2;i<=10;i++)
    {
        printf("dammi il valore: ");
        scanf("%d",&a);
        if (a>massimo)
            massimo=a;
    }
    printf("il valore massimo e\': %d",massimo);
}
