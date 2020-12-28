#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a; //lato
    int p; //perimetro
    int i; //ciclo
    p=0;
    for(i=0;i<3;i++)
    {
        printf("dammi il lato ");
        scanf("%d",&a);
        p=p+a;
    }
    printf("il perimetro del triangolo e\' %d\n",p);
}
