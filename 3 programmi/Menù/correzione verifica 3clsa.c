#include<stdlib.h>
#include<stdio.h>

void successione ()
{
   int a,i;
   int val=0;
   printf("dammi il numero dei quadrati: ");
   scanf("%d",&a);
   for (i=1;i<=a;i++)
   {
       val=i*i;
       printf("%d\t",val);
   }
}


void multipli()
{
    int a,i;
    int mult=0;
    printf("dammi il valore: ");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {
        mult=a*i;
        printf("%d\t",mult);
    }
}

int media()
{
    int m,a,i;
    int cont=0;
    m=0;
    for(i=0;i<10;i++)
    {
        printf("dammi il valore: ");
        scanf("%d",&a);
        if(a%2!=0)
        {
            m+=a;
            cont++;
        }
    }
    m/=cont;
    return m;
}
int main()
{
    int val;
    int scelta;
    do {
        system("cls");
        printf("1 - Successione dei quadrati fino a n dato dall\' utente\n");
        printf("2 - Primi 10 multipli di un valore\n");
        printf("3 - Media dei 10 valori dell'utente (solo dispari)\n");
        printf("4 - fine\n");
        scanf("%d", &scelta);
        switch (scelta)
        {
            case 1: {   successione();
                        break;}
            case 2: {   multipli(); break;}
            case 3: {   printf("la media calcolata e\' %d\n",media());
                        break;}
        }
        system("pause");
    } while (scelta != 4);
}
