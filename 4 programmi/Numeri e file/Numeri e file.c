#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;

    fp = fopen("file.txt", "w");
    elabora();
    somma();

    fclose(fp);
}

void elabora()
{
    int a,i;
    srand(time(NULL));
    a=rand()%101+50;
    for(i=0;i<a;i++)
    {
        b=rand()%101;
        fprintf(fp, "%d\n", b);
    }

}

void somma()
{

}
