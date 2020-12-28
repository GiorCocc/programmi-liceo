#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a; //valore da controllare
    int i; //divisore
    i=2;
    printf("dammi un valore ");
    scanf("%d", &a);
    while(i<=a/2 && a%i !=0)
        i++;
    if(a%i !=0) printf("il numero %d e\' primo\n",a);
    else printf("il numero %d non e\' primo\n",a);
}

