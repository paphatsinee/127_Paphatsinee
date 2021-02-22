#include<stdio.h>
int main()
{
    int a,i,j,k=0;
    scanf("%d",&a);
    int n[a][a-1];
    for(i=0;i<a;i++)
    {
        for(j=0;j<a-1;j++)
        {
            scanf("%d",&n[i][j]);

        }
    }
        if(1>n[i][j]>5)
        {
            n[i][j]=0;
        }
        printf("%d",k);


 return 0;
}

