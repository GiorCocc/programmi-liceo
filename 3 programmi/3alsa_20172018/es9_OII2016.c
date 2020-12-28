#include <stdio.h>
int max(int a,int b)
{
    if (a>b) return a;
    return b;
}

int f(int a,int b)
{
    if (a==b) return b;
    if (a<0) return -b;
    return max(f(a-1,2*b),f(a-1,2*b+1));
}

int main()
{
    printf("V = %d\n",f(10,0));
    return 0;
}
