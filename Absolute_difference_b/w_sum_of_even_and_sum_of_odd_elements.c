#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n],i,e=0,o=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);     
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        {
            e=e+ar[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2!=0)
        {
            o=o+ar[i];
        }
    }
    if(e>o)
    printf("%d",e-o);
    else
    printf("%d",o-e);
}