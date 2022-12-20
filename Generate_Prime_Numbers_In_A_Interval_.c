#include<stdio.h>
int main()
{
    int a,b,i,c;
    scanf("%d%d",&a,&b);
    for(a;a<=b;a++)
    {
        c=0;
        for(i=1;i<=a;i++)
        {
            if(a%i==0)
            {
                c++;
            }
        }
      if(c==2)
      {
        printf("%d
",a);
      }
    }
}