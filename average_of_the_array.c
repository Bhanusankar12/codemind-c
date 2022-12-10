#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float a[n],s=0.0,av;
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
        av=s/n;
    }
    printf("%.2lf",av);
}
