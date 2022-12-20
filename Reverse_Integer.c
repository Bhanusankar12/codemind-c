#include<stdio.h>
int main()
{
    int n,r=0;
    scanf("%d",&n);
    while(n)
    {
        r=r*10+n%10;
        n=n/10;
    }
    printf("%d",r);
}