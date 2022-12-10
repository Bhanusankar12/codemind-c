#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,a,ci;
    scanf("%f%f%f",&p,&r,&t);
    a=p*(pow((1+r/100.00),t));
    ci=a-p;
    printf("%.2f",ci);
}