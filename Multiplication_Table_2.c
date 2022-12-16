#include<stdio.h>
int main()
{
    int i,max,n;
    scanf("%d%d",&n,&max);
    for(i=1;i<=max;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}