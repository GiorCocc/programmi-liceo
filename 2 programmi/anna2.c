#include<stdio.h>
#include<stdlib.h>
int main()
{
    int val1; //primo valore
    int val2; //secondo valore
    int somma; //somma
    printf("inserisci il primo valore ");
    scanf("%d", &val1);
    printf("inserisci il secondo valore ");
    scanf("%d", &val2);
    if (val1%2==1 && val2%2==1)
        somma = val1 - val2;
    else
    if (val1%2==0 && val2%2==0)
        somma = val1 + val2;
    else somma = val1 * val2;
    printf("il valore calcolato e\' %d\n");


}

