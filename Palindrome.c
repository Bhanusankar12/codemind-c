#include<stdio.h>
int main()
{
    int n,r=0,s=0,m;
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        r=r*10+n%10;
        n=n/10;
    }
    if(r==m)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}