#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main ()
{
    int a; //valore
    int m; //media
    int i; //ciclo
    int cont; //contatore
    m=cont=0;
    srand(time(NULL));
    for(i=0;i<30;i++)
    {
        a=rand()%51;
        printf("%d\t",a);
        if (a<25) {
            m+=a;
            cont++;}
    }
    m=m/cont;
    printf("la media dei valori minori di 25 e\' %d",m);
}
