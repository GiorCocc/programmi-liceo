#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a; //valore
    int s; //somma
    int m; //media
    int i; //variabile ciclo
    int cont; //contatore
    s=0;
    m=0;
    cont=0;
    for(i=1;i<=10;i++)
        {
        printf("dammi il valore: ");
        scanf("%d",&a);
        if(a%2==0)
            s=s+a;
        else
            {
                m=m+a;
                cont++;
            }
        }
    m=m/cont;
    printf("la somma e\': %d\n",s);
    printf("la media e\': %d\n",m);
}
