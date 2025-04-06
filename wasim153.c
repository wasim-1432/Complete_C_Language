#include<stdio.h>
int main()
{
    int a,s;
    printf("Enter any number\n");
    scanf("%d",&a);
    for(s=a+1;;s++)
    {
        int i=2;
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
            printf("Next prime number is: %d ",s);
            break;
        }
    }
    printf("\n");
    return 0;
}