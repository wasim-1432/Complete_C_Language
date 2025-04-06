#include<stdio.h>
int main()
{
    int n,y=0;
    printf("Enter any number\n");
    scanf("%d",&n);
    while(n)
    {
        y=y*10+n%10;
        n/=10;
    }
    printf("Reverse number is :%d",y);
    printf("\n");
    return 0;
}