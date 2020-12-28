#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a; //primo valore
    int b; //secondo valore
    printf("dammi il primo valore ");
    scanf("%d",&a);
    printf("dammi il secondo valore ");
    scanf("%d",&b);
    if(a>b)
        {
        printf("il numero maggiore e\' %d\n",a);
        printf("il numero minore e\' %d",b);
        }
    else{
        printf("il numero maggiore e\' %d\n",b);
        printf("il numero minore e\' %d",a);
        }
}
