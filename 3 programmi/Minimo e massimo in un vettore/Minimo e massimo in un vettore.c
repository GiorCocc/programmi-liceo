#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main ()
{   //Costruire un programma che individui il minimo ed il massimo dei valori di un vettore e ne stampi gli indici e i valori trovati
    srand (time(NULL));
    int vet[10];
    int max,min;
    int i;
    int temp;
    carica(vet);
    max=min=vet[0];
    for(i=0;i<10;i++)
    {
        if(vet[i]<min)
            min=vet[i];
        else if(vet[i]>max)
            max=vet[i];
    }
    temp=cerca(vet,min);
    printf("Il valore minimo e\' %d e si trova in posizione %d\n",min,temp+1);
    temp=cerca(vet,max);
    printf("Il valore massimo e\' %d e si trova in posizione %d\n",max,temp+1);
}
void carica(int a[10])
{
    int i,risp;
    printf("Vuoi scegliere i valori (1) o vuoi valori casuali (0)?");
    scanf("%d",&risp);
    if(risp==1)
        for(i=0;i<10;i++)
            {
                printf("Dammi l'elemento %d: ",i+1);
                scanf("%d",&a[i]);
            }
    else
        for(i=0;i<10;i++)
        a[i]=rand()%101;
}
int cerca(int a[10],int v)
{
    int i;
    i=0;
    do{
        if(a[i]==v)
            return i;
        i++;
    } while(i<10);
}
