#include<stdio.h>
int main()
{
    int a,i=1;
    printf("Enter the size\n");
    scanf("%d",&a);
    printf("First N Odd natural numbers :");
    while(i<=a)
    {
        printf("%d ",2*i++-1);
    }
    printf("\n");
    return 0;
}