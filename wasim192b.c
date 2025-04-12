#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a,b,c,d,e,f;
    float g,h;
    printf("1. For Addition\n");
    printf("2. For Subtraction\n");
    printf("3. For Multiplication\n");
    printf("4. For Division\n");
    printf("5. For Exit\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("Enter any two numbers\n");
            scanf("%d%d",&a,&b);
            printf("Sum is=%d",a+b);
            break;
        case 2:
            printf("Enter any two numbers\n");
            scanf("%d%d",&c,&d);
            printf("Sub is=%d",c-d);
            break;
        case 3:
            printf("Enter any two numbers\n");
            scanf("%d%d",&e,&f);
            printf("Multiplication is=%d",e*f);
            break;
        case 4:
            printf("Enter any two numbers\n");
            scanf("%f%f",&g,&h);
            printf("Division is=%f",g/h);
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid Input...Please Try again.");
    }
    printf("\n");
    return 0;
}