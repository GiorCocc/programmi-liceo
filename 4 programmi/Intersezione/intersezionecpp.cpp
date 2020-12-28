/* dati due file con numeri all'interno (max 50 val per file).
leggo i file e scrivo i valori all'interno di due vettori (uno per file)
creo il vettore intersezione, dove metto i valori uguali tra i due vettori
riporto il vettore intersezione in un secondo file */

#include<iostream>
#include<fstream>
#include <cstdlib>
#include<ctime>

using namespace std;

void stampa(int a[50], int j)
{
    int i;
    ofstream fp("cpp3.txt");
    if(fp.is_open())
    {
         for(i=0;i<j;i++)
            fp<<a[i]<<endl;
         fp.close();
    }
    else cout << "Non ho potuto creare il file !" << '\n';
}

void inter(int a[50], int b[50])
{
    int vetint[50];
    int i=0;
    int j;
    int k=0;
    for(i=0;i<50;i++)
    {
        j=0;
        do{
            j++;
        }while(a[i]!=b[j]);
        if(a[i]==b[j]){vetint[i]=b[j]; k++;}
    }
    stampa(vetint,k);
}

void scrivi (ofstream fp)
{
    int i;
    int a=rand()%51;
    if(fp.is_open())
    {
        for(i=0;i<a;i++)
            fp<<rand()%10<<endl;
        fp.close();
    }
    else cout << "Non ho potuto creare il file !" << '\n';


}

void leggi_vett()
{
    int vet1[50];
    int vet2[50];
    int a,b;
    int j=0;
    int k=0;
    ifstream fp("cpp1.txt");
    ifstream fp1("cpp2.txt");
    if(fp.is_open()){
        if(fp1.is_open())
        {
            fp>>a;
            while(!fp.eof())
            {
                vet1[j]=a;
                j++;
                fp>>a;
            } fp.close();
            fp1>>a;
            while(!fp1.eof())
            {
                vet2[k]=a;
                k++;
                fp1>>a;
            } fp1.close();
            inter(vet1, vet2);
        }
        else cout << "Non ho potuto leggere il file !" << '\n';
    }
    else cout << "Non ho potuto leggere il file !" << '\n';
}



int main ()
{
    ofstream fp("cpp1.txt");
    ofstream fp1("cpp2.txt");
    srand(time(NULL));
    scrivi(fp);
    scrivi(fp1);
    leggi_vett();
}
