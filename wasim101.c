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
    else if(a<0)
    {
        printf("Negative");
    }
    else if(a==0)
    {
        printf("Zero");
    }
    printf("\n");
    return 0;
}