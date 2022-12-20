#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,o,k;
    scanf("%d%d%d",&m,&n,&o);
    k=pow(m,n);
    printf("%d",k%o);
}