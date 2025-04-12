#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,l1,l2,l3,a,b,c,x,y,z;
    printf("1. For Isosceles traingle\n");
    printf("2. For Right angle triangle\n");
    printf("3. For Equilateral traingle\n");
    printf("4. Exit\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("Enter the three sides of the traingle\n");
            scanf("%d%d%d",&l1,&l2,&l3);
            if(l1==l2 || l1==l3 || l2==l3)
            {
                if(l1+l2>l1 || l1+l3>l1 || l2+l3>l2)
                {
                    printf("Valid Traingle");
                }
                else
                {
                    printf("Invalid Triangle");
                }
            }
            else
            {
                printf("Invalid Traingle");
            }
            break;
        case 2:
            printf("Enter the sides of traingle\n");
            scanf("%d%d%d",&a,&b,&c);
            if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
            {
                printf("Right angle traingle");
            }
            else
            {
                printf("Not Right angle traingle");
            }
            break;
        case 3:
            printf("Enter the sides of the traingle\n");
            scanf("%d%d%d",&x,&y,&z);
            if(a==b && b==c)
            {
                printf("Equilateral Traingle");
            }
            else
            {
                printf("Not Equilateral traingle");
            }
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid Input...Pkease try again.");
    }
    printf("\n");
    return 0;
}