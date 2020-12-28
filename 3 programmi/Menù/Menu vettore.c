#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
    srand(time(NULL));
    int vet[10]={0,0,0,0,0,0,0,0,0,0};
    int scelta,val,temp;
    do {
        system("cls");
        printf("1 - Carica il vettore\n");
        printf("2 - Stampo il vettore\n");
        printf("3 - Somma degli elementi del vettore\n");
        printf("4 - Somma dei valori pari del vettore\n");
        printf("5 - Media dei valori pari del vettore\n");
        printf("6 - Ricerca di un elemento del vettore (ricerca sequenziale)\n");
        printf("7 - Ricerca di un elemento del vettore (ricerca binaria)\n");
        printf("8 - Ordinamento del vettore (ordinamento a bolle)\n");
        printf("9 - Ordinamento del vettore (ordinamento a bolle ottimizzato)\n");
        printf("10 - Ordinamento del vettore (ordinamento per selezione)\n");
        printf("11 - Inserimento ordinato (partenza dal fondo)\n");
        printf("12 - Inserimento ordinato (partenza dall\' inizio)\n");

        printf("13 - fine\n");
        scanf("%d", &scelta);
        switch (scelta)
        {
            case 1: {   carica(vet);
                        break;}
            case 2: {   stampa(vet);
                        break;}
            case 3: {   printf("La somma dei valori del vettore e\': %d\n",somma(vet));
                        break;}
            case 4: {   printf("La somma dei valori pari del vettore e\': %d\n",somma_pari(vet));
                        break;}
            case 5: {   printf("La media dei valori pari del vettore e\': %d\n",media(vet));
                        break;}
            case 6: {   printf("che valore vuoi cercare? ");
                        scanf("%d",&val);
                        if((temp=cerca(vet,val))!=-1)
                            printf("il valore %d compare nel vettore in posizione %d\n",val,temp);
                        else printf("il valore %d non compare nel vettore",val);
                        break;}
            case 7: {   printf("che valore vuoi cercare? ");
                        scanf("%d",&val);
                        if((temp=cerca_binaria(vet,val))!=-1)
                            printf("il valore %d compare nel vettore in posizione %d\n",val,temp);
                        else printf("il valore %d non compare nel vettore",val);
                        break;}
            case 8: {   bubblesort(vet);
                        break;}
            case 9: {   bubblesort_o(vet);
                        break;}
            case 10: {  ordinamento_selezione(vet);
                        break;}
            case 11: {  ins_ordinato(vet);
                        break;}
            case 12: {  ins_ordinato1(vet);
                        break;}
        }
        system("pause");
    } while (scelta != 13);
}

void carica(int a[10])
{
    int i,risp;
    printf("Vuoi scegliere i valori (1) o vuoi valori casuali (0)?");
    scanf("%d",&risp);
    if(risp==1)
        for(i=0;i<10;i++)
            {
                printf("Dammi l'elemento %d: ",i+1);
                scanf("%d",&a[i]);
            }
    else
        for(i=0;i<10;i++)
        a[i]=rand()%101;
}

void stampa (int a[10])
{
    int i;
    for(i=0;i<10;i++)
        printf("%d\t",a[i]);
    printf("\n");
}

int somma (int a[10])
{
    int i,s;
    s=0;
    for(i=0;i<10;i++)
        s+=a[i];
    return s;
}

int somma_pari (int a[10])
{
    int i,s;
    s=0;
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
            s+=a[i];
    }
    return s;
}

int media (int a[10])
{
    int i,s,cont;
    s=cont=0;
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            s+=a[i];
            cont++;
        }
    }
    s/=cont;
    return s;
}

int cerca (int a[10],int c)
{
    int i,risp;
    i=0;
    do{
        if(a[i]==c)
            return i;
        i++;
    } while(i<10);
    return -1;
}
int cerca_binaria(int a[10],int c)
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
void bubblesort(int a[10],int c)
{
     int i,dim;
    int scambio;
    dim = 10;
    while (dim > 1)
    {
        for (i=0;i<9;i++)
            if (a[ i ] > a[ i+1 ])
            {
                scambio=a[ i ];
                a[ i ]=a[ i+1 ];
                a[ i+1 ]=scambio;
            }
        dim --;
    }
}

void ordinamento_selezione (int a [10])
{
     int i,j;
    int scambio;
    for (i=0;i<9;i++)
        for (j = i+1; j < 10; j++)
            if (a[ i ] > a[ j ])
            {
                scambio=a[ i ];
                a[ i ]=a[ j ];
                a[ j ]=scambio;
            }
}
void bubblesort_o(int a[10],int c)
{
    int i,dim;
    int scambio;
    int fatto; //variabile che è 0 se non faccio scambi, 1 altrimenti
    dim = 10;
    fatto = 1;
    while (dim > 1 && fatto == 1)
    {
        fatto = 0;
        for (i=0;i<9;i++)
            if (a[ i ] > a[ i+1 ])
            {
                scambio=a[ i ];
                a[ i ]=a[ i+1 ];
                a[ i+1 ]=scambio;
                fatto = 1;
            }
        dim--;
    }
}
void ins_ordinato (int a[10])
{
    int i,j,risp;
    for(i=0;i<10;i++)
    {
        printf("Dammi un valore ");
        scanf("%d",&risp);
        if(i==0)
            a[i]=risp;
        else
        {
            j=i-1;
            while(a[j]>risp && j>=0)
            {
                a[j+1]=a[j];
                j--;
            }
            a[j+1]=risp;
        }
    }
}
void ins_ordinato1(int a[10])
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
