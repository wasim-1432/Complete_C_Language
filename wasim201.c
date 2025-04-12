#include<stdio.h>
int main()
{
    int number;
    printf("Enter the umber out of 100\n");
    scanf("%d",&number);
    switch(number)
    {
        case 90 ... 100:
            printf("Grade A");
            break;
        case 80 ... 89:
            printf("Garde B");
            break;
        case 70 ... 79:
            printf("Grade C");
            break;
        case 60 ... 69:
            printf("Grade D");
            break;
        case 50 ... 59:
            printf("Grade E");
            break;
        case 1 ... 49:
            printf("Garde F");
            break;
        default:
            printf("Invalid Input... Please Try Again");
    }
    printf("\n");
    return 0;
}