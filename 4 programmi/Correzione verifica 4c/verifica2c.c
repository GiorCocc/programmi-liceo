#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void scrivi()
{
    FILE *fp;
    int a,i;
    fp=fopen("text.txt","w");
    do{
        a=rand()%46+5;
        for(i=0;i<a;i++)
            fprintf(fp,"%d\n",rand()%101);
    }while(a%2!=0);
    fclose(fp);
}

int leggi_conta5()
{
    FILE *fp;
    int cont=0;
    int a;
    fp=fopen("text.txt","r");
    fscanf(fp,"%d\n",&a);
    while(!feof(fp))
    {
        if(a%5==0)
            cont++;
        fscanf(fp,"%d\n",&a);
    }
    fclose(fp);
    return cont;
}

int leggi_somma10()
{
    FILE *fp;
    int a;
    int s=0;
    fp=fopen("text.txt","r");
    fscanf(fp,"%d\n",&a);
    while(!feof(fp))
    {
        if(a%10==0)
            s+=a;
        fscanf(fp,"%d\n",&a);
    }
    fclose(fp);
    return s;
}

void leggi_non7()
{
    FILE *fp,*fp1;
    int a;
    int s=0;
    fp1=fopen("text1.txt","w");
    fp=fopen("text.txt","r");
    fscanf(fp,"%d\n",&a);
    while(!feof(fp))
    {
        if(a%7!=0)
            fprintf(fp1,"%d\n",a);
        fscanf(fp,"%d\n",&a);
    }
    fclose(fp);
    fclose(fp1);
}

int main()
{
    scrivi();
    printf("Ci sono %d valori multipli di 5\n",leggi_conta5());
    printf("La somma dei valori multipli di 10 e\' %d\n",leggi_somma10());
    leggi_non7();
}
