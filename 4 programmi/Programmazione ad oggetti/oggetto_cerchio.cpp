#include<iostream>
#include<stdlib.h>

using namespace std;

class Cerchio
{
    public:
    double X; //ascissa centro
    double Y; //ordinata centro
    double raggio;

    Cerchio();
    Cerchio(double a, double b, double r);
    void impostavalori(double a, double b, double r);
    ~Cerchio();
    double area();
    double circonferenza();
};

Cerchio::Cerchio()
{
    X=0;
    Y=0;
    raggio=1;
}


Cerchio::~Cerchio()
{}

Cerchio::Cerchio(double a, double b, double r)
{
    X=a;
    Y=b;
    raggio=r;
}

void Cerchio::impostavalori(double a, double b, double r)
{
    X=a;
    Y=b;
    raggio=r;
}

double Cerchio::circonferenza()
{
    const double Pigreco= 3.141593;
    return (2 * raggio * Pigreco);
}

double Cerchio::area()
{
    const double Pigreco= 3.141593;
    return (raggio * raggio * Pigreco);
}



int main()
{
    double X1, Y1, X2, Y2, raggio1, raggio2;
    Cerchio c1;
    cout << "coordinate del primo cerchio " << endl;
    cout << "ascissa del centro ";
    cin >> X1;
    cout << "ordinata del centro ";
    cin >> Y1;
    cout << "valore del raggio "; cin >> raggio1;
    c1.impostavalori(X1, Y1, raggio1);
    cout << "il primo cerchio ha circonferenza " << c1.circonferenza() << " e area " << c1.area() << endl;
    cout << "coordinate del secondo cerchio " << endl;
    cout << "ascissa del centro ";
    cin >> X2;
    cout << "ordinata del centro ";
    cin >> Y2;
    cout << "valore del raggio "; cin >> raggio2;
    Cerchio c2=Cerchio(X2, Y2, raggio2);
    cout << "il secondo cerchio ha circonferenza " << c2.circonferenza() << " e area " << c2.area() << endl;
}
