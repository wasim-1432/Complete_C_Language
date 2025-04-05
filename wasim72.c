#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    if(a%5)
    {
        printf("Not Divisible");
    }
    else
    {
        printf("Divisible");
    }
    printf("\n");
    return 0;
}