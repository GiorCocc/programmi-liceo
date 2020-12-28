#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    int i;
    int cont=1;
    scanf("%d",&a);
    if(a>31) {a-=31; cont++;} //gennaio
    if(a>28) {a-=28; cont++;} //febbraio
    if(a>31) {a-=31; cont++;} //marzo
    if(a>30) {a-=30; cont++;} //aprile
    if(a>31) {a-=31; cont++;} //maggio
    if(a>30) {a-=30; cont++;} //giugno
    if(a>31) {a-=31; cont++;} //luglio
    if(a>31) {a-=31; cont++;} //agosto
    if(a>30) {a-=30; cont++;} //settembre
    if(a>31) {a-=31; cont++;} //ottobre
    if(a>30) {a-=30; cont++;} //novembre
    if(a>31) {a-=31; cont++;} //dicembre

    printf("a=%d cont=%d",a,cont);
}
