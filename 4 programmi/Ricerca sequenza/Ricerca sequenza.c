#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void caricaRandom(int a[100]){
    int i;
    srand(time(NULL));
    for (i=0;i<100;i++)
        a[i]=rand()%51;
}

void caricaInput(int a[5]){
    int i;
    for (i=0;i<5;i++){
            printf("Dammi il valore (<=50): ");
            scanf("%d",&a[i]);}
}

void ricerca(int a[100], int b[5]){
    int i=0;
    int j;
    int c=0;
    int min=b[0];
    while(a[i]!=min)
        i++;
//    printf("\n\ni=%d\n\n",i);
    for(j=0;j<5;j++)
    {
        if(a[i]==b[j])
        {
            c++;
//            printf("\n\nc=%d\n\n",c);
            i++;
        }
    }
    if(c==5)
        printf("La sequenza inserita e\' contenuta nel vettore 1\n");
    else
        printf("La sequenza inserita non e\' contenuta nel vettore 1\n");
}

//void stampa(int a[100]){
//    int i;
//    for(i=0;i<100;i++)
//        printf("%d\t",a[i]);
//    printf("\n");
//}
//void stampa1(int a[5]){
//    int i;
//    for(i=0;i<5;i++)
//        printf("%d\t",a[i]);
//    printf("\n");
//}

int main(){
    int vet[100];
    int vet1[5];
    caricaRandom(vet);
    printf("Carica il vettore 2\n");
    caricaInput(vet1);
    ricerca(vet,vet1);
}
