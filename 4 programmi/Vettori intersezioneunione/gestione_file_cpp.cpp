#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>

#define dim 50

using namespace std;

//scrittura in C++
void scrivi(char nome[20])
{
    int i, g;
    ofstream fp(nome);
    if (fp.is_open())
    {
        g = rand() % 49 + 2;
        for (i = 0; i < g; i++)
            fp << (rand() % 100) << endl;
        fp.close();
    }
    else cout << "Non ho potuto creare il file !" << '\n';
}
//procedura che scrive in un file il vettore c
void scrivivett(int c[2*dim], int d)
{
    int i;
    char nome[20];
    ofstream fp;
    cout << "come vuoi chiamare il file? " << endl;
    cin >> nome;
    fp.open(nome);
    if (fp.is_open())
    {
        for (i = 0; i < d; i++)
            fp << c[i] << endl;
        fp.close();
    }
    else cout << "Non ho potuto creare il file !" << '\n';
}
//lettura in C++ con ciclo
int leggi(char nome[20], int a[50])
{
    int i;
    ifstream fp(nome);
    cout << nome << endl;
    i = 0;
    if (fp.is_open())
    {
        i = -1;
        do {
            i++;
            fp >> a[i];
            cout << i << endl;
        } while(!fp.eof());
        fp.close();
    }
    else cout << "Non ho trovato il file !" << '\n';
    return i;
}


void stampa(int a[50], int n)
{
    int i;
    for (i=0; i < n; i++)
        cout << a[i] << '\t';
    cout << endl;
}
int intersezione (int a[50], int b[50], int c[50], int dima, int dimb)
{
    int i, j, k;
    k = 0;
    for (i=0; i<dima; i++)
    {
        j=0;
        while (j<dimb && a[i] != b[j]) j++;
        if (j<dimb) {
           c[k] = a[i];
            k++;}

    }
    return k;
}

int unione (int a[50], int b[50], int c[100], int dima, int dimb)
{
    int i, j, k;
    for (i=0; i<dima; i++) c[i] = a[i];
    k = dima;
    for (j=0; j<dimb; j++)
    {
        i=0;
        while (i<dima && a[i] != b[j]) i++;
        if (i==dima) {
           c[k] = b[j];
            k++;}
    }
    return k;
}

int main()
{
    char nomefile[20];
    int a[50], b[50], c[100];
    int dim1, d2, d3, d4;
    srand(time(NULL));
    cout << "come si chiama il file? " << endl;
    cin >> nomefile;
    scrivi(nomefile);
    dim1 = leggi(nomefile, a);
    stampa(a, dim1);
    cout << "come si chiama il secondo file? " << endl;
    cin >> nomefile;
    scrivi(nomefile);
    d2 = leggi(nomefile, b);
    stampa(b, d2);
    d3 = intersezione (a, b, c, dim1, d2);
    stampa(c, d3);
    scrivivett(c, d3);
    system("pause");
    d3 = unione(a, b, c, dim1, d2);
    stampa(c, d3);
    scrivivett(c, d3);
}


