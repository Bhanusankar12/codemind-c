#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n],i,s=0,e=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);     
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s=s+ar[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            e=e+ar[i];
        }
    }
    printf("%d",s-e);
}