#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()

 {
    char a[100],b[100]; //messaggio originale
    int i,j,k,z;//gestore ciclo, base, numero di caratteri
    char d,e;
    char c[42]={'a','b','c','d','e','f','g','h','i','l','m','n','o','p','q','r','s','t','u','v','z','a','b','c','d','e','f','g','h','i','l','m','n','o','p','q','r','s','t','u','v','z'};
    printf("Inserisci la base di criptazione: ");
    scanf("%d",&k);
    printf("Inserisci li messaggio da criptare: ");
    scanf("%s",a);
    z=strlen(a);
    for(i=0;i<z;i++)
    {
        d=a[i];
        j=0;
        do{
            if(c[j]==d)
                a[i]=c[j+k-1];
            j++;
        } while(j<42);
    }
    printf("il messaggio criptato e\' %s\n",a);
 }
