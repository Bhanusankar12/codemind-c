#include<stdio.h>
int main()
{
    int f,b,c,d,e;
    scanf("%d%d%d%d%d",&f,&b,&c,&d,&e);
    float a; 
    a=(f+b+c+d+e)*.2;
    if(a>=90)
    {
        printf("Grade A");
        }
        else if(a>=80&&a<90)
        {
            printf("Grade B");
            }
            else if(a>=70&&a<80)
            {
                printf("Grade C");
                }
                else if(a>=60&&a<70)
                {
                    printf("Grade D");
                    }
                    else if(a>=4&&a<60)
                    {
                        printf("Grade E"); 
                    }
                    else if(a<40) 
                    {
                    printf("Grade F");
                        
                    }
    
}
