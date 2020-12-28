#include<stdio.h>
#include<stdlib.h>

void scrivi()
{
    FILE *fp;
    char parola[80];
    if ((fp = fopen("frase.txt", "r")) != NULL)
    {
        fclose(fp);
        fp = fopen("frase.txt","a"); }
    else  fp = fopen("frase.txt", "w");
    printf("inserisci la stringa: ");
    gets(parola);
    fputs(parola, fp);
    fputs("\n",fp);
    puts(parola);
    fclose(fp);
}

void leggi()
{
    FILE *fp;
    int i;
    char parola[80];
    char *riga;
    if ((fp = fopen("frase.txt", "r")) != NULL)
    {
        do{
            riga = fgets(parola,80,fp);
//            if (riga != NULL)
            printf("%s\n", riga);
        }while(riga!=EOF);
        fclose(fp);
    }
    else printf("Non ho trovato il file !\n");
}

int main()
{
    scrivi();
    system("pause");
    leggi();
}
