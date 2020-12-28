#include<stdio.h>
#include<stdlib.h>
int main()
{
    int h; //ore primo orario
    int m; //miniuti primo orario
    int s; //secondi primo orario
    int tot; //secondi totali primo orario
    int hh; //ore secondo orario
    int mm; //miniuti secondo orario
    int ss; //secondi secondo orario
    int tota; //secondi totali secondo orario
    int diff; //differenza
    int ore;
    int minuti;
    int secondi;
    printf("dimmi il primo orario (hh:mm:ss): ");
    scanf("%d:%d:%d",&h,&m,&s);
    tot=s+(m*60)+(h*3600);
    printf("dimmi il secondo orario (hh:mm:ss): ");
    scanf("%d:%d:%d",&hh,&mm,&ss);
    tota=ss+(mm*60)+(hh*3600);
    diff=tot-tota;
    ore=diff/3600;
    minuti=(diff%3600)/60;
    secondi=(diff%3600)%60;
    printf("la differenza e\': %d:%d:%d",ore,minuti,secondi);
}
