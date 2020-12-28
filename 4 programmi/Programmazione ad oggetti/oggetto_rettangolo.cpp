#include<iostream>
#include<stdlib.h>

using namespace std;

class Rettangolo
{
    public:
    double X; //primo lato
    double Y; //secondo lato

    Rettangolo();
    Rettangolo(double a, double b);
    void modificavalori(double a, double b);
    ~Rettangolo();
    double area();
    double perimetro();
};

Rettangolo::Rettangolo()
{
    X=1;
    Y=1;
}


Rettangolo::~Rettangolo()       //metodo distruttore
{}

Rettangolo::Rettangolo(double a, double b)
{
    X=a;
    Y=b;
}

void Rettangolo::modificavalori(double a, double b)
{
    X=a;
    Y=b;
}

double Rettangolo::perimetro()
{
    return ((2*X)+(2*Y));
}

double Rettangolo::area()
{
    return (X*Y);
}



int main()
{
    double X1, Y1, X2, Y2;
    Rettangolo c1;
    cout << "coordinate del primo rettangolo " << endl;
    cout << "lunghezza lato ";
    cin >> X1;
    cout << "lunghezza lato ";
    cin >> Y1;
    c1.modificavalori(X1, Y1);
    cout << "il primo rettangolo ha perimetro " << c1.perimetro() << " e area " << c1.area() << endl;
    cout << "coordinate del secondo rettangolo " << endl;
    cout << "lunghezza lato ";
    cin >> X2;
    cout << "lunghezza lato ";
    cin >> Y2;
    Rettangolo c2=Rettangolo(X2, Y2);
    cout << "il secondo rettangolo ha perimetro " << c2.perimetro() << " e area " << c2.area() << endl;
}
