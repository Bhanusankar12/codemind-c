#include<stdio.h>
int main()
{
    int i,n,a=0,b=1,c;
    scanf("%d",&n);
    printf("0 1 ");
    for(i=2;i<n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}