#include<stdio.h>
int main()
{
    int n;
    printf("Enter any weed day\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuseday");
            break;
        case 3:
            printf("Wednessday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid Input...Please trya again.");
    }
    printf("\n");
    return 0;
}