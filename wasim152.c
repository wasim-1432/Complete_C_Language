#include<stdio.h>
int main()
{
    int a,b,i,s;
    printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);
    for(s=a;s<b;s++)
    {
        i=2;
        while(i<=s)
        {
            if(s%i==0)
            {
                break;
            }
            i++;
        }
        if(s==i)
        {
            printf("%d ",s);
        }
    }
    printf("\n");
    return 0;
}