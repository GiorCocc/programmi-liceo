#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main ()
{
    int a; //valore da controllare
    int i; //divisore
    int j; //per il ciclo
    int cont; //contatore dei numeri primi
    cont = 0;
    srand(time(NULL));
    for (j=0; j < 10; j++)
    {
        a = rand() % 100 + 1;
        printf("%d ",a);
        i=2;
        while(i<=a/2 && a%i !=0)
            i++;
        if(a%i != 0) cont++;
    }
    printf("i numeri primi sono %d\n",cont);
}
