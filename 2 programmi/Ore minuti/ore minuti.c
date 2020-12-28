#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int val;
    int ore;
    int min;
    printf("dammi i minuti totali ");
    scanf("%d",&val);
    ore=val/60;
    min=val%60;
    printf("i minuti totali corrispondono a %d ore e %d minuti",ore,min);
}
