#include<stdio.h>
int p(int n)
{
	int s,t,l;
	t=n;
	s=0;
	while(t>0)
	{
	    l=t%10;
	    s=s*10+l;
	    t=t/10;
	}
	if(n==s)
	{
	    return 1;
	}
	else
	{
	    return 0;
	}
}
int main()
{
    int n,i,p1,p2;
    scanf("%d",&n);
    for(i=n-1;;i--)
    {
        if(p(i))
        {
            p1=i;
            break;
        }
    }
    for(i=n+1;;i++)
    {
        if(p(i))
        {
            p2=i;
            break;
        }
    }
    if(n-p1==p2-n)
    {
        printf("%d %d ",p1,p2);
    }
    else if(n-p1>p2-n)
    {
        printf("%d",p2);
    }
    else
    {
        printf("%d",p1);
    }
}
