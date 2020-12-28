#include <stdio.h>

int main()
{
    int num1, num2;
    int cont, cont1;
    printf("dammi il primo numero ");
    scanf("%d", &num1);
    printf("dammi il secondo numero ");
    scanf("%d", &num2);
    cont = num1;
    cont1 =num2;
    while (cont != cont1)
        if (cont > cont1) cont -= cont1;
        else cont1 -= cont;
    printf("I = %d\n", cont);
}
