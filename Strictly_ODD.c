#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n],i,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2!=0)
        {
            if(i%2!=0)
            {
                c++;
            }
            else
            {
                printf("False");
                c=0;
                break;
            }
        }
    }
    if(c>0)
    {
        printf("True");
    }
    
}