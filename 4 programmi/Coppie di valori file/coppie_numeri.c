#include<stdio.h>
#include<stdlib.h>

void scrivi (){
FILE *fp;
int num;
int b;
fp = fopen ("coppie.txt", "w");
if ((fp)!= NULL)
{
    num=rand()%51+1;
    for(b=0;b<num;b++){
        fprintf(fp,"%d,%d\n",rand()%50,rand()%50);
    }
    fclose(fp);
}
else printf("non sono riuscito a creare il file\n");
}

void leggi (char risp[20]){
    FILE *fp;
    int cont;       //per contare le letture effettuate
    int numriga;    //valore d'ordine della coppia con somma massima
    int a,b;        //valori delle coppie
    int val;        //massimo delle somme delle coppie
    fp=fopen("coppie.txt","r");
    if(fp!=NULL){

        fscanf(fp,"%d,%d",&a,&b);
        if (!feof(fp))
        {
            val = a+b;
            cont = numriga = 1;
            do {
                fscanf(fp,"%d,%d",&a,&b);
                if (!feof(fp))
                {
                    cont++;
                    if (val < a+b) {val = a+b; numriga=cont;}
                }
            } while (!feof(fp));
        }
        printf("la coppia e\' %d\n", numriga);
        itoa(val,risp,10);
        // sprintf(risp,"%s,%s\n",val,numriga);
        printf("risp = %s\n",risp);
//        risp[3]=',';
//        itoa(numriga,&risp[4],10);
        // risp[a]='\0';
        sprintf(risp,"%d,%d", val, numriga);

    }
    else printf("non ho trovato il file\n");
}


int main(){
    char risp[20];
    srand(time(NULL));
    scrivi();
    leggi(risp);
    system("pause");
    printf("Il massimo valore della somma delle coppie e la posizione della coppia sono rispettivamente %s\n",risp);
}


