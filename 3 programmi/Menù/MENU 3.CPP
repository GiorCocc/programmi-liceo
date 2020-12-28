#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int primo(int a)
{
   int i=2;
   int risp=1;
   while((i<=a/2)&&(a%i!=0))
    i++;
   if(a%i!=0)   risp=0;
   return risp;
}


void stampa(int a)
{
    int i=2;
    printf("i divisori del del numero %d sono:\n1\t",a);
    while(i<=a/2){if(a%i==0) printf("%d\t",i); i++;}
    printf("%d\n",a);
}

void quadrato(int a)
{
    float b;
    b=sqrt(a);
    if(sqrt(a)==b)  printf("il numero %d e\' un quadrato perfetto\n",a);
    else printf("il numero %d non e\' un quadrato perfetto\n",a);
}
int main()
{
    int val;
    int scelta;
    do {
        system("cls");
        printf("1 - Inserito un valore dire se e\' primo o no\n");
        printf("2 - Inserito un valore dire tutti  i divisori di quel numero\n");
        printf("3 - Inserito un valore dire se e\' un quadrato perfetto\n");
        printf("4 - fine\n");
        scanf("%d", &scelta);
        switch (scelta)
        {
            case 1: {   printf("dammi un valore ");
                        scanf("%d",&val);
                        if(primo(val)==0)
                            printf("il numero %d e\' primo\n",val);
                        else    printf("il numero %d e\' non primo\n",val);
                        break;}
            case 2: {   printf("dammi un valore ");
                        scanf("%d",&val);
                        stampa(val); break;}
            case 3: {   printf("dammi un valore ");
                        scanf("%d",&val);
                        quadrato(val);break;}
        }
        system("pause");
    } while (scelta != 4);
}
