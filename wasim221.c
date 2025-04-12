#include<stdio.h>
int Factorial(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    printf("Factorial is=%d",Factorial(n));
    printf("\n");
    return 0;
}
int Factorial(int n)
{
    int s=1;
    while(n)
    {
        s=s*n;
        n--;
    }
    return s;
}