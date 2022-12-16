#include<stdio.h>
int main()
{
    float bs,hra,da,pf,gs;
    scanf("%f%f%f",&bs,&hra,&da);
    pf=bs*0.12;
    gs=bs+hra+pf+da;
    printf("%.2f
",pf);
    printf("%.2f",gs);
}