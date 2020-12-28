#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int gg; //giorni
    int mm; //mese
    int tot; //totale giorni
    int i; //per il ciclo
    printf("data (gg/mm) ");
    scanf("%d/%d",&gg,&mm);
    tot=gg;
    for(i=1;i<mm;i++)
    {
        if(i==4||i==6||i==9||i==11)
            tot+=30;
        else if(i==2)
            tot+=28;
            else tot+=31;
    }
    printf("il totale dei giorni trascorsi e\': %d",tot);
}
