#include<stdlib.h>
#include<stdio.h>

int trascorsi(int a, int b)
{
    int tot, i;
    int giorni[11] = {31,28,31,30,31,30,31,31,30,31,30};
    tot = a;
    for (i=0;i<b-1;i++)
    {
       tot += giorni[i];
    }
    return tot;
}
void trasforma()
{
    int val;
    printf("inserisci una cifra (0-9) ");
    scanf("%d", &val);
    switch (val)
    {
        case 0: {printf("zero\n"); break;}
        case 1: {printf("uno\n"); break;}
        case 2: {printf("due\n"); break;}
        case 3: {printf("tre\n"); break;}
        case 4: {printf("quattro\n"); break;}
        case 5: {printf("cinque\n"); break;}
        case 6: {printf("sei\n"); break;}
        case 7: {printf("sette\n"); break;}
        case 8: {printf("otto\n"); break;}
        case 9: {printf("nove\n"); break;}
    }
}

void calcola()
{
    int a, b, ris;
    char op;
    printf("primo valore ");
    scanf("%d", &a);
    printf("secondo valore ");
    scanf("%d", &b);
    fflush(stdin);
    printf("che operazione? (+,-,*,/) ");
    scanf("%c", &op);
    switch (op)
    {
        case '+':{ris = a + b; break;}
        case '-':{ris = a - b; break;}
        case '*':{ris = a * b; break;}
        case '/':{ris = a / b; break;}
        default :{printf("valore di operando errato!\n");
                 ris = 0;}
    }
    printf("%d %c %d = %d\n", a, op, b, ris);
}

int main()
{
    int val, val2;
    int scelta;
    do {
        system("cls");
        printf("1 - giorni trascorsi\n");
        printf("2 - calcolatrice\n");
        printf("3 - trasforma il numero in lettere\n");
        printf("4 - fine\n");
        scanf("%d", &scelta);
        //printf("hai scelto il valore %d\n", scelta);
        switch (scelta)
        {
            case 1: {   printf("dammi la data (gg/mm): ");
                        scanf("%d/%d",&val, &val2);
                        printf("i giorni trascorsi sono %d\n",trascorsi(val,val2));
                        break;
                    }
            case 2: { calcola(); break; }
            case 3: { trasforma(); break;}
        }
        system("pause");
    } while (scelta != 4);
}
