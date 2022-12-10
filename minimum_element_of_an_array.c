#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n],i,min;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    ar[i]=min;
    for(i=0;i<n;i++)
    {
        if(ar[i]<min)
    {
         min=ar[i];
    }
    }
    printf("%d",min);
}