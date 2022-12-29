#include<stdio.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    int ar[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2==0)
    {
        s++;
    }
    else
    {
       s=0;
       printf("False");
       break;
    }
}
if(s>0)
{
    printf("True");
}
}