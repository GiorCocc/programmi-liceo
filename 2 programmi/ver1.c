#include<stdio.h>
#include<stdlib.h>
int main ()
{
int val1;
int val2;
int num;
val1 = 3;
val2 = val1 * 2 / 3;
num = val1 * val2 / 2 + (val1/val2) * 4 - val1 * (val2/val1);
printf ("num=%d\n",num);
}
