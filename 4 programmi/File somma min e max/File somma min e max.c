#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void scrivi()
{
    FILE *fp;
    int a;
    int i;
    int n=rand()%101;
    fp=fopen("somma_min_max.txt","w");
    if(fp!=NULL)
    {
        for(i=0;i<n;i++)
        {
            a=rand()%101;
            fprintf(fp,"%d\n",a);
        }
        fclose(fp);
    }else printf("Non ho trovato il file\n");
}

int minimo()
{
    FILE *fp;
    int m,v;
    fp=fopen("somma_min_max.txt","r");
    if(fp!=NULL)
    {
        fscanf(fp,"%d",&m);

        while(!feof(fp))
        {
            fscanf(fp,"%d",&v);
            if(v<m)
                m=v;
        }
        return m;
    }else
    {
        printf("Non ho trovato il file\n");
        return 0;
    }
}

int massimo()
{
    FILE *fp;
    int m,v;
    fp=fopen("somma_min_max.txt","r");
    if(fp!=NULL)
    {
        fscanf(fp,"%d",&m);

        while(!feof(fp))
        {
            fscanf(fp,"%d",&v);
            if(v>m)
                m=v;
        }
        return m;
    }else
    {
        printf("Non ho trovato il file\n");
        return 0;
    }
}

int main()
{
    FILE *fp;
    int s=0;
    int min;
    int max;
    srand(time(NULL));
    scrivi();
    min=minimo();
    max=massimo();
    s=min+max;
    fp=fopen("somma_min_max.txt","a");
    if(fp!=NULL)
    {
        fprintf(fp,"La somma del minimo (%d) e del massimo (%d) e\': %d\n",min,max,s);
        printf("La somma del minimo (%d) e del massimo (%d) e\': %d\n",min,max,s);
        fclose(fp);
    }else printf("Non ho trovato il file\n");
}
