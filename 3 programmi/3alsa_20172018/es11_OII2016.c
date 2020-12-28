#include <stdio.h>
int f[7];
int i;
int main(){
f[0]=3;
f[1]=1;
for (i=0;i<5;i++)
f[i+2]=f[i]+f[i+1];
for (i=6;i>3;i--)
f[i]=f[i-2]-f[i-1];
for (i=0;i<5;i++)
f[i+2]=f[i]-f[i+1];
for (i=0;i<7;i++)
printf("n%d = %d, ",i+1,f[i]);
}
