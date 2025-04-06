#include<stdio.h>
int main()
{
    int a;
    printf("Enter the size\n");
    scanf("%d",&a);
    printf("First N Evn natural numbers in reverse order:");
    while(a)
    {
        printf("%d ",2*a--);
    }
    printf("\n");
    return 0;
}