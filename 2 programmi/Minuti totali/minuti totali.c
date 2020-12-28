#include<stdio.h>
#include<stdlib.h>
int main ()
{
   int ore; //ore
   int min; //minuti
   int tot; //minuti totali
   printf("dammi ore e minuti (hh:mm) ");
   scanf("%d:%d",&ore,&min);
   tot=min+(ore*60);
   printf("i minuti totali sono: %d",tot);
}
