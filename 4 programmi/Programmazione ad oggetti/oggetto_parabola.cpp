#include<iostream>
#include<stdlib.h>

using namespace std;

class Parabola
{
    public:
    double A;
    double B;
    double C;

    Parabola();
    Parabola(double a, double b, double c);
    void impostavalori(double a, double b, double c);
    ~Parabola();
    void equazione();
};

Parabola::Parabola()
{
    A=1;
    B=0;
    C=0;
}


Parabola::~Parabola()
{}

Parabola::Parabola(double a, double b, double c)
{
    A=a;
    B=b;
    C=c;
}

void Parabola::impostavalori(double a, double b, double c)
{
    A=a;
    B=b;
    C=c;
}

void Parabola::equazione()
{
    cout<<A<<"x^2"<<"+"<<B<<"x"<<"+"<<C<<endl;
}

int main()
{
    double A,B,C;
    Parabola p1;
    cout << "coefficenti della parabola " << endl;
    do{cout << "a= ";
    cin >> A;}while(A==0);
    cout << "b= ";
    cin >> B;
    cout << "c= ";
    cin >> C;
    p1.impostavalori(A,B,C);
    p1.equazione();
}
