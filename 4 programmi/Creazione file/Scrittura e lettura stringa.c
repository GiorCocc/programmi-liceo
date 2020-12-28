#include<stdio.h>
#include<stdlib.h>

void scrittura()
{
    FILE *fp;
    char vet[1000];

    if((fp=fopen("string.txt","r"))!=NULL)
    {
        fclose(fp);
        fp=fopen("string.txt","a");
    }else fp=fopen("string.txt","w");

    printf("Inizia a scrivere (<1000 caratteri)\n");
    gets(vet);
    fputs(vet,fp);
}

void lettura()
{
    FILE *fp;
    char frase[80];
    char *riga;

    if ((fp = fopen("string.txt", "r")) != NULL)
    {
        riga = fgets(frase,80,fp);
        if (riga != NULL)
        {
            printf("%s\n", riga);
            riga = fgets(frase, 80, fp);
            if (riga != NULL)
                printf("%s\n", riga);
        }
        else
            printf ("ho finito i dati!\n");
        fclose(fp);
    }
    else
        printf("Non ho trovato il file !\n");
}

int main ()
{
    scrittura();
    lettura();
}
