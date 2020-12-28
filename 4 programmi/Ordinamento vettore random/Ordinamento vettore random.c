#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main (){
    int vett[100];
    srand(time(NULL));
    carica(vett);
    stampa(vett);
    controllaOrdina(vett);
    stampa(vett);
}

void carica(int a[100]){
    int i;
    for(i=0;i<100;i++)
    {
        a[i]=rand()%101;
    }
}

void stampa(int a[100]){
    int i;
    for(i=0;i<100;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}

void controllaOrdina(int a[100]){
    int i,j,val;
	int scambio;
	int min;
	int pos=0;
	min=a[0];

	//aggiungo il controllo per l'ordine

	do{
        printf("Il vettore e\' disordinato. Quanti valori vuoi ordinare? ");
        scanf("%d",&val);
	}while(val>100);
	for (i=0;i<val;i++)
    	for (j = i+1; j < 100; j++)
        	if (a[i] > a[j])
        	{
            	scambio=a[i];
            	a[i]=a[j];
            	a[j]=scambio;
        	}
    }
    printf("il vettore e\' disordinato a partire dal numero %d\n",a[val]);

}
