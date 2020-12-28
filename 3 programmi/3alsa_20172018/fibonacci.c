#include<stdio.h>
#include<stdlib.h>
int main ()
{
int n; //quantità dei valori della variabile
int i; //variabile per il ciclo
int fib; //generico valore della sequenza
int a; //precedente
int b; //successivo
fib=0;
do{
printf("inserisci un valore >2: ");
scanf("%d", &n);
}while(n<=2);
printf("1\t1");
a=b=1;
for(i=3; i<=n; i++)
{
    fib=a+b;
    printf("\t%d", fib);
    a=b;
    b=fib;
}
printf("\nciao");
}
