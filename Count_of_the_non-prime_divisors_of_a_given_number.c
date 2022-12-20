#include<stdio.h>
int p(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int d(int n)
{
    int i,c=0,c1=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(p(i))
            {
                c++;
            }
            else
            {
                c1++;
            }
        }
    }
    return c1;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",d(n)+1);
}