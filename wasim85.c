#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>c)
    {
        printf("Max is:%d",a);
    }
    if(b>a && b>=c)
    {
        printf("Max is:%d",b);
    }
    if(c>=a && c>b)
    {
        printf("Max is:%d",c);
    }
    if(a==b && b==c)
    {
        printf("Max is:%d",a);
    }
    printf("\n");
    return 0;
}