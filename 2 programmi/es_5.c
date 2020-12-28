#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a; //primo valore
    int b; //secondo valore
    int i; //per il ciclo
    printf("dammi il primo valore ");
    scanf("%d", &a);
    printf("dammi il secondo valore ");
    scanf("%d", &b);
    if (a > b)
    {
        i = a;
        a = b;
        b = i;
    }
    for(i=a; i <= b; i++)
        printf("%d\t",i);
}

