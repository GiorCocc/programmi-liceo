#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<ctime>

using namespace std;

class Parabola
{
    public:
    double X; //ascissa fuoco
    double Y; //ordinata fuoco
    double dy; //equazione direttrice
    double a, b, c; //coefficienti della equazione generica

    Parabola();
    Parabola(double a, double b, double r);
    void impostavalori(double a, double b, double r);
    void eqgenerica();
    ~Parabola();
    void stampa();
    void stampaequazione();
};

Parabola::Parabola()
{
    X=0;
    Y=0;
    dy=-3;
}


Parabola::~Parabola()
{}

void Parabola::impostavalori(double a, double b, double r)
{
    X=a;
    Y=b;
    dy=r;
}

void Parabola::stampa()
{
    cout << "le coordinate del fuoco sono (" << X << "," << Y <<")\n";
    cout << "la direttrice e\' y = " << dy << endl;
}


void Parabola::eqgenerica()
{
    a = - 1 / (2*(dy-Y));
    b = - 2 * a * X;
    c = Y + (-1 + b * b) / (4 * a);
}

void Parabola::stampaequazione(){       //aggiungo i casi in cui a, b o c sono =0
    cout << "y = ";
    if (a >= 0) cout << "+";
    cout << a << "x^2 ";
    if (b >= 0) cout << "+";
    cout << b << "x ";
    if (c >= 0) cout << "+";
    cout << c <<endl;
}

int main()
{
    double X1, Y1, d1;
    Parabola c1;
    cout << "dammi le coordinate del fuoco ";
    cin >> X1 >> Y1;
    cout << "dammi l\'equazione della direttrice ";
    cin >> d1;
    c1.impostavalori(X1, Y1, d1);
    c1.stampa();
    c1.eqgenerica();
    c1.stampaequazione();
}
