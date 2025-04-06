#include<stdio.h>
int main()
{
    int i=10;
    printf("Even Natural Number in reverse order:");
    while(i)
    {
        printf("%d ",2*i--);
    }
    printf("\n");
    return 0;
}