#include<stdio.h>
int main()
{
    int i=2,n;
    printf("Enter any number\n");
    scanf("%d",&n);
    while(i<=n)
    {
        if(n%i==0)
        {
            break;
        }
        i++;
    }
    if(n==i)
    {
        printf("Prime number");
    }
    else 
    {
        printf("Not Prime number");
    }
    printf("\n");
    return 0;
}