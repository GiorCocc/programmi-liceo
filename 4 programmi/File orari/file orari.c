#include<stdio.h>
#include<stdlib.h>

void scrivi()
{
    FILE *fp;
    int i,h,m,s;
    fp=fopen("orari.txt","w");
    if(fp!=NULL)
    {
        for(i=0;i<2;i++)
        {
            h=rand()%24;
            m=rand()%60;
            s=rand()%60;
            fprintf(fp,"%d:%d:%d\n",h,m,s);
        }
    }else printf("Non ho trovato il file!");
    fclose(fp);
}

void leggi()
{
    FILE *fp;
    int i,h,m,s,tot1,tot2,diff;
    tot1=tot2=diff=0;
    if ((fp = fopen("orari.txt", "r")) != NULL)
    {
        fscanf(fp, "%d:%d:%d\n", &h,&m,&s);
        tot1=s+(m*60)+(h*3600);
        fscanf(fp, "%d:%d:%d\n", &h,&m,&s);
        tot2=s+(m*60)+(h*3600);
        if(tot1<tot2)
            printf("ERRORE! Il primo orario è piu\' piccolo del secondo\n");
        else
        {
            diff=tot1-tot2;
            h=diff/3600;
            m=(diff%3600)/60;
            s=(diff%3600)%60;
            printf("La differenza tra i due orari e\': %d:%d:%d\n",h,m,s);
        }
        fclose(fp);
    }else printf("Non ho trovato il file!");
}

int main()
{
    scrivi();
    leggi();
}

