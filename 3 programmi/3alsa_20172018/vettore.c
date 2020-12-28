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

int somma(int a[10])
{
    int s,i;
    s = 0;
    for(i=0; i < 10; i++)
        s = a[i]+s;
    return s;
}

int sompa(int a[10])
{
    int s,i;
    s = 0;
    for(i=0; i < 10; i++)
        if (a[i] % 2 == 0) s = a[i]+s;
    return s;
}

int medpa(int a[10])
{
    int s,i,cont;
    cont=s = 0;
    for(i=0; i < 10; i++)
        if (a[i] % 2 == 0)
        {   s = a[i]+s;
            cont++;
        }
    s = s/cont;
    return s;
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

/* ricerca binaria o dicotomica */
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


void inserisci_ordinato(int a[10])
{
    int i, j, risp;
    for (i=0;i<10;i++)
    {
       printf("elemento %d^: ",i+1);
       scanf("%d", &risp);
       if (i==0) a[i] = risp;
       else
       {
           j = i - 1;
           while (j >= 0 && a[j] > risp)
           {
               a[j+1]=a[j];
               j--;
           }
           a[j+1]=risp;
       }
    }
}

void inserisci_ordinato2(int a[10])
{
    int i, j, k, risp;
    for (i=0;i<10;i++)
    {
       printf("elemento %d^: ",i+1);
       scanf("%d", &risp);
       k=0;
       while (k < i && a[k] < risp) k++;
       j = i;
       while (j > k) {a[j] = a[j-1]; j--; }
       a[k] = risp;
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
        printf("3 - somma elementi del vettore\n");
        printf("4 - somma elementi pari del vettore\n");
        printf("5 - media elementi pari del vettore\n");
        printf("6 - cerca valore nel vettore\n");
        printf("7 - cerca (binaria) valore nel vettore\n");
        printf("8 - inserisci ordinato nel vettore\n");

        printf("9 - fine\n");
        scanf("%d", &scelta);
        //printf("hai scelto il valore %d\n", scelta);
        switch (scelta)
        {
            case 1: {   carica(vet);
                        break;
                    }
            case 2: { stampa(vet); break; }
            case 3: { printf("La somma e\' %d\n",somma(vet)); break; }
            case 4: { printf("La somma degli elementi pari e\' %d\n",sompa(vet)); break; }
            case 5: { printf("La media degli elementi pari e\' %d\n",medpa(vet)); break; }
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
            case 8: {inserisci_ordinato(vet);}
        }
        system("pause");
    } while (scelta != 9);
}
