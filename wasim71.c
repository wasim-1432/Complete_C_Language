#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    if(a>0)
    {
        printf("Positive");
    }
    else
    {
        printf("Negative");
    }
    printf("\n");
    return 0;
}