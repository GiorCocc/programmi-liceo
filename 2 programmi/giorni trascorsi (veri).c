#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int g; //giorni
    int m; //mesi
    int tot; //totale giorni
    printf("dammi la data nel formato gg/mm: ");
    scanf("%d/%d",&g,&m);
    tot+=g;
    if(m==11||m==3||m==6||m==9) tot+=30;
    else if (m==2) tot+=28;
    else tot+=31;
    printf("i giorni trascorsi sono %d\n",tot);

}
