#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int voto; //valutazione
    printf("inserisci la valutazione:");
    scanf("%d",&voto);
    if (voto>=7 && voto<=10)
        printf("bravo");
    else if(voto==6)
            printf("sufficiente");
         else if (voto==5)
                printf("insufficiente");
              else if(voto<5)
                    printf("studia di piu\'");
}
