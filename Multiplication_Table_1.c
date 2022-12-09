#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=12;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}