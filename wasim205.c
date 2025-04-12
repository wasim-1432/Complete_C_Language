#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a,b,i=2,s=1,c,sum=0,length,width,height,number,j=2;
    printf("1. For LCM\n");
    printf("2. For Sum of Digits\n");
    printf("3. For Volume of cuboid\n");
    printf("4. For checking prime number or not\n");
    printf("5. Exit\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("Enter any two numbers\n");
            scanf("%d%d",&a,&b);
            while(a!=1 || b!=1)
            {
                if(a%i==0 && b%i==0)
                {
                    a=a/i;
                    b=b/i;
                    s=s*i;
                    continue;
                }
                else if(a%i==0)
                {
                    a=a/i;
                    s=s*i;
                    continue;
                }
                else if(b%i==0)
                {
                    b=b/i;
                    s=s*i;
                    continue;
                }
                i++;
            }
            printf("LCM is=%d",s);
            break;
        case 2:
            printf("Enter any number\n");
            scanf("%d",&c);
            while(c)
            {
                sum=sum+c%10;
                c=c/10;
            }
            printf("Sum is=%d",sum);
            break;
        case 3:
            printf("Enter the length,width and height\n");
            scanf("%d%d%d",&length,&width,&height);
            printf("Volume of cuboid is=%d",length*width*height);
            break;
        case 4:
            printf("Enter any number\n");
            scanf("%d",&number);
            while(j<=number)
            {
                if(number%j==0)
                {
                    break;
                }
                j++;
            }
            if(number==j)
            {
                printf("Prime number");
            }
            else
            {
                printf("Not Prime number");
            }
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid Input...Please Try again");
    }
    printf("\n");
    return 0;
}