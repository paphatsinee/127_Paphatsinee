#include<stdio.h>
int main()
{
    int a,i,j,k=0;
    scanf("%d",&a);
    int n[a][a-1];
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a-1;j++)
        {
            scanf("%d",&n[i][j-1]);

        }

    }
        if(1>n[i][j]>5)
        {
            n[i][j]=0;
        }
}
