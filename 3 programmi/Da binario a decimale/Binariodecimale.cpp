#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>

int main ()

 {
    int a,i,b;
    char c[11];
    a=0;
    printf("inserisci binario ");
    scanf("%s",c);
    b=strlen(c);
    for(i=0;i<b;i++)
    {
        if(c[i]=='1')
            a+=pow(2,(b-1-i));
    }
    printf("decimale: %d\n",a);
 }
