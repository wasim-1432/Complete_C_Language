#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    if(a/2*2==a)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    printf("\n");
    return 0;
}