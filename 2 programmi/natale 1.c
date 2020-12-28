#include<stdio.h>
#include<stdlib.h>
int main()
{int i; //per il ciclo
int a; //generico valore della sequenza
int min; //valore minimo
int max; // valore massimo
printf("dammi il primo valore:");
scanf("%d",&a);
min=max=a;
while(a!=0)
{
    printf("dammi un valore:(0 per terminare) ");
    scanf("%d",&a);
    if(a!=0 && a<min) min=a;
    else if(a>max) max=a;
}
printf("il minimo ed il massimo sono rispettivamente %d e %d", min,max);
}
