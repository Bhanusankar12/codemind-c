#include<stdio.h>
int main()
{
    int da,ye,we;
    scanf("%d",&da);
    ye=da/365;
    we=(da%365)/7;
    printf("%d
%d",ye,we);
    return 0;
}