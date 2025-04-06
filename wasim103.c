#include<stdio.h>
int main()
{
    int l1,l2,l3;
    printf("Enter any three length for traingle\n");
    scanf("%d%d%d",&l1,&l2,&l3);
    if(l1+l2>l3 || l1+l3>l2 || l2+l3>l1)
    {
        printf("Valid Triangle");
    }
    else
    {
        printf("Invalid Triangle");
    }
    printf("\n");
    return 0;
}