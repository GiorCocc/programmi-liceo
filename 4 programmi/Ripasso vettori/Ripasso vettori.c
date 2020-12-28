#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void carica (int a[50]){
    int i;
    for(i=0;i<50;i++)
    {
        a[i]=rand()%101;
    }
}

void stampa(int a[50]){
    int i;
    for(i=0;i<50;i++)
    {
        printf("%d\t",a[i]);
    }
}

void sommaConta(int a[50]){
    int i;
    int s=0;
    int cont=0;
    int min;
    int max;
    printf("dammi l\'estremo inferiore dell\'intervallo: ");
    scanf("%d", &min);
    do {
            printf("dammi l\'estremo superiore dell\'intervallo(>%d): ", min);
            scanf("%d", &max);
    } while (max<min);
    for(i=0;i<50;i++)
        if(a[i]>min && a[i]<max)
        {
            s+=a[i];
            cont++;
        }
    printf("La somma e\': %d\n",s);
    printf("Gli elementi contati sono; %d\n",cont);

}


int main (){
    int vett[50];

    srand(time(NULL));
    carica(vett);
    stampa(vett);
    sommaConta(vett);
}
