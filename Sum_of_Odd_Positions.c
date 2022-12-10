#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n],i,s=0;
    for(i=0;i<n;i++)
    {
    scanf("%d",&ar[i]);
    if(i%2!=0)
    {
        s=s+ar[i];
    }
    }
    printf("%d",s);
    
}