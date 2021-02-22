#include<stdio.h>
int main()
{
    int x,a=0,b=0;
    scanf("%d",&x);
    if(0<=x<=100000)
    {
        if(x!=1 && x!=0)
        {
            if(x%2==0 || x%3==0 || x%5==0 || x%7==0 || x%11==0)
            {
                if(x!=2 && x!=3 && x!=5 && x!=7 && x!=11)
                {
                    if(x!=2 && x!=3 && x!=5 && x!=7 && x!=11)
                    {
                        b=x;
                        while(b%2==0 || b%3==0 || b%5==0 || b%7==0 || b%11==0)
                        {
                            b=b-1;
                        }
                    }
                    if(x!=2 && x!=3 && x!=5 && x!=7 && x!=11)
                    {
                        a=x;
                        while(a%2==0 || a%3==0 || a%5==0 || a%7==0 || a%11==0)
                        {
                            a=a+1;
                        }
                    }
                    printf("%d %d",b,a);
                }
                else
                    printf("%d",x);
            }
        }
        else printf("2");
    }

    return 0;
}
