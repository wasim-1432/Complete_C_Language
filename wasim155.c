#include<stdio.h>
int main()
{
    int a,b,i=2;
    printf("Enter any number\n");
    scanf("%d%d",&a,&b);
    int isPrime=1;
    for(i=2;i<=(a<b?a:b);i++)
    {
        if(a%i==0 && b%i==0)
        {
            isPrime=0;
            printf("Not Coprime");
            break;
        }
    }
    if(isPrime)
    {
        printf("Coprime");
    }
    printf("\n");
    return 0;
}