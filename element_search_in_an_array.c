#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n],i,s,f;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(ar[i]==s)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("True");
    }
    else
    printf("False");
    }
