#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

void carica(int a[50])
{
    for(int i=0;i<50;i++)
        a[i]=rand()%101;
}

void stampa(int a[50])
{
    for(int i=0;i<50;i++)
        cout<<a[i]<<'\t';
    cout<<endl;cout<<endl;
}

void bubblesort(int a[50])
{
    int i,dim;
    int scambio;
    dim = 50;
    while (dim > 1)
    {
        for (i=0;i<49;i++)
            if (a[ i ] > a[ i+1 ])
            {
                scambio=a[ i ];
                a[ i ]=a[ i+1 ];
                a[ i+1 ]=scambio;
            }
        dim --;
    }
}

void uno_minimo(int a[50], int b[50], int c[50])
{
    int i;
    for (i=0;i<50;i++)
        if(a[i]<b[i])   c[i]=a[i];
        else c[i]=b[i];
}

void due_intervalli(int a[50], int n, int m)
{
    int c,b,diff;
    for (int i=0;i<50;i++)
        if(a[i]==n)
            c=i;
    for (int i=0;i<50;i++)
        if(a[i]==m)
            b=i;
    while(c<=b)
    {
        cout<<c<<'\t';
        c++;
    }
}

void tre_max(int a[50])
{
    int massimo=a[0];
    for(int i=0;i<50;i++)
        if(a[i]>massimo)
            massimo=a[i];
    cout<<"il valore massimo e\': "<<massimo<<endl;
}

void quattro_fusione(int a[50], int b[50], int c[100])
{
    int val=0;
    for(int i=0;i<50;i++)
    {
        val=a[i];
        for(int n=i+1; n<50;n++)
            if(a[n]==a[i])
                a[n]=-1;
    }
    for(int i=0;i<50;i++)
    {
        val=b[i];
        for(int n=i+1; n<50;n++)
            if(b[n]==b[i])
                b[n]=-1;
    }
    for(int i=0; i<50;i++)
        if(a[i]!=-1)
        {
            c[val]=a[i];
            val++;
        }
    for(int i=0; i<50;i++)
        if(b[i]!=-1)
        {
            c[val]=b[i];
            val++;
        }
    cout<<"Il vettore fusione e\':"<<endl;
    for(int i=0;i<val;i++)
        cout<<c[i]<<'\t';
    cout<<endl;cout<<endl;
}

int main()
{
    srand(time(NULL));
    int vet1[50], vet2[50], vet3[50], vet4[100];
    int a,b;
    int val;
    int scelta;
    do {
        system("cls");
        cout<<"1 - Caricare e stampare i vettori"<<endl;
        cout<<"2 - Costruire un terzo vettore in cui ogni componente sia il minore di ogni vettore"<<endl;
        cout<<"3 - Inseriti due valori, stampare gli indici dei degli elementi compresi tra i valori"<<endl;
        cout<<"4 - Determinare la posizione del massimo"<<endl;
        cout<<"5 - Dati due vettori ordinati, creare i vettore fusione"<<endl;
        cout<<"6 - fine"<<endl;
        cin>>scelta;
        switch (scelta)
        {
            case 1: {   carica(vet1);
                        carica(vet2);
                        cout<<"Il primo vettore e\':"<<endl;
                        stampa(vet1);
                        cout<<"Il secondo vettore e\':"<<endl;
                        stampa(vet2);
                        break;}
            case 2: {   uno_minimo(vet1, vet2, vet3);
                        cout<<"Il terzo vettore, con i valori minimi dei primi due, e\':"<<endl;
                        stampa(vet3);
                        break;}
            case 3: {   cout<<"Dammi il valore dell'intervallo ";
                        cin>>a;
                        cin>>b;
                        cout<<"I valori compresi in questo intervallo si trovano in posizione:"<<endl;
                        due_intervalli(vet1,a,b);
                        break;}
            case 4: {   tre_max(vet1);
                        break;}
            case 5: {   bubblesort(vet1); bubblesort(vet2);
                        stampa(vet1); stampa(vet2);
                        quattro_fusione(vet1, vet2, vet4);
                        //stampa(vet1); stampa(vet2);
                        break;}
        }
        system("pause");
    } while (scelta != 6);





}
