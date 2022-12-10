#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int ar[N],i,s=0;
    for(i=0;i<N;i++)
    {
        scanf("%d",&ar[i]);
        s=s+ar[i];
    }
    printf("%d",s);
    
}