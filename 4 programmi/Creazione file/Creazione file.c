#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    int i,g,m,a;
 //   fp = fopen("numeripari.txt", "w");
 //   if (fp != NULL)
    if ((fp = fopen("date.txt", "r")) != NULL)
    {
        fclose(fp);
        fp = fopen("date.txt","a"); }
    else
        fp = fopen("date.txt", "w");
    for (i=1; i< 3; i++){
        printf("Dammi il giorno: ");
        scanf("%d",&g);
        printf("Dammi il mese: ");
        scanf("%d",&m);
        printf("Dammi l\' anno: ");
        scanf("%d",&a);
        fprintf(fp, "La data numero %d inserita e\' %d/%d/%d\n", i,g,m,a);}

    fclose(fp);
}
