#include<stdio.h>
int f(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int m;
        scanf("%d
",&m);
        printf("%d
",f(m));
    }
    
}