#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any three numbers\n");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("A=%d, B=%d",a,b);
    printf("\n");
    return 0;
}