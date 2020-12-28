#include<stdlib.h>
#include<stdio.h>

void data_giorni()
{
    int tot;    //giorni trascorsi
    int giorni[11] = {31,28,31,30,31,30,31,31,30,31,30};
    int m;
    int g;
    m = 0;
    printf("dimmi quanti giorni sono trascorsi ");
    scanf("%d", &tot);
    g = tot;
    while (g >= giorni[m])
    {
        g -= giorni[m];
        m++;
    }
    if (g == 0) g = giorni[m-1];
    else m++;
    printf("la data corrispondente a %d giorni trascorsi e\' %d/%d\n", tot,g,m);
}
int differenza()
{
    int val, i;
    int min, mas, ris;
    mas = min = rand() %101;
    for (i=2; i < 51; i++)
    {
        val = rand() %101;
        if (val > mas) mas =val;
        else if (val < min) min = val;
    }
    ris = mas - min;
    return ris;
}

void stampa(int a)
{
    int i;
    printf("i divisori  del numero %d sono:\n1\t", a);
    i = 2;
    while (i <= a/2){
        if (a % i == 0) printf("%d\t", i);
        i++;
    }
    printf("%d\n", a);
}



int main()
{
     int scelta;
    do {
        system("cls");
        printf("1 - multipli di 5 tra 100 valori\n");
        printf("2 - differenza tra massimo e minimo su 50 valori\n");
        printf("3 - trovare data rispetto a giorni trascorsi\n");
        printf("4 - fine\n");
        scanf("%d", &scelta);
        //printf("hai scelto il valore %d\n", scelta);
        switch (scelta)
        {
            case 1:  { break;}
            case 2: { printf("la differenza tra il massimo e il minimo dei numeri generati e\' %d\n", differenza());
                     break;}
            case 3: { data_giorni();
                     break;}
        }
        system("pause");
    } while (scelta != 4);
}
