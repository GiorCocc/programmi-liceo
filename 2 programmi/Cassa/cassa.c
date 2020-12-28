#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a; //quantità merce
    int b; //prezzo merce
    int c; //spesa
    int d; //contanti
    int e; //resto
    printf("dimmi la quantita\' di merce: ");
    scanf("%d",&a);
    printf("dimmi il prezzo della merce: ");
    scanf("%d",&b);
    c=a*b;
    printf("la spesa calcolata e\': %d\n",c);
    printf("dammi i contanti: ");
    scanf("%d",&d);
    e=d-c;
    printf("il resto e\': %d",e);

}
