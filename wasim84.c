#include<stdio.h>
int main()
{
    int year;
    printf("Enter any year\n");
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("Leap year");
    }
    if(year%4==0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not Year");
    }
    printf("\n");
    return 0;
}