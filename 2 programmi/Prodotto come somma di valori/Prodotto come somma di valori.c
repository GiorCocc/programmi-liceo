#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a; //primo numero
    int b; //secondo numero
    int i; //variabile per il ciclo
    int p; //variabile prodotto
    p=0;
    printf("dammi il primo fattore: ");
    scanf("%d", &a);
    printf("dammi il secondo fattore: ");
    scanf("%d", &b);
    for(i=0;i<a;i++) {
    p=p+b;
    }
    printf("%d * %d = %d\n", a , b ,p);

}
