#include<stdio.h>
int main()
{
    int i,a[100],p=1,s,k;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        p=p*a[i];
    }
    s=p*1024;
    k=s/1024;
    printf("%dKB",k);
}