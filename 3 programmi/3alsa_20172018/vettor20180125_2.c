#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main()
{
    int vet[11]={31,28,31,30,31,30,31,31,30,31,30};
    char nomegiorno[7][3]={"lu","ma","me","gi","ve","sa","do"};
    int g,m,a;
    int trascorsi,i ;
    char giorno[3];
    printf("dimmi la data nel formato gg/mm/aaaa ");
    scanf("%d/%d/%d", &g, &m, &a);
    printf("qual era il primo giorno dell\'anno? lu,ma,me... ");
    scanf("%s", giorno);    //&giorno[0]
    printf("hai inserito %s\n", giorno);
    for (i=0; i < 2; i++) giorno[i] = tolower(giorno[i]);
    printf("hai inserito %s\n", giorno);
    trascorsi = g;
    for (i = 0; i < m-1; i++) trascorsi += vet[i];
    if (m > 2 && a % 4 == 0) trascorsi++;
    printf("sono trascorsi %d giorni\n", trascorsi);
    trascorsi = trascorsi % 7;
    i = 0;
    while (i < 7 && (strcmp(giorno,nomegiorno[i]) != 0))
        i++;
    i = (i + trascorsi -1) % 7;
    printf("il giorno della settimana corrispondente a %d/%d/%d e\' %s\n",g,m,a,nomegiorno[i]);

}
