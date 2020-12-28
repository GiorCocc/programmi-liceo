#include<stdio.h>
#include<stdlib.h>

void uno (int a, int b)
{
    int i;
    for(i=a;i<b;i++)
    {
        if(i%2==0)
            printf("%d ",i);
    }
    printf("\n");
}

int due (int a)
{
    int i;
    int s=0;
    for(i=0;i<a;i+=2)
        s+=i;
    return s;
}

int tre(int a, int b)
{
    if(a%b==0)
        return 1;
    return 0;
}

int quattro(int a)
{

}

int cinque(int a[40])
{
    int i;
    int cont=0;
    for(i=0;i<40;i++)
    {
        a[i]=rand()%51;
        if(a[i]>=15 || a[i]<=20)
            cont++;
    }
    return cont;
}

int main ()
{
    int val,val1;
    int vet[40];

    printf("dammi un valore: ");
    scanf("%d",&val);
    do{printf("dammi un valore: ");
    scanf("%d",&val1);}while(val>val1);
    uno(val,val1);

    printf("dammi un valore: ");
    scanf("%d",&val);
    printf("la somma dei valori pari precedenti a %d e\' %d\n\n", val,due(val2));

    printf("dammi un valore: ");
    scanf("%d",&val);
    printf("dammi un valore: ");
    scanf("%d",&val1);
    if(tre(val,val1)==1)
        printf("Il primo valore che hai inserito e\' multiplo del secondo\n");
    else printf("Il primo valore che hai inserito non e\' multiplo del secondo\n");

    printf("dammi un valore: ");
    scanf("%d",&val);

    printf("Nel vettore ci sono %d valori compresi tra 15 e 20\n",cinque(vet));
}
