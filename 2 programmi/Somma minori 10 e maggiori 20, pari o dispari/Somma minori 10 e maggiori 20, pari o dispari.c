#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a; //numero generico
    int i; //variabile del ciclo
    int s; //somma
    s=0;
    for(i=1;i<=10;i++){
    printf("dammi il %d^ valore",i);
    scanf("%d",&a);
    if(a<10 || a>20)s=s+a;}
    printf("la somma dei numeri compresi tra 10 e 20 e\' %d\n",s);
    if(s%2==0) printf("la somma e\' pari");
    else printf("la somma e\' dispari");
}
