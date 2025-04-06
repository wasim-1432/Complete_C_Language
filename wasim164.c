#include<stdio.h>
int main()
{
    int n,count=0,r,u,sum=0;
    printf("Enter any number\n");
    scanf("%d",&n);
    int t=n;
    while(t)
    {
        count++;
        t/=10;
    }
    int s=n;
    while(s)
    {
        r=s%10;
        u=1;
        for(int i=0;i<count;i++)
        {
            u=u*r;
        }
        sum=sum+u;
        s=s/10;
    }
    if(sum==n)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not Armstrong Number");
    }
    printf("\n");
    return 0;
}