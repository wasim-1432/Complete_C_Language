#include<stdio.h>
int main()
{
    int i=1;
    printf("Square of Natural Number is:");
    while(i<=10)
    {
        printf("%d ",i*i++);
    }
    printf("\n");
    return 0;
}