#include<stdio.h>
int main()
{
    int sum=0,n;
    printf("Enter any number\n");
    scanf("%d",&n);
    while(n)
    {
        sum=sum+n*n*n,n--;
    }
    printf("Sum is=%d",sum);
    printf("\n");
    return 0;
}