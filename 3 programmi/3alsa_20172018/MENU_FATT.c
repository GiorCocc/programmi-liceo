#include<stdlib.h>
#include<stdio.h>

int fattoriale(int a)
{
    int fat, i;
    fat=1;
    for (i=2;i<=a;i++)
    {
       fat=fat * i;
    }
    return fat;
}


int fattoric(int a)
{
    int fat, i;
    fat=1;
    if (a == 1)
        return 1;
    return a * fattoric(a-1);
}

int main()
{
    int val;
    int divisore;
    int scelta;
    do {
        system("cls");
        printf("1 - calcola fattoriale (in modo iterativo)\n");
        printf("2 - calcola fattoriale (in modo ricorsivo)\n");
        printf("3 - fine\n");
        scanf("%d", &scelta);
        //printf("hai scelto il valore %d\n", scelta);
        switch (scelta)
        {
            case 1: {   printf("dammi il valore \n");
                        scanf("%d",&val);
                        printf("il fattoriale di %d e\' %d\n",val,fattoriale(val));
                        break;
                    }
            case 2: {   printf("dammi il valore \n");
                        scanf("%d",&val);
                        printf("il fattoriale di %d e\' %d\n",val,fattoric(val));
                        break;

            }
        }
        system("pause");
    } while (scelta != 3);
    printf("ciao");
}
