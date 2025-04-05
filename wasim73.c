#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    if(a%2)
    {
        printf("Odd");
    }
    else
    {
        printf("Even");
    }
    printf("\n");
    return 0;
}