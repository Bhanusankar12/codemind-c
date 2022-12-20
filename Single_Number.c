#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int r=a[0];
    for(i=1;i<n;i++)
    {
        r=r^a[i];
    }
    printf("%d",r);
}