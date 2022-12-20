#include<stdio.h>
int main()
{
    int a,i,o;
    scanf("%d",&o);
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        int m,n;
        scanf("%d%d",&m,&n);
        if(m<o||n<o)
        {
            printf("UPLOAD ANOTHER
");
        }
        else if((m==o&&n==o)||(m==n))
        {
            printf("ACCEPTED
");
        }
        else
        {
            printf("CROP IT
");
        }
    }
}