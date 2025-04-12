#include<stdio.h>
float Simple_Interest(int p,int r,int t);
int main()
{
    int p,r,t;
    printf("Enter the principle amount,rate and time\n");
    scanf("%d%d%d",&p,&r,&t);
    printf("Required answer is=%f",Simple_Interest(p,r,t));
    printf("\n");
    return 0;
}
float Simple_Interest(int p,int r,int t)
{
    return p*r*t/100.0;
}