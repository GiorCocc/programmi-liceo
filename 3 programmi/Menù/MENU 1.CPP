#include<stdlib.h>
#include<stdio.h>

int somma(int a)
{
   int som=0;
   int i;
   for(i=0;i<9;i++)
    {
        printf("dammi un valore ");
        scanf("%d",&a);
        som+=a;
    }
   return som;
}


int media(int a)
{
    int b;
    int i;
    int cont=0;
    int m=0;
    for(i=0;i<a;i++)
    {
        printf("dammi il valore ");
        scanf("%d",&b);
        m+=b;
        cont++;
    }
    m=m/cont;
    return m;
}

int paridispari(int a)
{
    if(a%2==0)  return 0;
    else    return 1;
}
int main()
{
    int val;
    int som=0;
    int i;
    int scelta;
    do {
        system("cls");
        printf("1 - Calcola la somma di 10 valori inseriti dall'utente\n");
        printf("2 - Fare la media di n valori, dato n dall'utente\n");
        printf("3 - Inserito un valore di se e\' pari o dispari\n");
        printf("4 - fine\n");
        scanf("%d", &scelta);
        switch (scelta)
        {
            case 1: {   printf("dammi un valore ");
                        scanf("%d",&val);
                        som=val+somma(val);
                        printf("la somma calcolata e\' %d\n", som);
                        break;
                    }
            case 2: {   printf("dammi il numero di valori di cui vuoi fare la media \n");
                        scanf("%d",&val);
                        printf("la media dei tuoi %d valori e\' %d\n", val, media(val));
                        break;
                    }
            case 3: {   printf("dammi il valore \n");
                        scanf("%d",&val);
                        if (paridispari(val)==0)
                            printf("il valore %d e\' pari\n",val);
                        else printf("il valore %d e\' dispari\n",val);
                        break;
                    }
        }
        system("pause");
    } while (scelta != 4);
    printf("ciao");
}
