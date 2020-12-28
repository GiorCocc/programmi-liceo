#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void carica(int a[10])
{
    int i, risp;
    do {
    printf("vuoi caricare i valori tu (1) o random (0)? ");
    scanf("%d", &risp);
    } while (risp != 1 && risp != 0);
    if (risp == 1)
    for (i=0;i<10;i++)
    {
       printf("elemento %d^: ",i+1);
       scanf("%d", &a[i]);
    }
    else for (i=0;i<10;i++) a[i] = rand() %201;
}

void stampa(int a[10])
{
    int i;
    printf("il vettore e\':\n");
    for (i=0;i<10;i++)
       printf("%d\t",a[i]);
    printf("\n");
}
 /*funzione che restituisce la posizione dell'elemento trovato -1 altrimenti*/
int posizione(int a[10],int c)
{
    int i, risp;
    i=0;
    do {
        if(a[i]== c)
            return i;
        i++;
    } while (i < 10);
    return -1;
}

/* ricerca binaria o dicotomica: la funzione restituisce
l'indice dell'elemento, -1 se non lo trova */
int ricbin(int a[10],int c)
{
    int in, fin, mezzo;
    in = 0;
    fin = 9;
    while (in <= fin)
    {
        mezzo = (in + fin)/2;
        if (a[mezzo] == c) return mezzo;
        if (a[mezzo] > c) {fin = mezzo-1;}
        else {in = mezzo+1;}
    }
    return -1;
}

void selezione(int a[10])
{
    int i,j;
    int scambio;
    for (i=0;i<9;i++)
        for (j = i+1; j < 10; j++)
            if (a[i] > a[j])
            {
                scambio=a[i];
                a[i]=a[j];
                a[j]=scambio;
            }
}

void bubblesort(int a[10])
{
    int i,dim;
    int scambio;
    dim = 10;
    while (dim > 1)
    {
        for (i=0;i<9;i++)
            if (a[i] > a[i+1])
            {
                scambio=a[i];
                a[i]=a[i+1];
                a[i+1]=scambio;
            }
        dim--;
    }
}

void bubblesort_ott(int a[10])
{
    int i,dim;
    int scambio;
    int fatto;  //variabile che è 0 se non faccio scambi, 1 altrimenti
    dim = 10;
    fatto = 1;
    while (dim > 1 && fatto == 1)
    {
        fatto = 0;
        for (i=0;i<9;i++)
            if (a[i] > a[i+1])
            {
                scambio=a[i];
                a[i]=a[i+1];
                a[i+1]=scambio;
                fatto = 1;
            }
        dim--;
    }
}

int main()
{
    int vet[10]={0,0,0,0,0,0,0,0,0,0};
    int scelta, val, temp;
    srand(time(NULL));
    do {
        system("cls");
        printf("1 - carica il vettore\n");
        printf("2 - stampa il vettore\n");
        printf("3 - ordinamento per selezione\n");
        printf("4 - ordinamento a bolle\n");
        printf("5 - ordinamento a bolle ottimizzato\n");
        printf("6 - cerca valore nel vettore\n");
        printf("7 - cerca (binaria) valore nel vettore\n");
        printf("8 - fine\n");
        scanf("%d", &scelta);
        //printf("hai scelto il valore %d\n", scelta);
        switch (scelta)
        {
            case 1: {   carica(vet);
                        break;
                    }
            case 2: { stampa(vet); break; }
            case 3: { selezione(vet); break; }
            case 4: { bubblesort(vet); break; }
            case 5: { bubblesort_ott(vet);break; }
            case 6: { printf("che valore vuoi cercare? ");
                      scanf("%d", &val);
                      if((temp = posizione(vet, val)) != -1)
                        printf("l\'elemento compare in posizione %d\n",temp);
                      else printf("l\'elemento cercato non e\' stato trovato!\n");
                      break;}
            case 7: { printf("che valore vuoi cercare? ");
                      scanf("%d", &val);
                       if((temp = ricbin(vet, val)) != -1)
                        printf("l\'elemento compare in posizione %d\n",temp);
                      else printf("l\'elemento cercato non e\' stato trovato!\n");
                      break;}
        }
        system("pause");
    } while (scelta != 8);
}
