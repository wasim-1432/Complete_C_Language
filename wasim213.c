#include<stdio.h>
int Check_Even_Or_Odd(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    if(Check_Even_Or_Odd(n))
    {
        printf("Even number");
    }
    else
    {
        printf("Odd Number");
    }
    printf("\n");
    return 0;
}
int Check_Even_Or_Odd(int n)
{
    if(n%2==0)
    {
        return 1;
    }
    return 0;
}