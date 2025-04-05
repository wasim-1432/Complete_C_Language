#include<stdio.h>
int main()
{
    int p,r,t;
    printf("Enter the value of p,r and t\n");
    scanf("%d%d%d",&p,&r,&t);
    printf("Simple Interest is=%f",p*r*t/100.0);
    printf("\n");
    return 0;
}