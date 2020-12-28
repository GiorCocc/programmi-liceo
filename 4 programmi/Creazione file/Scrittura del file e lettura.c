#include<stdio.h>
#include<stdlib.h>

void scrivi()
{
    FILE *fp;
    int g,m,a;
 //   fp = fopen("numeripari.txt", "w");
 //   if (fp != NULL)
    if ((fp = fopen("date.txt", "r")) != NULL)
    {
	fclose(fp);
	fp = fopen("date.txt","a"); }
   else  fp = fopen("date.txt", "w");
    printf("inserisci la prima data gg/mm/aaaa: ");
    scanf("%d/%d/%d", &g,&m,&a);
    fprintf(fp, "%d/%d/%d\n", g,m,a);
    printf("inserisci la seconda data gg/mm/aaaa: ");
    scanf("%d/%d/%d", &g,&m,&a);
    fprintf(fp, "%d/%d/%d\n", g,m,a);
    fclose(fp);
}

void leggi()
{
    FILE *fp;
    int i;
    int somma;
    char frase[80];
    char *riga;
    somma = 0;
 //   fp = fopen("numeripari.txt", "r");
 //   if (fp != NULL)
    if ((fp = fopen("date.txt", "r")) != NULL)
    {
        riga = fgets(frase,80,fp);
        if (riga != NULL)
        {
            printf("%s\n", riga);
            riga = fgets(frase, 80, fp);
            if (riga != NULL) printf("%s\n", riga);
            else printf("non c\'e\' la seconda riga\n");
        }
        else printf ("ho finito i dati!\n");
        fclose(fp);
    }
    else printf("Non ho trovato il file !\n");
}

/* uso la fscanf per recuperare i dati interi dal file */
void leggi2()
{
    FILE *fp;
    int g, m, a;
    if ((fp = fopen("date.txt", "r")) != NULL)
    {
        fscanf(fp, "%d/%d/%d\n", &g,&m,&a);
        printf("la prima data e\' %d/%d/%d\n", g,m,a);
        fscanf(fp, "%d/%d/%d\n", &g,&m,&a);
        printf("la seconda data e\' %d/%d/%d\n", g,m,a);
        fclose(fp);
    }
    else printf("Non ho trovato il file !\n");
}

int main()
{
    scrivi();
    leggi2();
}
