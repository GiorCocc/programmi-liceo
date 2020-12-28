#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct anag {       //struttura di dati (record logico)
    int codice;
    char titolo[30];
    char autore[30];
    int pz;
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
    cod = 0;
    if ((fp=fopen("libri.txt","r")) != NULL)
    {
        cod=ultimocodice(fp);
        fclose(fp);
        fp = fopen("libri.txt", "a");
    }
    else fp = fopen("libri.txt", "w");
    do {
        lib.codice = ++cod;     //Incrementa di +1 e poi lo mette in cod; recupero l'ultimo valore, lo aggiorno e poi lo inserisco
        printf("codice libro: %d\n", cod);
        printf("titolo libro: ");
        scanf("%s", &lib.titolo);  //correggo con gets
        printf("autore libro: ");
        scanf("%s", &lib.autore);   //correggo con gets
        printf("prezzo libro: ");
        scanf("%d", &lib.pz);
        printf("E\' tutto corretto? (S/N)");
        scanf("\n%c", &risp);
        if (toupper(risp) == 'S')
            fprintf(fp, "%d;%s;%s;%d\n", lib.codice, lib.titolo, lib.autore, lib.pz);
        printf("vuoi inserire altri libri? (S/N) ");
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
                case 1: {   strcpy(lib.titolo, pezzo);      //titolo---strcpy sposta quello che c'è in pezzo nella struttura lib
                            break; }
                case 2: {   strcpy(lib.autore, pezzo);  //autore
                            break; }
                case 3: {   lib.pz = atoi(pezzo);   //prezzo
                            break; }
        }
        pezzo = strtok (NULL, ",");        //estraggo il pezzetto successivo
        i++;
    }
    //stampa del contenuto della struct
    printf("codice libro:\t%d\n", lib.codice);
    printf("titolo libro:\t%s\n", lib.titolo);
    printf("autore libro:\t%s\n", lib.autore);
    printf("prezzo libro:\t%d\n\n", lib.pz);
}






//legge un record alla volta e visualizza il contenuto
int leggi()
{
    FILE *fp;
    char riga[81];
    char *pezzo;
    int i,j;
    j = 0;
    fp = fopen("libri.txt", "r");
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
    if ((fp=fopen("libri.txt","r")) != NULL)
    scrivi();
        numerecord = ultimocodice(fp);
    printf("il codice dell'ultimo libro e\' %d\n", numerecord);
//    stampa_anag(numerecord);
    close(fp);
}


/*Gestione anagrafica classe (codice alunno, nome, cognome, luogo di nascita) su questo modello.
Vdere su drive il compito*/
