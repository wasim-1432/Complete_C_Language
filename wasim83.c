#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the vale of a,b and c\n");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        printf("Real and Distinct roots");
    }
    if(d==0)
    {
        printf("Real and equl roots");
    }
    if(d<0)
    {
        printf("Imaginary Roots");
    }
    printf("\n");
    return 0;
}