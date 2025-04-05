#include<stdio.h>
int main()
{
    int length,width,height;
    printf("Enter the value of length,width and height\n");
    scanf("%d%d%d",&length,&width,&height);
    printf("Volume of cuboid is=%d",length*width*height);
    printf("\n");
    return 0;
}