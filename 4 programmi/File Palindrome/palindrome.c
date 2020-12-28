#include<stdio.h>
#include<stdlib.h>

int scrivi()
{
    FILE *fp;
    int i=0;
    char parola[80];
    if((fp=fopen("palindrome.txt","w"))!=NULL)
    {
        printf("inserisci la stringa: ");
        gets(parola);
        fputs(parola, fp);
        while(parola[i]!='\0')
            i++;
        fclose(fp);
        return i;
    }else {printf("Non sono riuscito a creare il file\n"); return 0;}
}

void leggi(int a)
{
    FILE *fp;
    int j=0;
    char parola[80];
    char *riga;

    if ((fp = fopen("palindrome.txt", "r")) != NULL)
    {
        while(parola[j]==parola[a-1])
        {
            j++;
            a--;
        }
        if(a==0)
            printf("La parola inserita e\' palindroma\n");
        else printf("La parola inserita non e\' palindroma\n");
        fclose(fp);
    }
    else printf("Non ho trovato il file !\n");
}

int main()
{
    int lg=scrivi();
    if(lg!=0)
    {
        leggi(lg);
    }
}
