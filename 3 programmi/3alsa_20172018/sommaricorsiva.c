#include<stdio.h>
#include<stdlib.h>
int som (int a)
{
if (a == 0)
return a;
return a + som (a-1);
}
int main ()
{
    int n;
    printf ("dimmi il valore: ");
    scanf ("%d", &n);
    printf ("la somma dei primi %d numeri e\' %d\n", n, som(n));
}
