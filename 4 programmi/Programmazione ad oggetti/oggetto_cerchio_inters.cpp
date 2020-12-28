#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<ctime>

using namespace std;

class Cerchio
{
    public:
    double X; //ascissa centro          valore con doppia precisione -> uso  il doppio della dimensione del float       hanno il modulo e l'esponente
    double Y; //ordinata centro
    double raggio;
    double a, b, c; //coefficienti della equazione generica

    Cerchio();      //non esplicito il contenuto del metodo
    Cerchio(double a, double b, double r);
    void impostavalori(double a, double b, double r);
    void eqgenerica();
    ~Cerchio();
    double area();
    double circonferenza();
    void stampa();
};

Cerchio::Cerchio()      //esplicito le istruzioni del metodo. e' sempre una dichiarazione
{
    X=0;
    Y=0;
    raggio=1;
}


Cerchio::~Cerchio()
{}

Cerchio::Cerchio(double a, double b, double r)      //inizializza le variabili del cerchio amio piacimento
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

void Cerchio::stampa()
{
    cout << "le coordinate del centro sono (" << X << "," << Y <<")\n";
    cout << "il raggio e\' " << raggio << endl;
}


void Cerchio::eqgenerica()
{
    a = - 2 * X;
    b = - 2 * Y;
    c = X * X + Y * Y - raggio * raggio;
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


int intersezione(Cerchio uno, Cerchio due)
{
    double l, rmin, rmax;       //l=distanza tra i centri
    if (uno.raggio > due.raggio) {rmax=uno.raggio; rmin=due.raggio;}
        else {rmin=uno.raggio; rmax=due.raggio;}
    l = sqrt((uno.X-due.X)*(uno.X-due.X)+(uno.Y-due.Y)*(uno.Y-due.Y));
    if ((l<=rmin+rmax) || (rmax-l<=rmin)) return 1;  //si intersecano
    return 0;   //non si intersecano
}


int main()
{
    double X1, Y1, X2, Y2, raggio1, raggio2;
    Cerchio c1;
    Cerchio c2;
    int bol= 0; //booleana
    srand(time(NULL));
    //while (bol==0)
    do{
        X1 = rand() % 100;
        Y1 = rand() % 100;
        raggio1 = rand() % 10 + 1;
        c1.impostavalori(X1, Y1, raggio1);
        c1.stampa();
        X2 = rand() % 100;
        Y2 = rand() % 100;
        raggio2 = rand() % 10 + 1;
        c2.impostavalori(X2, Y2, raggio2);
        c2.stampa();
        c1.eqgenerica();
        c2.eqgenerica();
        cout << "la prima equazione contiene " << c1.a << ", " << c1.b << " e " << c1.c << endl;
        cout << "la prima equazione contiene " << c2.a << ", " << c2.b << " e " << c2.c << endl;
        // inserire la funzione che controlla se i due cerchi si intersecano
        bol=intersezione(c1,c2);
//        if(bol==1)
//            cout<<"le circonferenze si intersecano"<<endl;
    }while(bol==0);

}
