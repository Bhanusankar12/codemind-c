#include<stdio.h>
int main()
{
    int n,m,o;
    scanf("%d%d%d",&n,&m,&o);
    if(n>50&&m>60&&o>100)
    {
        printf("10");
    }
    else if(n>50&&m>60)
    {
        printf("9");
    }
    else if(m>60&&o>100)
    {
        printf("8");
    }
    else if(n>50&&o>100)
    {
        printf("7");
    }
    else if(n>50||m>60||o>100)
    {
        printf("6");
    }
    else
    {
        printf("5");
    }
}
