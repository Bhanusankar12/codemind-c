#include<stdio.h>
int p(int n)
{
    int i;
    for(i=2;i<=(n/2)+1;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int m,n,o,i;
    scanf("%d%d",&m,&n);
    o=m+n;
    for(i=1;;i++)
    {
        if(p(o+i))
        {
            printf("%d",i);
            break;
        }
    }
}