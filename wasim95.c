#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    if(a%7==0 || a%3==0)
    {
        printf("Divisible by 3 or 7");
    }
    else
    {
        printf("Not divisible by 3 or 7");
    }
    printf("\n");
    return 0;
}