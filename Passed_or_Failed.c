#include<stdio.h>
int main()
{
    int e,m,p,c,co;
    scanf("%d%d%d%d%d",&e,&m,&p,&c,&co);
    if(e>34&&m>34&&p>34&&c>34&&co>34)
    printf("PASSED");
    else
    printf("FAILED");
}