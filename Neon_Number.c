#include<stdio.h>
int main()
{
    int n,s,su=0,r=0,m;
    scanf("%d",&n);
    m=n;
    s=n*n;
    while(s>0)
    {
        r=s%10;
        su+=r;
        s=s/10;
    }
    if(su==m)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}
