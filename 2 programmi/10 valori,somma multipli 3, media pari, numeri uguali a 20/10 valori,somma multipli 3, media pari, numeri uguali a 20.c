#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a; //valore generico
    int i; //variabile per il ciclo
    int s; //somma
    int m; //media
    int cont; //contatore per la media
    int c; //contatori uguali a 20
    s=0; m=0; c=0; cont=0;
    for(i=1;i<=10;i++)
    {
        printf("dammi il %d^ valore ",i);
        scanf("%d",&a);
        if(a%3==0)s=s+a;
        if(a==20) c++;
        if(a%2==0)
        {
            m=m+a;
            cont++;
        }
    }
    m=m/cont;
    printf("la somma di multipli di 3 e\': %d\n",s);
    printf("la media dei numeri pari e\': %d\n",m);
    printf("i numeri uguali a 20 sono: %d\n",c);
}
