#include<stdio.h>
int main()
{
    int i,min,max;
    scanf("%d%d",&min,&max);
    for(i=min;i<=max;i++)
    {
        if(i%2==0)
        printf("%d ",i);
    }
}