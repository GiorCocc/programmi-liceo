#include<stdio.h>
#include<stdlib.h>
int a;
int b;
int h;

void elabora()
{
    FILE *fp;
    int cont =0;
    int s=0;
    do{
        s+=a;
        s-=b;
        cont++;
    }while(s<h);
    printf("%d  %d",s,h);

    if(s>h)
        cont--;

    if ((fp = fopen("lumaca_output.txt", "r")) != NULL)
    {
        fclose(fp);
        fp = fopen("lumaca_output.txt","a"); }
    else  fp = fopen("lumaca_output.txt", "w");
    fprintf(fp, "%d\n", cont);
    fclose(fp);
}

void scrivi()
{
    FILE *fp;
    if ((fp = fopen("lumaca_input.txt", "r")) != NULL)
    {
        fclose(fp);
        fp = fopen("lumaca_input.txt","a"); }
    else  fp = fopen("lumaca_input.txt", "w");
    fprintf(fp, "5\n2\n12\n");
    fclose(fp);
}

void leggi()
{
    FILE *fp;

    if ((fp = fopen("lumaca_input.txt", "r")) != NULL)
    {
        fscanf(fp,"%d %d %d",&a,&b,&h);             //per la prima riga
        while(!feof(fp)){
            elabora();                              //Da completare, deve trovare la soluzione e stamparla nel file di output
            fscanf(fp,"%d %d %d",&a,&b,&h);}        //per le altre n righe prima di EOF
    }
    else printf("Non ho trovato il file !\n");
}

int main()
{
    scrivi();
    leggi();
//    elabora();
}
