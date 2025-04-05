#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);
    if(a>=b)
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",b);
    }
    printf("\n");
    return 0;
}