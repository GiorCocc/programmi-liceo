#include<stdio.h>
#include<stdlib.h>
int main(){
    int scelta;
    int a,b,ris;
    printf("1.Somma\n2.Sottrazione\n3.Moltiplicazione\n4.Divisione\n");
    printf("Cosa operazione vuoi eseguire? \n(Dammi il numero corrispondente all'operazione che vuoi eseguire):\t");
    scanf("%d", &scelta);
    if(scelta==1){
        printf("Effettuo la somma.\n");
        printf("Dammi primo addendo: ");
        scanf("%d", &a);
        printf("Dammi secondo addendo: ");
        scanf("%d", &b);
        printf("Calcolo... \n");
        ris=a+b;
        printf("La somma e\': %d",ris);
    }
    else if(scelta==2){
        printf("Effettuo la sottrazione.\n");
        printf("Dammi minuendo: ");
        scanf("%d", &a);
        printf("Dammi sottraendo: ");
        scanf("%d", &b);
        printf("Calcolo... \n");
        ris=a-b;
        printf("la differenza e\': %d",ris);
    }
    else if(scelta==3){
        printf("Effettuo la moltiplicazione.\n");
        printf("Dammi il primo fattore: ");
        scanf("%d", &a);
        printf("Dammi il secondo fattore: ");
        scanf("%d", &b);
        printf("Calcolo... \n");
        ris=a*b;
        printf("Il prodotto e\': %d",ris);
    }
    else if(scelta==4){
        printf("Effettuo la divisione.\n");
        printf("Dammi il dividendo: ");
        scanf("%d", &a);
        printf("Dammi il divisore: ");
        scanf("%d", &b);
        printf("Calcolo... \n");
        ris=a/b;
        printf("Il rapporto e\': %d",ris);
    }
}
