#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    int vet[5]= {1,2,3,4,5};
    for(i = 0; i <5; i++)
        vet[i] = vet[i] + i;
    for(i = 0; i <5; i++)
       printf("%d\t", vet[i]);
 }
