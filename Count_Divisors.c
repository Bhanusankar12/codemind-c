#include<stdio.h>
int main()
{
    int a,b,c,d=0;
    scanf("%d%d%d",&a,&b,&c);
    for(a;a<=b;a++)
    {
        if(a%c==0)
        {
            d++;
        }
    }
    printf("%d",d);
}