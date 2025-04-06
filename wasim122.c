#include<stdio.h>
int main()
{
    int a,i=1;
    printf("Enter the size\n");
    scanf("%d",&a);
    printf("First N natural numbers :");
    while(i<=a)
    {
        printf("%d ",i++);
    }
    printf("\n");
    return 0;
}