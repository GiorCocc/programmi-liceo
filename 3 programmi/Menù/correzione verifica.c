#include<stdlib.h>
#include<stdio.h>
#include<math.h>

void successione ()
{
   int n,i;
   printf("quanti valori vuoi stampare?");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
                    printf("%d\t",i);
   printf("\n");
}


void scomposizione()
{
    int val,i;
    int temp;
    printf("insersci il valore: ");
    scanf("%d",&val);
    temp=val;
    printf("il valore inserito %d ha i seguenti fattori primi:",val);
    i=2;
    while(temp!=1)
    {
    if(temp%i==0)
    {
          printf("%d\t",i);
          while(temp%i==0) temp/=i;       
    }
    i++;
    }
    printf("\n");
}

int media()
{
    int a,i;
    int s=0;
    for(i=1;i<=10;i++)
}
int main()
{
    int val;
    int scelta;
    do {
        system("cls");
        printf("1 - Successione dei primi n numeri\n");
        printf("2 - Scomposizione in fatori primi\n");
        printf("3 - Media di 10 valori\n");
        printf("4 - fine\n");
        scanf("%d", &scelta);
        switch (scelta)
        {
            case 1: {   successione();
                        break;}
            case 2: {   composizione(); break;}
            case 3: {   printf("la media calcolata e\' %d\n",media());
                        break;}
        }
        system("pause");
    } while (scelta != 4);
}
