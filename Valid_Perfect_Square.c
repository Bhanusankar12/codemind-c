#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,j,c=0;
        scanf("%d",&a);
        for(j=1;j<a;j++)
        {
            if((j*j)==a)
            {
                c++;
            }
        }
        if(c==1)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}