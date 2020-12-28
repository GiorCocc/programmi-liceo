#include<iostream>
#include<fstream>
#include <cstdlib>
#include<ctime>
using namespace std;

void scrivi()
{
    int i;
    int a=rand()%64+7;
    ofstream fp("cpp.txt");
    if(fp.is_open())
    {
        for(i=0;i<a;i++)
            fp<<rand()%101<<endl;
        fp.close();
    }
    else cout << "Non ho potuto creare il file !" << '\n';
}

int leggi1()
{
    int val;
    int cont=0;
    ifstream fp("cpp.txt");
    if (fp.is_open())
    {
        do {
        	fp >> val;
            if (!fp.eof())
            	cont++;
         } while (!fp.eof());
         fp.close();
         return cont;
    }
    else {
            cout << "Non ho trovato il file !" << '\n';
            return 0;
    }
}

int leggi2()
{
    int val;
    int somma=0;
    ifstream fp("cpp.txt");
    if (fp.is_open())
    {
        fp >> val;
        while (!fp.eof())
        {
            somma += val;
            fp >> val;
        }
        fp.close();
        return somma;
    }
    else {
            cout << "Non ho trovato il file !" << '\n';
            return 0;
    }
}

void leggi3()
{
    int i;
    int val;
    ofstream fp1("cpp1.txt");
    ifstream fp("cpp.txt");
    if(fp1.is_open())
        if(fp.is_open())
        {
            do {
                fp >> val;
                if (!fp.eof())
                    if(val%7==0)
                        fp1<<val<<endl;
            } while (!fp.eof());
            fp1.close();
            fp.close();
        }
        else cout << "Non ho potuto leggere il file !" << '\n';
    else cout << "Non ho potuto creare il file !" << '\n';
}

int main()
{
    srand(time(NULL));
    scrivi();
    if(leggi1()!=0)
        cout<<"Ci sono "<<leggi1()<<" valori nel file"<<endl;
    else
        cout<<"ERRORE NELLA LETTURA"<<endl;
    if(leggi2()!=0)
        cout<<"La somma trovata e\' "<<leggi2()<<endl;
    else
        cout<<"ERRORE NELLA SOMMA"<<endl;
    leggi3();
}
