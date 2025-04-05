#include<stdio.h>
int main()
{
    int a;
    printf("Enter any three digit number\n");
    scanf("%d",&a);
    printf("Required answer is=%d%d%d",a%10,a/10%10,a/100);
    printf("\n");
    return 0;
}