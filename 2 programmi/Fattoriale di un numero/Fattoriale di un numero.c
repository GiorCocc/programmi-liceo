#include<stdio.h>
#include<stdlib.h>
int main()
{
int l; //numero
int A;//variabile che governa il ciclo
int fat; //fattoriale
printf("dammi il valore ");
scanf("%d", &l);
fat = 1;
for(A=2;A<=l;A++)
    fat = fat * A;
printf("il fattoriale di %d e\' %d\n", l, fat);
}
