#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a; //primo valore
    int b; //secondo valore
    int cont; //quoziente
    cont=0;
    printf("dammi il dividendo ");
    scanf("%d",&a);
    printf("dammi il divisore ");
    scanf("%d",&b);
    while(a>=b){
        a=a-b;
        cont++;}
    printf("il quoziente e\' %d\n il resto e\' %d\n",cont,a);
}
