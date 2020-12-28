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
        riga = fgets(parola,80,fp);
        while (riga != NULL){
            printf("%s", riga);
            riga = fgets(parola,80,fp);
        }
        fclose(fp);
    }
    else printf("Non ho trovato il file !\n");
}

int main()
{
    //scrivi();
    system("pause");
    leggi();
}
