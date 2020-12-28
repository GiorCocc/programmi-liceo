#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main ()
{
    int a; //valore generico
    int i; //contatore
    int somma;
    int media;
    int c; //numeri uguali a 20
    int pari;
    srand(time(NULL));
    somma=media=c=pari=0;
    for(i=1;i<11;i++)
    {
        a=rand()%41;
        printf("%d^ valore generato e\' %d\n",i,a);
        if(a%3==0)somma+=a;
        if(a%2==0)
        {
            media+=a;
            pari++;
        }
        if(a==20) c++;
    }
    media/=pari;
    printf("la somma dei multipli di 3 e\' %d\n", somma);
    printf("la media dei pari e\' %d\n", media);
    printf("i valori uguali a 20 sono %d\n", c);
}
