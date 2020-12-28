#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a; //primo lato
    int b; //secondo lato
    int c; //terzo lato
    int p; //perimetro
    printf("dammi il primo lato: ");
    scanf("%d", &a);
    printf("dammi il secondo lato: ");
    scanf("%d", &b);
    printf("dammi il terzo lato: ");
    scanf("%d", &c);
    p=a+b+c;
    printf("il perimetro e\' %d\n", p);
}
