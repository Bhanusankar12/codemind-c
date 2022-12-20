#include<stdio.h>
int main()
{
    long int n;
    scanf("%ld",&n);
    if(n>999999999&&n<10000000000)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}