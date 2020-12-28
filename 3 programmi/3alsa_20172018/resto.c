#include<stdlib.h>
#include<stdio.h>

int fresto(int a, int b)
{
    while(a >= b)
        a -=b;
    return a;
}

int main()
{
    int dividendo;
    int divisore;
    char risp;
    do {
        printf("inserisci il dividendo ");
        scanf("%d", &dividendo);
        printf("inserisci il divisore ");
        scanf("%d", &divisore);
        printf("il resto della divisione tra %d e %d e\' %d\n", dividendo, divisore, fresto(dividendo,divisore));
        fflush(stdin);
        printf("vuoi inserire un\'altra coppia di valori (S/N)? ");
        scanf("%c", &risp);
    } while (risp == 's' || risp == 'S');
    if (toupper(risp) == 'S') printf("ciao");
}
