#include<stdio.h>
int main()
{
    int i=1;
    printf("Odd Natural Number is:");
    while(i<=10)
    {
        printf("%d ",2*i++-1);
    }
    printf("\n");
    return 0;
}