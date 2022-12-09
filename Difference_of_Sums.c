#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,s=0,j,d=0,e;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        d+=i;
        s+=(i*i);
    }
    e=d*d;
    printf("%d",abs(s-e));
}