#include<stdio.h>
int main()
{
    int n;
    for(n=0;n<=1000;n++)
    {
        int t=n,count=0;
        while(t)
        {
            count++;
            t=t/10;
        }
        int s=n,sum=0;
        while(s)
        {
            int u=1,r=s%10;
            for(int i=0;i<count;i++)
            {
                u=u*r;
            }
            sum=sum+u;
            s=s/10;
        }
        if(sum==n)
        {
            printf("%d ",sum);
        }
    }
    printf("\n");
    return 0;
}