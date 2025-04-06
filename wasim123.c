#include<stdio.h>
int main()
{
    int a;
    printf("Enter the size\n");
    scanf("%d",&a);
    printf("First N natural numbers in revers order:");
    while(a)
    {
        printf("%d ",a--);
    }
    printf("\n");
    return 0;
}