#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void scrivi(int a)
{
    FILE *fp;
    int i;
    fp=fopen("ordine.txt","w");
    if(fp!=NULL)
    {
        for(i=0;i<a;i++)
            fprintf(fp,"%d\n",rand()%101);
    }else printf("Non ho trovato il file!");
    fclose(fp);
}

void leggi()
{
    FILE *fp;
    int a,b,cont;
    cont=0;
    fp=fopen("ordine.txt","r");
    if(fp!=NULL)
    {
        fscanf(fp,"%d",&a);
        if (!feof(fp))
        {
            fscanf(fp,"%d",&b);
            if(a<b){
                    cont++;
                do {
                    fscanf(fp,"%d",&a);
                    if (!feof(fp))
                    {
                        fscanf(fp,"%d",&b);
                        if(a<b)cont++;
                    }
                } while (!feof(fp) && a<b);
            }
        }
        printf("%d\n",cont);
    }else printf("Non ho trovato il file!");
    fclose(fp);
}

int main()
{
    srand(time(NULL));
    int a=rand()%51;
    scrivi(a);
    leggi();
}
