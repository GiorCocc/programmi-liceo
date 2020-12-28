#include <stdio.h>
int F(int a,int b)
{
    if (a==b)
        return b;
    else
        if (a > b)
            return F(a-b,b);
        else return F(a,b-a);
}

int main()
{
    int num1, num2;
    printf("dammi il primo numero ");
    scanf("%d", &num1);
    printf("dammi il secondo numero ");
    scanf("%d", &num2);
    printf("I = %d\n",F(num1,num2));
}
