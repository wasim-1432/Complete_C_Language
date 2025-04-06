#include<stdio.h>
int main()
{
    int a=-1,b=1,s=0,n;
    printf("Enter any number\n");
    scanf("%d",&n);
    printf("Fibonicci series: ");
    while(n)
    {
        printf("%d ",a+b);
        s=a+b;
        a=b;
        b=s;
        n--;
    }
    printf("\n");
    return 0;
}