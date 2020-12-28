#include<stdio.h>
#include<stdlib.h>
int main()
{
int g; //giorno
int m; //mese
int anno; //anno
int tot; //totale giorni
int i;//utile per il ciclo
printf("dammi la data(formato gg/mm/aaaa):");
scanf("%d/%d/%d",&g, &m, &anno);
tot=g;
for(i=1; i<m; i++)
{
    if(i==2)
        if(anno%4==0) tot+=29;
        else tot+=28;
    else
        if(i==4 || i==6 || i==9 || i==11) tot+=30;
        else tot+=31;
}
printf(" i giorni trascorsi sono %d\n",tot);
printf("dimmi che giorno era quello di inizio anno\n");
printf("1-domenica\n2-lunedi\'\n3-martedi\'\n");
printf("4-mercoledi\'\n5-giovedi\'\n6-venerdi\'\n");
printf("7-sabato\n");
scanf("%d",&i);
i= ((i-1) + (tot%7) - 1) % 7;
switch (i)
{

    case 0: printf("domenica\n"); break;
    case 1: printf("lunedi\'\n"); break;
    case 2: printf("martedi\'\n"); break;
    case 3: printf("mercoledi\'\n"); break;
    case 4: printf("giovedi\'\n"); break;
    case 5: printf("venerdi\'\n"); break;
    case 6: printf("sabato\n"); break;
}
}
