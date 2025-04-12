#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a,s=1,b,r,n1,sum=0;
    printf("1. For Factorial\n");
    printf("2. For Checking Even or Odd\n");
    printf("3. Area of Circle\n");
    printf("4. Sum of first N natural numbers\n");
    printf("5. Exit");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("Enter any number\n");
            scanf("%d",&a);
            while(a)
            {
                s=s*a;
                a--;
            }
            printf("Factoria is=%d",s);
            break;
        case 2:
            printf("Enter any number\n");
            scanf("%d",&b);
            if(b%2==0)
            {
                printf("Even number");
            }
            else
            {
                printf("Odd number");
            }
            break;
        case 3:
            printf("Enter the radius of the circle\n");
            scanf("%d",&r);
            printf("Area of Circle is=%f",3.14*r*r);
            break;
        case 4:
            printf("Enter any number\n");
            scanf("%d",&n1);
            while(n1)
            {
                sum=sum+n1;
                n1--;
            }
            printf("Sum is=%d",sum);
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid Input...Please Try again");
    }
    printf("\n");
    return 0;
}