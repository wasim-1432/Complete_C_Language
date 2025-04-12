#include<stdio.h>
float Area_Of_Circle(int radius);
int main()
{
    int radius;
    printf("Enter the radius of the circle\n");
    scanf("%d",&radius);
    printf("Area id=%f",Area_Of_Circle(radius));
    printf("\n");
    return 0;
}
float Area_Of_Circle(int radius)
{
    return 3.14*radius*radius;
}