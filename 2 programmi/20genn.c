#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int a; //generico elemento della sequenza
    int i; //contatore
    int som; //somma elementi multipli di 3
    int med; //media pari
    int cont; //contatore valori =20
    int pari; //contatore valori pari
    srand(time(NULL));
    som=med=cont=pari=0;
    for(i=1; i < 11; i++)
    {
        a = rand() % 41;
        printf("%d^ valore generato=%d\n",i,a);
        if (a % 3 == 0) som += a;
        if (a % 2 == 0) {
            med += a;
            pari++;}
        if (a == 20) cont++;
    }
    med /= pari;
    printf("la somma dei multipli di 3 e\' %d\n", som);
    printf("la media dei pari e\' %d\n", med);
    printf("i valori = 20 sono %d\n", cont);
}
