#include<stdio.h>
int main()
{
    int a,i=1;
    printf("Enter the size\n");
    scanf("%d",&a);
    printf("Square of N natural numbers:");
    while(i<=a)
    {
        printf("%d ",i*i);
        i++;
    }
    printf("\n");
    return 0;
}