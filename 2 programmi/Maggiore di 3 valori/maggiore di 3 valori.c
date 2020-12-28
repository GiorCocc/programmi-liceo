#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a; //primo valore
    int b; //secondo valore
    int c; //terzo
    printf("dammi il primo valore: ");
    scanf("%d",&a);
    printf("dammi il secondo valore: ");
    scanf("%d",&b);
    printf("dammi il terzo valore: ");
    scanf("%d",&c);
    if (a>b)
        if(a>c)
            printf("il maggiore tra i 3 numeri e\': %d",a);
        else printf("il maggiore tra i 3 numeri e\': %d",c);
    else if(b>c)
            printf("il maggiore tra i 3 numeri e\': %d",b);
        else printf("il maggiore tra i 3 numeri e\': %d",c);
}
