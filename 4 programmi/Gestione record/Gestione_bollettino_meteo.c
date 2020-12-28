#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct anag {
    char tipo[30];
    char loc[30];
    int minimo;
    int massimo;
};
struct anag lib;

void stampa()
{
    printf("Localita\':\t%s\n", lib.loc);
    printf("Tipologia:\t%s\n", lib.tipo);
    printf("Temperatura minima:\t%d\n", lib.minimo);
    printf("Temperatura massima:\t%d\n\n", lib.massimo);
}
void sposta(char elem[81],int a)
{
    char *pezzo;
    int i;
    i = 0;
    pezzo = strtok (elem,";");
    while (pezzo != NULL)
    {
        switch (i)
        {
                case 0: {   strcpy(lib.loc, pezzo);
                            break; }
                case 1: {   strcpy(lib.tipo, pezzo);
                            break; }
                case 2: {   lib.minimo = atoi(pezzo);
                            break; }
                case 3: {   lib.massimo = atoi(pezzo);
                            break; }
        }
        pezzo = strtok (NULL, ";");
        i++;
    }
    if(a==0)
        stampa();
    if(a==1)
        if(lib.minimo<=0)
            stampa();
    if(a==2)
        if(lib.massimo>=30)
            stampa();
}

void scrivi()
{
    char risp;
    FILE *fp;
    if((fp=fopen("meteo.txt","r"))!=NULL)
    {
        fclose(fp);
        fp=fopen("meteo.txt","a");
    }else fp=fopen("meteo.txt","w");
    do{
        printf("Inserisci la localita\': ");
        gets(lib.loc);
        printf("Inserisci la tipologia di meteo (nuvoloso, piovoso, soleggiato...): ");
        gets(lib.tipo);
        printf("Inserisci la temperatura minima: ");
        scanf("%d",&lib.minimo);
        do{
            printf("Inserisci la temperatura massima: ");
            scanf("%d",&lib.massimo);
        }while(lib.massimo<lib.minimo);

        printf("E\' tutto corretto? (S/N)");
        scanf("\n%c", &risp);
        if (toupper(risp) == 'S')
            fprintf(fp, "%s;%s;%d;%d\n", lib.loc,lib.tipo,lib.minimo,lib.massimo);
        printf("Vuoi inserire altri dati? (S/N) ");
        scanf("\n%c", &risp);
    } while(toupper(risp) == 'S');
    fclose(fp);
}

void leggi(int a)
{
    FILE *fp;
    char frase[80];
    char *riga;

    if ((fp = fopen("meteo.txt", "r")) != NULL)
    {
        riga = fgets(frase,80,fp);
        if (riga != NULL)
        {
            sposta(frase,a);
            riga = fgets(frase, 80, fp);
            while (riga != NULL){
                sposta(frase,a);
                riga = fgets(frase, 80, fp);}
        }
        else
            printf ("ho finito i dati!\n");
        fclose(fp);
    }
    else
        printf("Non ho trovato il file !\n");
}

void leggi_alert(int a)
{
    FILE *fp;
    int scelta;
    char *riga;
    char frase[80];
    fp=fopen("meteo.txt","r");
    if(fp==NULL)
        printf("Errore nella lettura del file\n");
    else
    {
        riga = fgets(frase,80,fp);
        if (riga != NULL)
        {
            sposta(frase,a);
            riga = fgets(frase, 80, fp);
            while (riga != NULL){
                sposta(frase,a);
                riga = fgets(frase, 80, fp);}
        }
        else
            printf ("ho finito i dati!\n");
        fclose(fp);
    }
}

int main()
{
    int risp;
    int val=0;
    int scelta;
//    printf("Vuoi inserire dei dati? (1=si;0=no):");           //Messo in commento perchè crea un problema nella scrittura della località
//    scanf("%d",&risp);
        scrivi();
    printf("Vuoi leggere tutto (1) o Leggere le allerte meteo(2)? ");
    scanf("%d",&risp);
    if(risp==1)
        leggi(val);
    else
    {
        printf("Allerta meteo! Temperatura minima inferiore a 0 gradi a:\n\n");
        val++;
        leggi(val);
        printf("Coprirsi bene\n\n");
        printf("Allerta meteo! Temperatura massima superiore a 30 gradi a:\n\n");
        val++;
        leggi(val);
        printf("Bere molta acqua\n\n");
    }
}
