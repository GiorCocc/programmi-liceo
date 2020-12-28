#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct anag {       //struttura di dati (record logico)
    int codice;
    char cognome[30];
    char nome[30];
    char luogo[90];
};


struct anag lib;        //istanza della struttura analog


//restituisce il codice dell'ultimo record letto
int ultimocodice(FILE *fp)
{
    char riga[81];  //80 caratteri + fine stringa
    char *pezzo;    //puntatore che è il contenuto della riga
    int j;
    j = 0;
    do {
            if ((pezzo=fgets (riga, 80, fp)) != NULL )
             {
                 pezzo=strtok(riga, ";");   //strtok spezza la riga; ha come parametri la stringa, in cui devo separatre i pezzi, e i separatori
                 j = atoi(pezzo);   //trasforma il carattere preso dalla riga in un intero in modo da proseguire con i codici
             }
    }while (pezzo != NULL);
    return j;       //codice della riga
}


void scrivi()
{
    FILE *fp;
    char risp;
    int cod;
    char risposta[50];
    cod = 0;
    if ((fp=fopen("classe.txt","r")) != NULL)
    {
        cod=ultimocodice(fp);
        fclose(fp);
        fp = fopen("classe.txt", "a");
    }
    else fp = fopen("classe.txt", "w");
    do {
        lib.codice = ++cod;     //Incrementa di +1 e poi lo mette in cod; recupero l'ultimo valore, lo aggiorno e poi lo inserisco
        printf("codice libro: %d\n", cod);
        printf("nome alunno: ");
        gets(lib.nome);     //correggo con gets
        printf("cognome alunno: ");
        gets(lib.cognome);   //correggo con gets
        printf("luogo di nascita: ");
        gets(lib.luogo);
        printf("E\' tutto corretto? (S/N)");
        scanf("\n%c", &risp);
        if (toupper(risp) == 'S')
            fprintf(fp, "%d;%s;%s;%d\n", lib.codice, lib.cognome, lib.nome, lib.luogo);
        printf("vuoi inserire altri alunni? (S/N) ");
        scanf("\n%c", &risp);
  } while(toupper(risp) == 'S');
  fclose(fp);
}




void sposta(char elem[81])
{
    char *pezzo;
    int i;
    i = 0;
    pezzo = strtok (elem,";");        //è il puntatore al primo pezzo, estratto dalla stringa
    while (pezzo != NULL)        //finchè pch punta a qualcosa
    {
        switch (i)
        {
                case 0: {   lib.codice = atoi(pezzo);       //codice
                            break; }
                case 1: {   strcpy(lib.cognome, pezzo);      //titolo---strcpy sposta quello che c'è in pezzo nella struttura lib
                            break; }
                case 2: {   strcpy(lib.nome, pezzo);  //autore
                            break; }
                case 3: {   strcpy(lib.luogo, pezzo);  //autore
                            break; }
        }
        pezzo = strtok (NULL, ",");        //estraggo il pezzetto successivo
        i++;
    }
    //stampa del contenuto della struct
    printf("codice alunno:\t%d\n", lib.codice);
    printf("cognome alunno:\t%s\n", lib.cognome);
    printf("nome alunno:\t%s\n", lib.nome);
    printf("luogo di nascita alunno:\t%d\n\n", lib.luogo);
}






//legge un record alla volta e visualizza il contenuto
int leggi()
{
    FILE *fp;
    char riga[81];
    char *pezzo;
    int i,j;
    j = 0;
    fp = fopen("classe.txt", "r");
    if (fp == NULL) printf ("Errore di apertura del file");
    else {
        do {
            //pulisco il contenuto di riga mettedo il carattere di fine stringa '\0'
            for (i=0; i<81;i++) riga[i] ='\0';
            if ((pezzo=fgets (riga , 80 , fp)) != NULL )        //prende una stringa alla volta
                if (!feof(fp))
                {
                    //puts (riga);
                    sposta(riga);       //mi permette di spostarmi all'interno delle variabili della stringa
                }
            j = lib.codice;
        }while (pezzo != NULL);
        fclose(fp);
    }
    return j;
}


int main()
{
    int numerecord;
    FILE *fp;
    if ((fp=fopen("classe.txt","r")) != NULL)
    scrivi();
        numerecord = ultimocodice(fp);
    printf("il codice dell'ultimo alunno e\' %d\n", numerecord);
    //stampa_anag(numerecord);
    close(fp);
}

