#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int variabiledecisionale;
    printf("Questi sono tutti i programmi svolti durante l\'anno scolatico 2016-2017\n\n");
    printf("1-  Addizione di 2 termini\n2-  Sottrazione di 2 termini\n3-  Moltiplicazione di 2 termini\n4-  Divisione di 2 termini\n5-  Dati 10 valori, fa la somma dei pari e la media dei dispari\n");
    printf("6-  Dati 10 valori casuali, fa la somma dei multipli di 3, la media dei valori pari e conta i numeri uguali a 20\n7-  Dati 10 valori, fa la somma dei multipli di 3, la media dei valori pari e conta i numeri uguali a 20\n8-  Area del quadrato\n9-  Simulatore di cassa\n10- Data una data, calcolare i giorni trascorsi dall\'inizio dell\'anno\n");
    printf("11- Divisione come successione di sottrazioni\n12- Divisori di un numero\n13- Fattoriale di un numero\n14- Giorno della settimana corrispondente alla data\n15- Dati 3 valori dire quale e\' il maggiore\n");
    printf("16- Dati 2 valori dire quale e\' il maggiore e quale il minore\n17- Dati 2 orari calcola la differenza\n18- Massimo divisore di un numero\n19- Dati un numero di valori dire quale tra tutti e\' il minimo e il massimo\n20- Dati 10 valori dire quale e\' il valore massimo\n");
    printf("21- Minuti totali\n22- Dato un numero dire tutti i numeri precedenti\n23- Numero primo\n24- Converitore ore/minuti\n25- Perimetro del triangolo\n");
    printf("26- Prodotto come somma ripetuta\n27- Dato un valore dice tutti i primi quadrati\n28- Somma di 10 valori\n29- Somma dei valori pari e dei dispari più confronto\n30- Somma dei valori compresi tra 10 e 20 e dice se pari o dispari\n");
    printf("31- Somma di n numeri\n32- Somma dei valori minori 10 e maggiori 20 e dice separi o dispari\n33- Somma dei valori solo maggiori di 10\n34- Giudizio scolastico\n35- 30 valori casuali e media minori 25\n");
    printf("36- Indovinare il numero\n37- Dati 10 valori, somma multipli di 3, media pari, numero di multipli di 5\n38- 30 valori casuali e media minori 25\n39- Numeri multipli di 7\n40- 10 valori casuali, conto numeri primi\n");
    printf("41- Dati 10 valori fa la somma dei pari e dei dispari e la differenza tra le due\n42- 100 valori casuali e conteggio numeri primi\n43- Fibonacci\n");
    do {
            printf("\n\nScegliere il numero corrispondente al programma: ");
            scanf("%d",&variabiledecisionale);
        } while (variabiledecisionale==0);
    if(variabiledecisionale==1)
    {
        int a;//addendo
        int b;//addendo
        int somma;
        printf("dammi il primo addendo ");
        scanf("%d",&a);
        printf("dammi il secondo addendo ");
        scanf("%d",&b);
        somma=a+b;
        printf("%d+%d=%d",a,b,somma);
    }
    else if(variabiledecisionale==2)
    {
        int a;//minuendo
        int b;//sottraendo
        int differenza;
        printf("dammi il minuendo ");
        scanf("%d",&a);
        printf("dammi il sottraendo ");
        scanf("%d",&b);
        differenza= a-b;
        printf("%d - %d = %d",a,b,differenza);
    }
    else if(variabiledecisionale==3)
    {
        int a;//fattore
        int b;//fattore
        int prodotto;
        printf("dammi il fattore ");
        scanf("%d",&a);
        printf("dammi il fattore ");
        scanf("%d",&b);
        prodotto= a*b;
        printf("%d * %d = %d",a,b,prodotto);
    }
    else if(variabiledecisionale==4)
    {
        int a;//dividendo
        int b;//divisore
        int rapporto;
        printf("dammi il dividendo ");
        scanf("%d",&a);
        printf("dammi il divisore ");
        scanf("%d",&b);
        rapporto= a/b;
        printf("%d / %d = %d",a,b,rapporto);
    }
    else if(variabiledecisionale==5)
    {
        int a; //valore
        int s; //somma
        int m; //media
        int i; //variabile ciclo
        int cont; //contatore
        s=0;
        m=0;
        cont=0;
        for(i=1;i<=10;i++)
        {
            printf("dammi il valore: ");
            scanf("%d",&a);
            if(a%2==0)
                s=s+a;
            else
            {
                m=m+a;
                cont++;
            }
        }
        m=m/cont;
        printf("la somma e\': %d\n",s);
        printf("la media e\': %d\n",m);
    }
    else if(variabiledecisionale==6)
    {
        int a; //valore generico
        int i; //contatore
        int somma;
        int media;
        int c; //numeri uguali a 20
        int pari;
        srand(time(NULL));
        somma=media=c=pari=0;
        for(i=1;i<11;i++)
        {
            a=rand()%41;
            printf("%d^ valore generato e\' %d\n",i,a);
            if(a%3==0)somma+=a;
            if(a%2==0)
            {
                media+=a;
                pari++;
            }
            if(a==20) c++;
        }
        media/=pari;
        printf("la somma dei multipli di 3 e\' %d\n", somma);
        printf("la media dei pari e\' %d\n", media);
        printf("i valori uguali a 20 sono %d\n", c);
    }
    else if(variabiledecisionale==7)
    {
        int a; //valore generico
        int i; //variabile per il ciclo
        int s; //somma
        int m; //media
        int cont; //contatore per la media
        int c; //contatori uguali a 20
        s=0; m=0; c=0; cont=0;
        for(i=1;i<=10;i++)
        {
            printf("dammi il %d^ valore ",i);
            scanf("%d",&a);
            if(a%3==0)s=s+a;
            if(a==20) c++;
            if(a%2==0)
            {
                m=m+a;
                cont++;
            }
        }
        m=m/cont;
        printf("la somma di multipli di 3 e\': %d\n",s);
        printf("la media dei numeri pari e\': %d\n",m);
        printf("i numeri uguali a 20 sono: %d\n",c);
    }
    else if(variabiledecisionale==8)
    {
        int l; //lato
        int A;//area
        printf("dammi il lato ");
        scanf("%d", &l);
        A = l*l;
        printf("l'area del quadrato e\' %d\n", A);
    }
    else if(variabiledecisionale==9)
    {
        int a; //prezzo articolo
    int s; //somma
    char r; //richiesta
    int q; //quantità
    r="S";
    s=0;
    do{
        printf("dimmi il prezzo articolo: ");
        scanf("%d",&a);
        printf("dimmi la quantita\' di articoli: ");
        scanf("%d",&q);
        s+=(a*q);
        printf("hai ancora degli articoli? (S/N):");
        scanf("\n%c",&r);
    } while(toupper(r)=="S");
    printf("il costo totale e\' %d\n",s);
    }
    else if(variabiledecisionale==10)
    {
        int g; //giorni
    int m; //mesi
    int tot; //totale giorni
    printf("dammi la data nel formato gg/mm: ");
    scanf("%d/%d",&g,&m);
    tot+=g;
    if(m==11||m==3||m==6||m==9) tot+=30;
    else if (m==2) tot+=28;
    else tot+=31;
    printf("i giorni trascorsi sono %d\n",tot);
    }
    else if(variabiledecisionale==11)
    {
        int a; //primo valore
    int b; //secondo valore
    int cont; //quoziente
    cont=0;
    printf("dammi il dividendo ");
    scanf("%d",&a);
    printf("dammi il divisore ");
    scanf("%d",&b);
    while(a>=b){
        a=a-b;
        cont++;}
    printf("il quoziente e\' %d\n il resto e\' %d\n",cont,a);
    }
    else if(variabiledecisionale==12)
    {
        int n; //numero naturale
int i; //per il ciclo
printf("dammi il valore ");
scanf("%d", &n);
printf("i divisori del numero %d inserito sono:\n1, ", n);
for(i=2; i<=n/2; i++)
    if(n % i == 0) printf("%d, ", i);
printf("%d\n", n);
    }
    else if(variabiledecisionale==13)
    {
        int l; //numero
int A;//variabile che governa il ciclo
int fat; //fattoriale
printf("dammi il valore ");
scanf("%d", &l);
fat = 1;
for(A=2;A<=l;A++)
    fat = fat * A;
printf("il fattoriale di %d e\' %d\n", l, fat);
    }
    else if(variabiledecisionale==14)
    {
        int g; //giorno
int m; //mese
int anno; //anno
int tot; //totale giorni
int i;//utile per il ciclo
printf("dammi la data(formato gg/mm/aaaa):");
scanf("%d/%d/%d",&g, &m, &anno);
tot=g;
for(i=1; i<m; i++)
{
    if(i==2)
        if(anno%4==0) tot+=29;
        else tot+=28;
    else
        if(i==4 || i==6 || i==9 || i==11) tot+=30;
        else tot+=31;
}
printf(" i giorni trascorsi sono %d\n",tot);
printf("dimmi che giorno era quello di inizio anno\n");
printf("1-domenica\n2-lunedi\'\n3-martedi\'\n");
printf("4-mercoledi\'\n5-giovedi\'\n6-venerdi\'\n");
printf("7-sabato\n");
scanf("%d",&i);
i= ((i-1) + (tot%7) - 1) % 7;
switch (i)
{

    case 0: printf("domenica\n"); break;
    case 1: printf("lunedi\'\n"); break;
    case 2: printf("martedi\'\n"); break;
    case 3: printf("mercoledi\'\n"); break;
    case 4: printf("giovedi\'\n"); break;
    case 5: printf("venerdi\'\n"); break;
    case 6: printf("sabato\n"); break;
}
    }
    else if(variabiledecisionale==15)
    {
        int a; //primo valore
    int b; //secondo valore
    int c; //terzo
    printf("dammi il primo valore: ");
    scanf("%d",&a);
    printf("dammi il secondo valore: ");
    scanf("%d",&b);
    printf("dammi il terzo valore: ");
    scanf("%d",&c);
    if (a>b)
        if(a>c)
            printf("il maggiore tra i 3 numeri e\': %d",a);
        else printf("il maggiore tra i 3 numeri e\': %d",c);
    else if(b>c)
            printf("il maggiore tra i 3 numeri e\': %d",b);
        else printf("il maggiore tra i 3 numeri e\': %d",c);
    }
    else if(variabiledecisionale==16)
    {
        int a; //primo valore
    int b; //secondo valore
    printf("dammi il primo valore ");
    scanf("%d",&a);
    printf("dammi il secondo valore ");
    scanf("%d",&b);
    if(a>b)
        {
        printf("il numero maggiore e\' %d\n",a);
        printf("il numero minore e\' %d",b);
        }
    else{
        printf("il numero maggiore e\' %d\n",b);
        printf("il numero minore e\' %d",a);
        }
    }
    else if(variabiledecisionale==17)
    {
        int h; //ore primo orario
    int m; //miniuti primo orario
    int s; //secondi primo orario
    int tot; //secondi totali primo orario
    int hh; //ore secondo orario
    int mm; //miniuti secondo orario
    int ss; //secondi secondo orario
    int tota; //secondi totali secondo orario
    int diff; //differenza
    int ore;
    int minuti;
    int secondi;
    printf("dimmi il primo orario (hh:mm:ss): ");
    scanf("%d:%d:%d",&h,&m,&s);
    tot=s+(m*60)+(h*3600);
    printf("dimmi il secondo orario (hh:mm:ss): ");
    scanf("%d:%d:%d",&hh,&mm,&ss);
    tota=ss+(mm*60)+(hh*3600);
    diff=tot-tota;
    ore=diff/3600;
    minuti=(diff%3600)/60;
    secondi=(diff%3600)%60;
    printf("la differenza e\': %d:%d:%d",ore,minuti,secondi);
    }
    else if(variabiledecisionale==18)
    {
        int a; //valore
    int i; //per il ciclo
    int max; //per il perimetro
    max=0;
    printf("dammi il valore: ");
    scanf("%d", &a);
    for(i=1; i<=a/2; i++)
    {
        if(a%i==0)
        max=i;
    }
    printf("il divisore maggiore e\': %d", max);
    }
    else if(variabiledecisionale==19)
    {
        int i; //per il ciclo
int a; //generico valore della sequenza
int min; //valore minimo
int max; // valore massimo
printf("dammi il primo valore:");
scanf("%d",&a);
min=max=a;
while(a!=0)
{
    printf("dammi un valore:(0 per terminare) ");
    scanf("%d",&a);
    if(a!=0 && a<min) min=a;
    else if(a>max) max=a;
}
printf("il minimo ed il massimo sono rispettivamente %d e %d", min,max);
    }
    else if(variabiledecisionale==20)
    {
        int a; //valore generico
    int massimo; //massimo valore
    int i; //ciclo
    printf("dammi il valore: ");
    scanf("%d",&massimo);
    for(i=2;i<=10;i++)
    {
        printf("dammi il valore: ");
        scanf("%d",&a);
        if (a>massimo)
            massimo=a;
    }
    printf("il valore massimo e\': %d",massimo);
    }
    else if(variabiledecisionale==21)
    {
        int ore; //ore
   int min; //minuti
   int tot; //minuti totali
   printf("dammi ore e minuti (hh:mm) ");
   scanf("%d:%d",&ore,&min);
   tot=min+(ore*60);
   printf("i minuti totali sono: %d",tot);
    }
    else if(variabiledecisionale==22)
    {
        int a; //valore
    int i; //ciclo
    printf("dammi il valore ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
        printf("%d\t",i);
    }
    else if(variabiledecisionale==24)
    {
        int val;
    int ore;
    int min;
    printf("dammi i minuti totali ");
    scanf("%d",&val);
    ore=val/60;
    min=val%60;
    printf("i minuti totali corrispondono a %d ore e %d minuti",ore,min);
    }
    else if(variabiledecisionale==25)
    {
        int a; //lato
    int p; //perimetro
    int i; //ciclo
    p=0;
    for(i=0;i<3;i++)
    {
        printf("dammi il lato ");
        scanf("%d",&a);
        p=p+a;
    }
    printf("il perimetro del triangolo e\' %d\n",p);
    }
    else if(variabiledecisionale==23)
    {
        int a; //valore da controllare
    int i; //divisore
    i=2;
    printf("dammi un valore ");
    scanf("%d", &a);
    while(i<=a/2 && a%i !=0)
        i++;
    if(a%i !=0) printf("il numero %d e\' primo\n",a);
    else printf("il numero %d non e\' primo\n",a);
    }
    else if(variabiledecisionale==26)
    {
        int a; //primo numero
    int b; //secondo numero
    int i; //variabile per il ciclo
    int p; //variabile prodotto
    p=0;
    printf("dammi il primo fattore: ");
    scanf("%d", &a);
    printf("dammi il secondo fattore: ");
    scanf("%d", &b);
    for(i=0;i<a;i++) {
    p=p+b;
    }
    printf("%d * %d = %d\n", a , b ,p);
    }
    else if(variabiledecisionale==27)
    {
        int a; //valore
    int i; //ciclo
    int b; //valore
    b=0;
    printf("dammi il valore ");
    scanf("%d",&a);
    for(i=1;i<a/2;i++)
    {
        b=i*i;
        printf("%d\t",b);
        if(b==a) break;
    }
    }
    else if(variabiledecisionale==28)
    {
        int a; //valore generico
    int b; //somma
    int i; //variabile per il ciclo
    b=0;
    for (i=1; i<=10;i++)
    {
        printf("dammi il valore: ");
        scanf("%d",&a);
        b=b+a;
    }
    printf("la somma calcolata e\': %d",b);

    }
    else if(variabiledecisionale==29)
    {
        int val; //valore
    int s; //somma valori pari
    int ss; //somma valori dispari
    int i; //variabile per il ciclo
    s=0; ss=0;
    for(i=1;i<=10;i++)
    {
        printf("dammi il %d^ valore ",i);
        scanf("%d",&val);
        if(val%2==0)s=s+val;
        else ss=ss+val;
    }
    printf("la somma dei numeri pari e\' %d\n", s);
    printf("la somma dei numeri dispari e\' %d\n", ss);
    if(s>ss) printf("la somma dei numeri pari e\' maggiore della somma dei numeri dispari\n");
        else printf("la somma dei numeri dispari e\' maggiore della somma dei numeri pari\n");
    }
    else if(variabiledecisionale==30)
    {
        int a; //generico valore della sequenza
    int i; //variabile per gestire il ciclo
    int s; //somma degli elementi
    s=0;
    for (i=1; i<=10; i++)
    {
        printf ("inserisci il %d^ valore: ", i);
        scanf ("%d", &a);
        if (a>=10 && a<=20)
            s=s+a;
    }
    printf ("la somma trovata e\': %d ", s);
    if (s%2==0) printf ("ed e\' pari\n");
    else printf ("ed e\' dispari\n");
    }
    else if(variabiledecisionale==31)
    {
        int l; //numero generico
int i;//variabile che governa il ciclo
int n; //quantità dei valori da inserire
int som; //somma dei valori
printf("dimmi quanti valori vuoi inserire ");
scanf("%d", &n);
som = 0;
for(i=1;i<=n;i++)
{
    printf("dammi il %d^ valore ", i);
    scanf("%d", &l);
    som += l;
}
    printf("la somma trovata e\' %d\n", som);
    }
    else if(variabiledecisionale==32)
    {
        int a; //numero generico
    int i; //variabile del ciclo
    int s; //somma
    s=0;
    for(i=1;i<=10;i++){
    printf("dammi il %d^ valore",i);
    scanf("%d",&a);
    if(a<10 || a>20)s=s+a;}
    printf("la somma dei numeri compresi tra 10 e 20 e\' %d\n",s);
    if(s%2==0) printf("la somma e\' pari");
    else printf("la somma e\' dispari");
    }
    else if(variabiledecisionale==33)
    {
        int a; //valore
    int s; //somma
    int i; //variabile ciclo
    s=0;
    for(i=1;i<=10;i++)
        {
        printf("dammi il valore: ");
        scanf("%d",&a);
        if (a>10)
            s=s+a;
        }
    printf("la somma trovata e\': %d",s);
    }
    else if(variabiledecisionale==34)
    {
        int voto; //valutazione
    printf("inserisci la valutazione:");
    scanf("%d",&voto);
    if (voto>=7 && voto<=10)
        printf("bravo");
    else if(voto==6)
            printf("sufficiente");
         else if (voto==5)
                printf("insufficiente");
              else if(voto<5)
                    printf("studia di piu\'");
    }
    else if(variabiledecisionale==35)
    {
        int a; //valore
    int m; //media
    int i; //ciclo
    int cont; //contatore
    m=cont=0;
    srand(time(NULL));
    for(i=0;i<30;i++)
    {
        a=rand()%51;
        printf("%d\t",a);
        if (a<25) {
            m+=a;
            cont++;}
    }
    m=m/cont;
    printf("la media dei valori minori di 25 e\' %d",m);
    }
    else if(variabiledecisionale==36)
    {
        int n;//numero da indovinare
    int t;//numero di tentativi
    int v;//valore inserito dall'utente
    srand(time(NULL));
    printf("Gioco indovina il numero in 5 tentativi\n");
    t=5;
    n= rand() %100;
    do {
    printf("Inserisci un numero:\n");
    scanf("%d", &v);
    t--;
    if (v<n) printf("Hai inserito un numero troppo piccolo, ti rimangono %d tentativi\n", t);
    else if (v>n) printf("Hai inserito un numero troppo grande,ti rimangono %d tentativi\n", t);
    }
    while(t>0 && v!=n);
    if (v==n) printf("Hai indovinato il numero in %d tentativi\n",5-t);
    else printf("Il numero era %d", n);
    }
    else if(variabiledecisionale==37)
    {
        int a; //valore generico
    int i; //ciclo
    int s; //somma multipli di 3
    int m; //media dei valori pari
    int c; //contatore
    int cont; //multipli di 5
    s=m=cont=c=0;
    srand(time(NULL));
    for(i=0;i<10;i++)
    {
        a=rand()%51;
        printf("%d\t",a);
        if(a%2==0)
        {
            m+=a;
            c++;
        }
        if(a%3==0) s+=a;
        if(a%5==0) cont++;
    }
    m=m/c;
    printf("la somma dei multipli di 3 e\' %d\n la media dei valori pari e\'%d\n i valori multipli di 5 sono %d\n",s,m,cont);
    }
    else if(variabiledecisionale==38)
    {
        int a; //valore
    int m; //media
    int i; //ciclo
    int cont; //contatore
    m=cont=0;
    srand(time(NULL));
    for(i=0;i<30;i++)
    {
        a=rand()%51;
        printf("%d\t",a);
        if (a<25) {
            m+=a;
            cont++;}
    }
    m=m/cont;
    printf("la media dei valori minori di 25 e\' %d",m);
    }
    else if(variabiledecisionale==39)
    {
        int a;//valore generico
    int i;//ciclo
    int cont; //contatore
    cont=0;
    srand(time(NULL));
    for(i=1;i<=10;i++)
    {
        a = rand() % 100 + 1;
        printf("%d\t",a);
        if(a%7==0)
            cont++;
    }
    printf("i multipli di 7 sono %d\n",cont);
    }
    else if(variabiledecisionale==40)
    {
        int a; //valore da controllare
    int i; //divisore
    int j; //per il ciclo
    int cont; //contatore dei numeri primi
    cont = 0;
    srand(time(NULL));
    for (j=0; j < 10; j++)
    {
        a = rand() % 100 + 1;
        printf("%d ",a);
        i=2;
        while(i<=a/2 && a%i !=0)
            i++;
        if(a%i != 0) cont++;
    }
    printf("i numeri primi sono %d\n",cont);
    }
    else if(variabiledecisionale==41)
    {
        int a; //valore generico
    int i; //ciclo
    int sp; //somma pari
    int sd;// somma dispari
    int d; //differenza
    sp=sd=d=0;
    srand(time(NULL));
    for(i=0;i<10;i++)
    {
        a=rand()%100;
        printf("%d\t",a);
        if (a%2==0) sp+=a;
        else sd+=a;
    }
    printf("la somma dei pari e\' %d e la somma dei dispari e\' %d\n",sp,sd);
    if (sp>sd) d=sp-sd;
    else d=sd-sp;
    printf("la differenza tra le somme e\' %d\n",d);
    }
    else if(variabiledecisionale==42)
    {
        int a; //valore
    int j; //ciclo
    int i; //divisore
    int cont; //contatore numeri primi
    cont=0;
    srand(time(NULL));
    for(j=0;j<100;j++)
    {
        a=rand()%10000+1;
        printf("%d ",a);
        i=2;
        while(i<=a/2 && a%2!=0) i++;
        if(a%i!=0)cont++;
    }
    printf("i numeri primi sono:%d\n",cont);
    }
    else if(variabiledecisionale==43)
    {
        int a; //valore da stampare della sequenza
    int i; //ciclo
    int b; //valore ultimo
    int c; //valore penultimo
    int d; //valore da stampare
    do{
    printf("dammi il valore da stampare (maggiore di 2) ");
    scanf("%d",&d);
    } while(d<=2);
    printf("1   1   ");
    b=c=1;
    for(i=3;i<=d;i++)
    {
        a=b+c;
        printf("%d\t",a);
        c=b; b=a;

    }
    }
    else if(variabiledecisionale==44)
    {

    }

}
