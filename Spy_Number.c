#include<stdio.h>
int main()
{
    int n,r=0,s=0,p=1;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        s+=r;
        p*=r;
        n=n/10;
    }
    if(s==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}