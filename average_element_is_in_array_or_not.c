#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n],i,s=0,av;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+ar[i];
        av=s/n;
    }
    if(n>=av)
    printf("True");
    else
    printf("False");
}
