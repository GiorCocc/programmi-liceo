#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a; //generico valore della sequenza
    int i; //variabile per gestire il ciclo
    int s; //somma degli elementi
    s=0;
    for (i=1; i<=10; i++)
    {
        printf ("inserisci il %d^ valore: ", i);
        scanf ("%d", &a);
        if (a>=10 && a<=20)
            s=s+a;
    }
    printf ("la somma trovata e\': %d ", s);
    if (s%2==0) printf ("ed e\' pari\n");
    else printf ("ed e\' dispari\n");
}
