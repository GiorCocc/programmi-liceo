#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a; //primo operando
    int b; //secondo operando
    int ope; //operatore 1=+; 2=-; 3=/; 4=*
    int ris; //risultato
    ris = 0;
    printf("dammi il primo operando ");
    scanf("%d", &a);
    printf("dammi il secondo operando ");
    scanf("%d", &b);
    printf("dimmi che operazione vuoi fare (1=+; 2=-; 3=/; 4=*) ");
    scanf("%d", &ope);
    if (ope == 1) ris = a + b;
    else if (ope == 2) ris = a - b;
         else if (ope == 3) ris = a / b;
              else if (ope == 4) ris = a * b;
                   else printf("l\'operatore che hai digitato non e\' corretto!!!\n");
    if (ope == 1 || ope == 2 || ope == 3 || ope == 4)
        printf("il risultato trovato e\' %d\n", ris);
 }
