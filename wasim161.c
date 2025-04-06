#include<stdio.h>
int main()
{
    int n,a=-1,b=1,s=0;
    printf("Enter the size of the fibonacci series\n");
    scanf("%d",&n);
    while(n)
    {
        s=a+b;
        a=b;
        b=s;
        n--;
    }
    printf("%d ",s);
    printf("\n");
    return 0;
}