#include<stdio.h>
int main()
{
    int a;
    printf("Enter any three digit numbers\n");
    scanf("%d",&a);
    printf("Sum is=%d",a%10+a/10%10+a/10/10);
    printf("\n");
    return 0;
}